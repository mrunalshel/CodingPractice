#include<iostream>
using namespace std;
int main()
{
 
 

int ino=333;
int ino2=ino;
int tayar=0;
while(ino2>0)
{
    int d=ino2%10;//2
     tayar=tayar*10+d;//3
    ino2=ino2/10;
}
if(ino==tayar)
{
    cout<<"yes";
}

else{
    cout<<"no";
}
return 0;
}