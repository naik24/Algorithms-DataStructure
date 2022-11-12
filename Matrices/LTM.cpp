#include <iostream>
using namespace std;

class LTM{
    private:
        int n;
        int *A;
    
    public:
        LTM(int n){
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

void LTM::setRowMajor(int i, int j, int x){
    if(i >= j){
        int index = ((i * (i - 1))/2) + j - 1;
        A[index] = x;
    }
}

int LTM::getRowMajor(int i, int j){
    int index = ((i * (i - 1))/2) + j - 1;
    return A[index];
}

void LTM::setColumnMajor(int i, int j, int x){
    if(i >= j){
        int index = (n * (j - 1)) - (((j-2) * (j - 1))/2) + (i - j);
        A[index] = x;
    }
}

int LTM::getColumnMajor(int i, int j){
    int index = (n * (j - 1)) - (((j-2) * (j - 1))/2) + (i - j);
    return A[index];
}


void LTM::display(bool row) {
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (i >= j){
                if (row){
                    cout << getRowMajor(i, j) << " ";
                } else {
                    cout << getColumnMajor(i, j) << " ";
                }
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    
    

    LTM rm(4);
    rm.setRowMajor(1, 1, 1);
    rm.setRowMajor(2, 1, 2);
    rm.setRowMajor(2, 2, 3);
    rm.setRowMajor(3, 1, 4);
    rm.setRowMajor(3, 2, 5);
    rm.setRowMajor(3, 3, 6);
    rm.setRowMajor(4, 1, 7);
    rm.setRowMajor(4, 2, 8);
    rm.setRowMajor(4, 3, 9);
    rm.setRowMajor(4, 4, 10);

    rm.display(0);

    return 0;
}