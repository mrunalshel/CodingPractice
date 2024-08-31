#include<iostream>
using namespace std;
class first
{
public:
void fun(int ino1,int ino2)
{
cout<<ino1;
} 

void fun(int ino3)
{
cout<<ino3;
}
};
int main()
{
int ino1=2,ino2=3;
first obj;
obj.fun(ino1,ino2);
obj.fun(ino1);
return 0;
}