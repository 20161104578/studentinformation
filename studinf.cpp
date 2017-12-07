#include<iostream>
using namespace std;
class student
{
    public:
     int age;
     char name[12];
     char num[20];
     class student*next;

};
int main()
{
 class student *p,*q,*head;
 int s=1;
 head=new student;
 q=head;
 while(cout<<"1or2",cin>>s,s==1)
 {
  p=new student;
  q->next=p;
  q=p;
     cin>>p->name;
  cin>>p->num;
  cin>>p->age;
  p->next=NULL;
 }
 p=head;
 while(p!=NULL)
 {
  cout<<p->num<<" "<<p->name<<" "<<p->age<<endl;
     p=p->next;

 }
 p=head;
    while(q)
    {
     q=p->next;
     delete p;
     p=q;
    }

 return 0;
}
