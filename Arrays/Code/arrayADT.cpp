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
        int Get(int index);
        void Set(int index, int x);
        int Max();
        int Min();
        int Sum();
        int Avg();
        void Swap(int *x, int *y);
        void Reverse();
        Array* Merge(Array ar2);
};

//Function: Display
void Array::Display(){
    for(int i = 0; i < length; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

//Function: Insert
void Array::Insert(int index, T x){
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

//Function: BinarySearch
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

//Function: Get
int Array::Get(int index){
    if (index >0 && index < length){
        return A[index];
    }
    return -1;
}

//Function::Set
void Array::Set(int index, int x){
    if(index >= 0 && index < length){
        A[index] = x;
    }
}

//Function: Max
int Array::Max(){
    int max = A[0];
    for(int i = 1; i < length; i++){
        if (A[i] > max){
            max = A[i];
        }
    }
    return max;
}

//Function: Min
int Array::Min(){
    int min = A[0];
    for(int i = 1; i < length; i++){
        if (A[i] < max){
            min = A[i];
        }
    }
    return min;
}

//Function: Sum
int Array::Sum(){
    int summ = 0;
    for(int i = 0; i < length; i++){
        summ += A[i];
    }
    return summ
}

//Function: Avg
int Array::Avg(){
    return (float)Sum() / length;  
}

//Function: Swap
void Array::Swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

//Function: Reverse
void Array::Reverse(){
    int i, j;
    for(int i = 0, j = length - 1; i < j ; i++, j--){
        Swap(&A[i], &A[j]);
    }
}

//Function: Merge 2 Arrays
Array* Array::Merge(Array arr2){
    int i, j, k;
    i = j = k = 0;

    Array* arr3 = new Array(length + arr2.length);

    while(i < length && j < arr2.length){
        if(A[i] < arr2.A[j]){
            arr3 -> A[k++] = A[i++];
        }
        else{
            arr3->A[k++] = arr2.A[j++];
        }
    }

    for(; i < length; i++){
        arr3 -> A[k++] = A[i];
    }
    for(; j < arr2.length; j++){
        arr3 -> A[k++] = arr2.A[j];
    }

    arr3->length = length + arr2.length;

    return arr3;
}

int main()
{
    


    return 0;
}