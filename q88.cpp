#include<iostream>
using namespace std;
int main()
{
    int ino=1;
int sum=0;
int i=1;
while(i!=ino)
{
    if(ino%i==0)
    {
        sum=sum+i;
    }
    i++;
}
if(sum==ino)
{
    cout<<"perfect";
}
else{
    cout<<"no";
}
return 0;
}