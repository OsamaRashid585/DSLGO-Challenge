#include <iostream>
using namespace std;
struct node{ //what's node be like
    int data;
    node *next;
    node(int val){
        data = val;
        next = NULL;
    }
};


int main(){
    node *n1 = new node(1); //create nodes
    node *n2 = new node(2);
    node *n3 = new node(3);
    node *n4 = new node(4);
    node *n5 = new node(5);
    node *n6 = new node(6);
    int length;
    
    node *head = n1; // create and assign head 
    head->next = n2; //link nodes togather
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;

    for (node *curr = head; curr != NULL; curr = curr->next)
    {
        length++;
    }
    
    length /= 2;

    node *temp = head;

    for (int i = 1; i <= length; i++)
    {
        int tempd = temp->data;
        temp->data = temp->next->data;
        temp->next->data = tempd;

        temp = temp->next->next;
    }
    
    for (node *curr = head; curr != NULL; curr = curr->next)
    {
        cout << curr->data << endl;
    }
}