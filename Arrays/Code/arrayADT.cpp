#include <iostream>
using namespace std;

// Driver Class
class Array{
    private:
        T *A;
        int size;
        int length;
    
    public:
        Array(){
            size = 10;
            A = new T[10];
            length = 0;
        }
        Array (int sz){
            size = sz;
            length = 0;
            A = new T[size];
        }
        ~Array(){
            delete []A;
        }
        void Display();
        void Insert(int index, int x);
        int Delete(int index);
        int LinearSearch(int x);
        int BinarySearch(int x);
};

//Function: Display
void Array::Display(){
    for(int i = 0; i < length; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

//Function: Insert
void Array<T>::Insert(int index, T x){
    if(index >= 0  && index <= length){
        for(int i = length-1; i >= index; i--){
            A[i+1] = A[i];
        }
        A[index] = x;
        length++;
    }
}

//Function: Delete
int Array::Delete(int index){
    T x = 0;
    if(index >= 0  && index < length -1){
        x = A[index];
        for(int i = index; i < length-1; i++){
            A[i] = A[i+1];
        }
        length--;
    }
    return x;
}

//Function: LinearSearch
int Array::LinearSearch(int x){
    for(int i = 0; i < length-; i++){
        if (A[i] == x){
            return i;
        }
    }
    return -1;
}

int Array::BinarySearch(int x){
    int l, mid, h;
    l = 0;
    h = length - 1;

    while(l <= h){
        mid = (l+h) / 2;
        if(x == A[mid]){
            return mid;
        }
        else if(x < A[mid]){
            h = mid-1;
        }
        else{
            l = mid + 1
        }
    }
    return -1;
}

int main()
{
    


    return 0;
}