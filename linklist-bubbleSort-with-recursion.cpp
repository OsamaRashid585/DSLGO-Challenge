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

int sort(node *curr){ //just use outer loop as recursion
    if(curr == NULL)
       return 0;

    for (node *index = curr->next; index != NULL; index = index->next)
    {
        if(curr->data > index->data){
            int temp = curr->data;
            curr->data = index->data;
            index->data = temp;
        }
    }
    
    sort(curr = curr->next);
}
int main(){
    node *n1 = new node(20); //create nodes
    node *n2 = new node(10);
    node *n3 = new node(0);
    node *n4 = new node(25);
    
    
    node *head = n1; // create and assign head 
    head->next = n2; //link nodes togather
    n2->next = n3;
    n3->next = n4;

    node *curr = head;//inishlize for recurison

    sort(curr);
    for (node *temp = head; temp != NULL; temp = temp->next) // trivase on linkllist
    {
        cout << temp->data << endl;
    }
}