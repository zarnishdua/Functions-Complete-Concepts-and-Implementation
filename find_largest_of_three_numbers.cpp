
#include<iostream>
using namespace std;

void larger(int x, int y, int z)
{
    if(x == y && y == z)
    {
        cout << "All numbers are equal";
    }
    else if(x == y && x > z)
    {
        cout << x << " and " << y << " are equal and greater than " << z;
    }
    else if(x == z && x > y)
    {
        cout << x << " and " << z << " are equal and greater than " << y;
    }
    else if(y == z && y > x)
    {
        cout << y << " and " << z << " are equal and greater than " << x;
    }
    else if(x > y && x > z)
    {
        cout << "The greater number is " << x;
    }
    else if(y > x && y > z)
    {
        cout << "The greater number is " << y;
    }
    else
    {
        cout << "The greater number is " << z;
    }
}

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    larger(a, b, c);

    return 0;
}
