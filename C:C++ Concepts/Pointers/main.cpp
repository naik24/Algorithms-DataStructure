#include <iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r = {10, 5};
    struct Rectangle *p = &r;
    struct Rectangle *q;

    p -> length = 20;
    cout << p->length;

    // creating a structure in Heap
    q = (struct Rectangle *)malloc(sizeof(struct Rectangle));
}
