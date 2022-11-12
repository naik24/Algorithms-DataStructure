#include <iostream>
using namespace std;

class Symmetric{
    private:
        int n;
        int *A;
    
    public:
        Symmetric(int n){
            this -> n = n;
            A = new int[n * (n+1) / 2];
        }
        void setRowMajor(int i, int j, int x);
        int getRowMajor(int i, int j);


        void setColumnMajor(int i, int j, int x);
        int getColumnMajor(int i, int j);
        
        int getN(int i, int j);
        void display(bool row);
};

void Symmetric::setColumnMajor(int i, int j, int x){
    if(i <= j){
        int index = ((j * (j - 1))/2) + i - 1;
        A[index] = x;
    }
}

int Symmetric::getColumnMajor(int i, int j){
    int index = ((j * (j - 1))/2) + i - 1;
    return A[index];
}

void Symmetric::setRowMajor(int i, int j, int x){
    if(i <= j){
        int index = (n * (i - 1)) - (((i-2) * (i - 1))/2) + (j - i);
        A[index] = x;
    }
}

int Symmetric::getRowMajor(int i, int j){
    int index = (n * (i - 1)) - (((i-2) * (i - 1))/2) + (j - i);
    return A[index];
}


void Symmetric::display(bool row) {
    for (int i=n; i>=1; i--){
        for (int j=n; j>=1; j--){
            if (i >= j){
                if (row){
                    cout << getRowMajor(i, j) << " ";
                } else {
                    cout << getColumnMajor(i, j) << " ";
                }
            } else {
                //cout << 0 << " ";
                if(row){
                    cout << getRowMajor(j, i) << " ";
                }else{
                    cout << getColumnMajor(j, i) << " ";
                }
            }
        }
        cout << endl;
    }
}

int main(){
    
    

    Symmetric rm(4);
    rm.setRowMajor(1, 1, 1);
    rm.setRowMajor(1, 2, 2);
    rm.setRowMajor(2, 2, 3);
    rm.setRowMajor(1, 3, 4);
    rm.setRowMajor(2, 3, 5);
    rm.setRowMajor(3, 3, 6);
    rm.setRowMajor(1, 4, 7);
    rm.setRowMajor(2, 4, 8);
    rm.setRowMajor(3, 4, 9);
    rm.setRowMajor(4, 4, 10);

    rm.display(0);

    return 0;
}