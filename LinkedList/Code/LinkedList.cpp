#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

// displaying linkedlist using recursive call
void display(Node* p){
    if(p != nullptr){
        cout << p -> data << " -> ";
        display(p -> next);
    }
}

int nodeCount(Node *p){
    int count = 0;
    while(p != nullptr){
        count++;
        p = p -> next;
    }
    return count;
}

int nodeSum(Node *p){
    int sum = 0;
    while(p != nullptr){
        sum += p -> data;
        p = p -> next;
    }
    return sum;
}

int maxNode(Node *p){
    int max = p -> data;
    while(p != nullptr){
        if (p -> data > max){
            max = p -> data;
        }
        p = p -> next;
    }

    return max;
}

Node* searchNode(Node *p, int element){
    int nodenum = 1;
    while(p != nullptr){
        if(p -> data == element){
            return p;
        }
        p = p -> next;
    }
    return nullptr;
}

void insert(Node* p, int index, int x){
    Node* t;
    
    if(index < 0 || index > nodeCount(p)){
        return;
    }
    t = new Node;
    t -> data = x;

    if(index == 0){
        t -> next = head;
        head = t;
    }else{
        for(int i = 0; i < index - 1; i++){
            p = p -> next;
        }
        t -> next = p -> next;
        p -> next = t;
    }
}

int Delete(Node* p, int index){
    Node* f = nullptr;
    int x;

    if(index < 1 || index > nodeCount(p)){
        return;
    }
    if(index == 1){
        f = head;
        x = f -> data;
        head = head -> next;
        free(f);
        return x;
    }else{
        for(int i = 0; i < index - 1; i++){
            f = p;
            p = p -> next;
        }
        f -> next = p -> next;
        x = p -> data;
        free(p);
        return x;
    }
}

int main(){
    int A[] = {10, 20, 30, 40, 50};

    Node* head = new Node;
    Node* last;
    Node* temp;

    head -> data = A[0];
    head -> next = nullptr;
    last = head;

    
    //Creating a LinkedList
    for(int i  = 1; i < sizeof(A) / sizeof(A[0]); i++){
        temp = new Node;
        temp -> data = A[i];
        temp -> next = nullptr;
        
        last -> next = temp;
        last = temp;
    }

    //Displaying a LinkedList
    Node* p = head;
/*
    while(p != nullptr){
        cout << p -> data << " -> " << flush;
        p = p -> next;
    }
*/
    display(p);

    cout << "\nNumber of nodes in the LinkedList: " << nodeCount(p);
    cout << "\nSum of nodes in the LinkedList: " << nodeSum(p);
    cout << "\n Maximum value in the LinkedList: " << maxNode(p);

    Node* search = searchNode(p, 30);
    if(search){
        cout << "\nKey Found: " << search -> data;
    }
    else{
        cout << "\nKey Not Found!";
    }

    return 0;
}