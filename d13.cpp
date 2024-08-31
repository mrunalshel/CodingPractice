#include<iostream>
using namespace std;
template<class t>
void pro(t *ino)
{
cout<<*ino;
}
int main()
{
int ino=7;
pro(&ino);
return 0;
}