#include<iostream>
using namespace std;
struct node1
{
int ino;
struct node1 *p;
};
class first
{
public:
void insert()
{
struct node1 *q;
q=new struct node1;
q->ino=90;


cout<<q->ino;
}
};
int main()
{
int ino1=90;
first obj;
obj.insert();
}