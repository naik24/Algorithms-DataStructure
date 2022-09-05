#include<iostream>
using namespace std;

int power(int base, int exponent)
{
    if(exponent == 0)
    {
        return 1;
    }

    return (power(base, exponent - 1) * base);
}

int main()
{
    int base = 10;
    int exponent = 3;

    cout << power(base, exponent);
}
