// Paint app

#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>
#include <stack>
using namespace std;

int main()
{
    int L, C;
    while (cin >> L >> C && L || C)
    {
        vector<vector<int>> matriz(L, vector<int>(C));
        for (int i = 0; i < L; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cin >> matriz[i][j];
            }
        }
        int X, Y;
        cin >> X >> Y;
        X--;
        Y--;
        int contador = 0;
        stack<array<int, 2>> pilha;
        pilha.push({X, Y});
        char visitado[1000][1000];
        while (!pilha.empty())
        {
            array<int, 2> atual = pilha.top();
            pilha.pop();
            int x1 = atual[0];
            int y1 = atual[1];
            if (visitado[x1][y1] == 1)
            {
                continue;
            }
            else
            {
                visitado[x1][y1] = 1;
            }
            contador++;
            if (x1 - 1 != 0 && matriz[x1 - 1][y1] == matriz[X][Y] &&
                (visitado[x1 - 1][y1] != 1))
            {
                pilha.push({x1 - 1, y1});
            }

            if (x1 + 1 != L && matriz[x1 + 1][y1] == matriz[X][Y] &&
                (visitado[x1 + 1][y1] != 1))
            {
                pilha.push({x1 + 1, y1});
            }

            if (y1 - 1 != 0 && matriz[x1][y1 - 1] == matriz[X][Y] &&
                (visitado[x1][y1 - 1] != 1))
            {
                pilha.push({x1, y1 - 1});
            }

            if (y1 + 1 != C && matriz[x1][y1 + 1] == matriz[X][Y] &&
                (visitado[x1][y1 + 1] != 1))
            {
                pilha.push({x1, y1 + 1});
            }
        }
        cout << contador;
    }
    return 0;
}