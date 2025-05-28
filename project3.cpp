    #include <iostream>
#include <string>
using namespace std;
// first thing we create a struct with two part one i the data  (int data )
// Second we line of code is the node pointer ( struct node *next) and we call next because link to the second point
// so now  we have [node *next][int data]--->[new node *next ][int data] ready to create a new node
struct node{
int data ;
string x;
struct node *next;

};
// second we create  a class where first we create two node *head and *tail  and for now are the same
//since we do not have already our list this it had done in form private so we can
class linked_list{
private :
  node *head, *tail;
public :
    linked_list(){
    head = NULL;
    tail = NULL ;
    }
void add_node_tail(int n,string x){
node *temp = new node;//la creazione di un nuovo nodo che segue la forma della struct cioè ha una parte infpomativa
temp->data = n;
temp->x = x;
temp->next =NULL;
if (head == NULL){
    head = temp;
    tail = temp;
}else{

tail->next = temp;
tail= tail->next;
}




}
void add_node_head(int n, string x){

node *temp = new node;
temp->data = n;
temp->x = x;
temp->next =NULL;

if(head == NULL){
    head=temp;
    tail=temp;
}else{
temp->next = head;
head = temp;
}


}
void add_node_midle(int n, string x){
node *temp = new node;
temp->data= n;
temp->x = x;
temp->next= NULL;
if(tail == NULL){
    head =temp;
    tail=temp;

}else{

temp->next = head->next;
head->next=temp;

}
}
//display  list normalmente senza ricursione
void Display(){
node *tmp;
tmp = head;
while (tmp != nullptr){

    cout<<tmp->data <<"\t"<<tmp->next<<"--";
    tmp = tmp->next;

}
}
    node* gethead()
    {
        return head;
    }
//================Display Recursively
    static void display(node *head)
    {
        if(head == NULL)
        {
            cout << "NULL" << endl;
        }
        else
        {
            cout << head->data << "[" <<head->x << "]";
            display(head->next);
        }
    }

    static void concatenate(node *a,node *b)
    {
        if( a != NULL && b!= NULL )
        {
            if (a->next == NULL)
                a->next = b;
            else
                concatenate(a->next,b);
        }
        else
        {
            cout << "Either a or b is NULL\n";
        }
    }
};
int main()
{
linked_list a;
linked_list b;
int  i, n;
int scelta;
int *p;
p= new(nothrow)int[i];

cout<<"how many times ";
cin>>i;

if (p==nullptr){

    cout<<"you can allocate a memory";
}else{

for(n=0; n<=i; n++){

cout<<"enter a number";
cin>>p[n];
a.add_node_head(p[n],"head-a");

}

}
 cout<<endl;
 a.Display();
    return 0;
}
