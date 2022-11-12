#include <iostream>
using namespace std;

class Diagonal{
    private:
        int n;
        int *A;

    public:
        Diagonal(int n){
            this->n = n;
            A = new int[n];
        }

        void set(int i, int j, int x);
        int get(int i, int j);
        void Display();
        ~Diagonal();
};

void Diagonal::set(int i, int j, int x){
    if(i == j){
        A[i - 1] = x;
    }
}

int Diagonal::get(int i, int j){
    if(i == j){
        return A[i - 1];
    }
    else{
        return 0;
    }
}

void Diagonal::Display(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j){
                cout << A[i - 1] << " ";
            }
            else{
                cout << "0 ";
            }
        }
        cout << endl;
        
    }
}

Diagonal::~Diagonal(){
    delete []A;
}

int main(){

    Diagonal d(5);
    
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            d.set(i, j, 10);
        }
    }

    d.Display();
    
    return 0;
}