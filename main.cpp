#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int func(int m)
{
    if (m < 2)
        return 0;

    int x[2] = {1, 1}, cicle = 0;

    do
    {
        x[cicle % 2] = (x[0] + x[1]) % m;
        cicle++;
    } while (x[0] != 1 || x[1] != 1);

    return cicle;
}

int main()
{
    int m;
    int input;
    cout << "enter number m" << endl;
    cin >> input;
    m = func(input);
    cout << "Periud raven " << m;
}