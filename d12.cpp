#include<iostream>
using namespace std;
void pro()
{
static int ino=11;
cout<<ino;
++ino;
cout<<ino;

}
int main()
{
pro();
return 0;
}