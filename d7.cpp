#include<iostream>
using namespace std;
void process()
{
struct node
{
int ino=0;

struct node *next;
};


struct node *ptr=new node;

cout<<ptr->ino;

}
int main()
{
process();
struct node obj;
obj.ino=14;


return 0;
}