#include <iostream>
using namespace std;

struct node 
{
  int data;
  struct node *next;
}*NN,*temp, *head;
void insert_begin(int);
void insert_end(int);
void show();
void insert_any(int, int);
void delete_beg() ;
void delete_end() ;
int total=0;
int main()
{
  NN=new node;
  int c, n, pos;
   head=NULL;
   while(1)
  {
    cout<<endl<<endl;
     for(int i=0;i<40;i++)
       cout<<"=";
   cout<<"\n=   ???? SINGLE LINKED LIST MENU ????  =\n";
   for(int i=0;i<40;i++)
       cout<<"=";
    cout<<"\n 1.insertion at beginning \n 2.insertion at end\n 3.DISPLAY \n 4.Insertion at a fixed place \n 5.Delete from beginning \n 6.Delete from end \n 7.EXIT \n";
   cout<<"\n+++ THE TOTAL NO OF ELEMENTS ARE : "<<total<<" +++\n";
   for(int i=0;i<25;i++)
       cout<<"*";
   cout<<"\n*   enter your choice:  *\n";
   for(int i=0;i<25;i++)
       cout<<"*";
   cout<<endl;
   cin>>c;
   switch (c)
   {
     case 1 : cout<<"enter a number\n ";
              cin>>n;
              insert_begin(n);
              break;
     case 2 : cout<<"enter a number\n";
              cin>>n;
              insert_end(n);
              break;
      case 3 : show();
               break;
      case 4 : cout<<"enter a number\n";
               cin>>n;
               cout<<"enter a position\n";
               cin>>pos;
               insert_any(n, pos);
               break;
      case 5 : delete_beg();
               break;
      case 6 : delete_end();
               break;
      case 7 : exit(0);
      default: cout<< "enter a valid choice\n";
     }
   }
    return 0;
}
void insert_begin(int s)
{
  NN=new node;
  if (head==NULL)
  {
    NN->data=s;
    NN->next=NULL;
    head=NN;
    for(int i=0;i<27;i++)
       cout<<"@";
    cout<<endl<<"@  inserted element is:"<<head->data<<"  @"<<endl;
    for(int i=0;i<27;i++)
       cout<<"@";
    total++;
    cout<<"\n+++ THE TOTAL NO OF ELEMENTS ARE : " <<total<<" +++";
  }
  else 
  { 
    NN->data=s;
    NN->next=head;
    head=NN;
    for(int i=0;i<27;i++)
       cout<<"@";
    cout<<"\n@  inserted element is :"<<head->data<<" @\n";
    for(int i=0;i<27;i++)
       cout<<"@";
    total++;
    cout<<"\n+++ THE TOTAL NO OF ELEMENTS ARE : "<<total<<" +++\n";
  }
}
void insert_end(int s)
{
  NN=new node;
  if (head==NULL)
  {
    NN->data=s;
    head=NN;
    NN->next=NULL;
    cout<<endl<<"inserted element is :"<<head->data;
    total++;
    cout<<"\n+++ THE TOTAL NO OF ELEMENTS ARE : "<<total<<" +++\n";
  }
  else
  {
    NN->data=s;
    NN->next=NULL;
    temp=head;
    while(temp-> next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=NN;
    cout<<endl<<"inserted element is :"<<temp->next->data;
    total++;
    cout<<"\n+++ THE TOTAL NO OF ELEMENTS ARE : "<<total<<" +++\n";
     }
}
void show() 
{
  NN=new node;
  temp=head;
  cout<<"\n+++ THE TOTAL NO OF ELEMENTS ARE : "<<total<<" +++\n";
  if (temp==NULL)
  {
    cout<<"\n #### ERROR! DISPLAYING OF EMPTY LINKED LIST IS NOT POSSIBLE ####\n";
    return;
  }
  cout<<"\n\nthe elements in linked list is \n";
  while(temp->next!=NULL){
    cout<<endl<<temp->data;
    temp=temp->next;
  }
  cout<<endl<<temp->data;
}
void insert_any(int n, int pos)
{
  NN=new node;
   temp=head;
  if (temp==NULL)
  {
    cout<<"\n ELEMENTS ARE NOT INSERTED IN LINKED LIST !! START INSERTING AT HEAD\n";
    return;
  }
  else
  {
  int i=1;
    while(i<pos-1)
    {
      
      temp=temp->next;
      i++;
    }
  NN->data=n;
  NN->next= temp->next;
  temp->next=NN;
  cout<<endl<<"the item is inserted at "<<pos<<" is "<<NN->data;
  total++;
  cout<<"\n+++ THE TOTAL NO OF ELEMENTS ARE : "<<total<<" +++\n";
  }
}
void delete_beg()
{
  if (head==NULL)
  {
    cout<<"\n@@@ ERROR! DELETION IS NOT POSSIBLE @@@";
    return;
  }
  else
  {
  int x;
  x=head->data;
  head=head->next;
  cout<<"\n element is deleted from beginning and deleted element is :"<<x;
  total--;
  cout<<"\n+++ THE TOTAL NO OF ELEMENTS ARE : "<<total<<" +++\n";
  }
}
void delete_end()
{
  if (head==NULL)
  {
    cout<<"\n@@@ ERROR! DELETION IS NOT POSSIBLE @@@";
    return;
  }
  else
  {
  int x;
  temp=head;
  while(temp->next->next!=NULL)
  {
    temp=temp->next;
  }
  x=temp->next->data;
  temp->next=NULL;
  cout<<"\n element is deleted from end and deleted element is :"<<x;
  total--;
  cout<<"\n+++ THE TOTAL NO OF ELEMENTS ARE : "<<total<<" +++ \n";
  }
}

