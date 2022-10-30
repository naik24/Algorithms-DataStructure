#include <iostream>
using namespace std;

//Queue using Array
class Queue{

    private:
        int size;
        int front;
        int rear;
        int *Q;

    public:
        Queue(int size);
        ~Queue();
        bool isFull();
        bool isEmpty();
        void enqueue();
        int dequeue();
        void display();
};

Queue::Queue(int size){
    this -> size = size;
    front = -1;
    rear = -1;
    Q = new int[size];
}

Queue::~Queue(){
    delete [] Q;
}

bool Queue::isFull(){
    if (rear == size - 1){
        return true;
    }
    return false;
}

bool Queue::isEmpty(){
    if(front == rear){
        return true;
    }
    return false;
}

void Queue::enqueue(int x){
    if(isFull()){
        cout << "Queue Overflow" << endl;
    }else{
        rear++;
        Q[rear] = x;
    }
}

int Queue::dequeue(){
    int ele = -1;
    if(isEmpty()){
        cout << "Queue is Empty";
        return ele;
    }else{
        front++;
        ele = Q[front];
    }
    return ele;
}

int main(){
    return 0;
}