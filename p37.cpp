#include<iostream>
using namespace std;
int main()
{
int icnt=0;
    for(int i=50;i<=60;i++)
    {
int ino=i;
while(ino>0)
{

    int d=ino%10;  
    if(d==5)
    {
        icnt++;
    }
    ino=ino/10;
}

    }

    cout<<icnt;
    return 0;
}