// rand solver

#include <iostream>
#include <cstdlib>
#include <vector>
#include <time.h>
using namespace std;


//==== global vars
char b = char(219);

int w = 41; //width
int h = 21; //height
vector<vector<int>> arr = {};
vector<vector<int>> arr2 = {};
vector<string> arr3 = {};
vector<vector<int>> neigh = {};
int r = 1; //row
int c = 1; //column
vector<int> nxt = {};
int count = 1;

// ===== SOLVING FUNC ======

int solve()
{

    if (r == h - 1 && c == w - 2)
    {
        //   cout << "THE MAZE IS NOW SOLVED!";
        return 0;
    }
    if (arr[r][c] == 0)
    {
        arr[r][c] = 2;
        arr2.push_back({r, c});
    }
    if (arr[r - 1][c] == 0)
    {
        r--;
        solve();
    }
    else if (arr[r][c + 1] == 0)
    {
        c++;
        solve();
    }
    else if (arr[r + 1][c] == 0)
    {
        r++;
        solve();
    }
    else if (arr[r][c - 1] == 0)
    {
        c--;
        solve();
    }
    else
    {
        arr[r][c] = 4;
        arr2.pop_back();
        r = arr2[arr2.size() - 1][0];
        c = arr2[arr2.size() - 1][1];
        solve();
    }

    //return 0;
}



int create()
{
    neigh.clear();
    //== counter to end recursive call quickly
    if (count >= (h / 2) * (w / 2))
    {
        return 0;
    }
    //==== getting the unvisited neighbors
    if (r + 2 < h - 1 && arr[r + 2][c] == 0)
    {
        neigh.push_back({r + 2, c}); //down
    }
    if (r - 2 > 0 && arr[r - 2][c] == 0)
    {
        neigh.push_back({r - 2, c}); //up
    }
    if (c + 2 < w - 1 && arr[r][c + 2] == 0)
    {
        neigh.push_back({r, c + 2}); //right
    }
    if (c - 2 > 0 && arr[r][c - 2] == 0)
    {
        neigh.push_back({r, c - 2}); //left
    }
    //=== forward
    if (neigh.size() > 0)
    {
        nxt.clear();
        nxt = neigh[rand() % neigh.size()];
        //mark it as visited
        arr[nxt[0]][nxt[1]] = 2;
        //counter to know if all cells are already visited
        count++;
        //push to the stack
        arr2.push_back(nxt);
        //remove the walls
        if (c - nxt[1] < 0)
        {
            arr[r][c + 1] = 0;
            c += 2;
            create();
        }
        else if (c - nxt[1] > 0)
        {
            arr[r][c - 1] = 0;
            c -= 2;
            create();
        }
        else if (r - nxt[0] < 0)
        {
            arr[r + 1][c] = 0;
            r += 2;
            create();
        }
        else if (r - nxt[0] > 0)
        {
            arr[r - 1][c] = 0;
            r -= 2;
            create();
        }
    }
    //==== backtrack
    else if (arr2.size() > 0)
    {
        arr2.pop_back();
        r = arr2[arr2.size() - 1][0];
        c = arr2[arr2.size() - 1][1];
        create();
    }
}

int main()
{
    //=== inputs for maze size
    cin >> h;
    cin >> w;
    //adjusting the size
    if (h % 2 == 0)
    {
        h++;
    }
    if (w % 2 == 0)
    {
        w++;
    }
    // getting time as seed
    time_t seed;
    seed = time(0);
    srand(seed % 1000);

    //===== creating the base of the maze
    arr.resize(h);
    for (int j = 0; j < h; j++)
    {
        arr[j].resize(w);
        for (int i = 0; i < w; i++)
        {
            if (j % 2 == 1 && i % 2 == 1)
            {
                arr[j][i] = 0;
                //  cout << " ";
            }
            else if ((j == 0 && i == 1) || (j == h - 1 && i == w - 2))
            {
                arr[j][i] = 0;
            }
            else
            {
                arr[j][i] = 1;
                //   cout << b;
            }
        }
        // cout << "\n";
    }

    //==== starting point of maze creation using depth-first search and recursive backtracking
    arr[r][c] = 2;
    arr2.push_back({r, c});

    //=== start of recursive call
    create();

    //===== printing the finished 
    cout << "Creating the ...\nS is for Start\nE is for End\nHere's your...:\n\n";
    for (int j = 0; j < h; j++)
    {
        for (int i = 0; i < w; i++)
        {
            if (arr[j][i] == 1)
            {
                cout << b;
            }
            else if (j == 0 && i == 1)
            {
                cout << "S";
            }
            else if (j == h - 1 && i == w - 2)
            {
                cout << "E";
            }
            else
            {
                if (arr[j][i] == 2)
                {
                    arr[j][i] = 0;
                }
                cout << " ";
            }
        }
        cout << "\n";
    }

    cout << "\n\n";
    r = 0;
    c = 1;
    count = 0;
    arr[r][c] = 3;
    arr[h - 1][w - 2] = 0;
    arr2.clear();
    arr2.push_back({r, c});
    r++;
    // start of recursive solution
    solve();
    arr[h - 1][w - 2] = 5;
    cout << "Solving the ...\nAfter some pathfinding and backtracking, here's the solved ... :\n\n";

    for (int d3 = 0; d3 < h; d3++)
    {
        for (int d4 = 0; d4 < w; d4++)
        {
            if (arr[d3][d4] == 0)
            {
                cout << " ";
            }
            else if (arr[d3][d4] == 1)
            {
                cout << b;
            }
            else if (arr[d3][d4] == 2)
            {
                //     test += "*";
                cout << "*";
            }
            else if (arr[d3][d4] == 3)
            {
                cout << "S";
            }
            else if (arr[d3][d4] == 5)
            {
                cout << "E";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}