#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    float a = 1, b, c, x1, x2;
    cout << "ax^2 + bx + c = 0\nТеорема Вієта дійсна лише при умові a = 1\na = 1" <<  '\n';
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    (-b) = ((x2*x2) + c) / x2;
    x1 = c / x2;
    if (((b * b) - 4 * a * c) > 0)
    {
        cout << "x1 = " << x1 << '\n';
        cout << "x2 = " << x2;
    }
    else
        if (((b * b) - 4 * a * c) == 0)
        {
            cout << "x1 = " << x1 << '\n';
        }
    else
        cout << "Коренів немає\n";
}

