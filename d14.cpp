#include<iostream>
using namespace std;
void pro(int *ino)
{
cout<<*ino;
}
int main()
{
int ino=90;
pro(&ino);
}