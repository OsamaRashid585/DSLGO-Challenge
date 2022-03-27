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
    node *n1 = new node(20); //create nodes
    node *n2 = new node(10);
    node *n3 = new node(80);
    node *n4 = new node(25);
    
    node *head = n1; // create and assign head

    head->next = n2; //link nodes togather
    n2->next = n3;
    n3->next = n4;

    node *newnode = new node(39);  //insert at begining
    newnode->next = head;
    head = newnode;

    int inspos = 3;       //insert at middle or end
    node *newnode2 = new node(15);
    node *instemp = head;
    for (int i = 0; i < (inspos-1); i++)
    {//starting from 0
        instemp = instemp->next;
    }
    newnode2->next = instemp->next;
    instemp->next = newnode2;

    head = head->next;  // delete form begging
    
    int delpos = 4;   // delete from middle or end
    node *deltemp = head;
    for (int i = 0; i < (delpos-1); i++)
    {// start from 0
        deltemp = deltemp->next;
    }
    deltemp->next = deltemp->next->next;

    
    for (node *temp = head; temp != NULL; temp = temp->next) // trivase on linkllist
    {
        cout << temp->data << endl;
    }

    for (node *curr = head; curr != NULL; curr = curr->next) // Sort Linked List using bubble sort
    {
        for (node *index = curr->next; index != NULL; index = index->next)
        {
            if(curr->data > index->data){
                int temp = curr->data;
                curr->data = index->data;
                index->data = temp;
            }
        }
        
    }

}