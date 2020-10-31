#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

int main()
{
    double x;  // вхідний аргумент 
    double R, xp, xk, dx;  // вхідні параметри
    double F;  // результат обчислення виразу

    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "    Function value table" << endl;
    cout << "------------------------------" << endl;
    cout << "|" << setw(6)<< setprecision(3) << "x" << "        |" << setw(7) << setprecision(3) << "F" << "      |" << endl;
    cout << "------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= -8 - R)
            F = R;
        else
            if (-8 - R <= x && x <= -8 + R)
                F = R - sqrt(R * R - (x + 8) * (x + 8));
            else
                if (-8 + R <= x && x <= -4)
                    F = R;
                else
                    if (-4 <= x && x <= 2)
                        F = R + (-1 - R) / 6 * (x + 4);
                    else
                        F = x - 3;

        cout << "|" << setw(6) << setprecision(3) << x << "        |" << setw(7) << setprecision(3) << F << "      |" << endl;

        x += dx;
    };
    cout << "------------------------------" << endl;

    cin.get();
    return 0;
}
