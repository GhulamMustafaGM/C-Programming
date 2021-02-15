// electron calculator

/* 
*
* Big C++ Console Calculator "ElectronCalc"
* > quadratic equation (with parabola)
* 
*            
*               README
*
* This console calculator will you help to
* calculate many different things. 
*
*    > quadratic equation (with parabola)
*      This function will you calculate all 
*      informations for a parabola.
*      You can just make this form yet:
*        f(x) = y = ax^2 + bx + c
*      It will show a parabola in console. 
*      The Input should have a p at the
*      start and be like this:
*            p a b c
*      Example:
*            p 1 3 2
*
* NOTE:
* At this moment it just have a quadratic
* equationsolver (= one calculationtype).
* Im working on a Equation solver 
* (like 20x = 46 - 4x); so this will be
* an update for the future.
*
*/

// Lybraries
#include <iostream>
#include <math.h>
#include <stdio.h>
/*
* #include <algorithm>
* #include <vektor>
*/
using namespace std;

/*
* if no system of coordinates is activated: 
* enum check {positive, negative, equal}
*/

// Macros
// std macros
#define Y_MAX 17
#define X_MAX 17
// with "#include <algorithm>" reachable
/*
* #define MAX(X,Y)    ((X)>(Y)?(X):(Y))
*/

// Global variables
/*
* Yea, I know global variables aren't the
* best things to solve something. But I 
* used it, because in Sololearn you just 
* have one input. 
*/
float a, b, c;
char defcalc;

// Quadratic equation function
int quadraticEquation(void)
{
    try
    {
        // define variables
        float x1, x2, disc, div;
        int x, y, p, xsp, xep, ymax;
        int xposition, yposition;
        // coordinate system [Y]/[X] = 17/17
        char coordinates[Y_MAX][X_MAX] = {0};
        /*
    * vector<int> coordinates 
    * (coordinates, coordinates + 
    * sizeof(coordinates) / sizeof(int));
    */

        // users input f(x) = ax^2 + bx + c
        cout << "Quadratic Equation" << endl
             << "> f(x) = ax^2 + bx + c" << endl
             << endl;
        cout << "Your Equation" << endl
             << "> f(x) = " << a << "x^2 + " << b << "x + " << c << endl
             << endl;

        // solving the equation
        // disc & div errors:
        disc = b * b - 4 * a * c;
        div = 2 * a;
        if (div > 0 || div < 0)
        {
            if (disc > 0)
            {
                x1 = (-b + sqrt(disc)) / (2 * a);
                x2 = (-b - sqrt(disc)) / (2 * a);

                cout << "Result (y = 0):" << endl;
                cout << "> x1 = " << x1 << endl;
                cout << "> x2 = " << x2 << endl;
            }
            else if (disc == 0)
            {
                x1 = (-b) / (2 * a);

                cout << "Result (y = 0):" << endl
                     << "> x1 = x2 = " << x1 << endl;
            }
            else
            {
                cout << "No solution avaible check Error:" << endl
                     << "> #ErrorDisc" << endl
                     << endl;
            }
        }
        else
        {
            cout << "No solution avaible check Error:" << endl
                 << "> #ErrorDivZERO" << endl
                 << endl;
        }

        // round float to integer
        int inta = a;
        int intb = b;
        int intc = c;

        // integer vertex:
        // solve vertex u = -b/2a | v = c - b^2/4a
        // vertex = V(u;v)  u = x | v = y
        int u = -(intb) / 2 * inta;
        int v = intc - (intb * intb) / 4 * inta;
        cout << "Vertex (int):" << endl;
        if (disc == 0 || disc > 0 || div > 0 || div < 0)
        {
            cout << "> V(u/v) = V(" << u << "/" << v << ")" << endl
                 << endl
                 << endl;
        }
        else
        {
            cout << "> No Vertex";
        }
        // parabola calculate positions
        cout << "Parabola:" << endl
             << endl;
        // start conditions
        if (u <= X_MAX && u >= -X_MAX)
        {
            if (v <= Y_MAX && v >= -Y_MAX)
            {
                if (inta > 0 || inta < 0)
                {
                    for (y = 0; y < Y_MAX; ++y)
                    {
                        // x position 1 for y
                        int sqrtxpos = sqrt((intb * intb) - 4 * inta * (intc - y));
                        int xpos1 = (-intb + sqrtxpos) / (2 * inta);
                        // x position 2 for y
                        int xpos2 = u + (u - xpos1);
                        // change coordinates to arraypos
                        int arrpos1 = xpos1 + (X_MAX - 1) / 2;
                        int arrpos2 = xpos2 + (X_MAX - 1) / 2;
                        for (x = 0; x < (X_MAX - 1); ++x)
                        {
                            // cs design for x position
                            coordinates[Y_MAX / 2 - 7][x] = '-';
                            // parabola in xpos1
                            if (x == arrpos1)
                            {
                                coordinates[y][arrpos1] = 'x';
                            }
                            // parabola in xpos2
                            else if (x == arrpos2)
                            {
                                coordinates[y][arrpos2] = 'x';
                            }
                            // cs design for y position
                            else if (x == 8)
                            {
                                coordinates[y][8] = '!';
                            }
                            else
                            {
                                coordinates[y][x] = ' ';
                            }
                        }
                    }
                    // repair and fix
                    for (y = Y_MAX; y > 0; --y)
                    {
                        puts(coordinates[y - 1]);
                    }
                }
                // Error outputs
                else
                {
                    cout << "No parabola avaible check Error:" << endl
                         << "> #ErrorVertex0";
                }
            }
            else
            {
                cout << "No parabola avaible check Error:" << endl
                     << "> #ErrorUpdate";
            }
        }
        else
        {
            cout << "No parabola avaible check Error:" << endl
                 << "> #ErrorVertex0";
        }
    }
    catch (int err)
    {
        cout << "Something gone wrong check Error:" << endl
             << "> #ErrorByCatch" << endl
             << endl;
    }

    return 0;
}

// Main function
int main()
{
    cin >> defcalc >> a >> b >> c;
    // calculator collection
    if (defcalc == 'P' || defcalc == 'p')
    {
        quadraticEquation();
    }
    else
    {
        cout << "Something gone wrong check Error:" << endl
             << "> #ErrorBydefcalc" << endl
             << endl;
    }

    cout << "\n\n> Good Luck! :)\nThank you.\n";

    return 0;
}

