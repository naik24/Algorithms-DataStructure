#include<iostream>
using namespace std;

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T n1, T n2);
    T add();
    T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T n1, T n2)
{
    a = n1;
    b = n2;
}

template <class T>
T Arithmetic<T>::add()
{
    return a + b;
}

template <class T>
T Arithmetic<T>::sub()
{
    return a - b;
}

int main()
{
    Arithmetic<int> a(10, 20);
    cout << a.add() << endl;
    cout << a.sub() << endl;
}
