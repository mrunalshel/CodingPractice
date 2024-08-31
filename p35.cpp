#include<iostream>
using namespace std;
int main()
{
    char arr[10]={"((((()))"};
int icnt=0,icnt1=0,ans=0;

 for(int i=0;i<10;i++)
 {
    if(arr[i]=='(')
    {
        icnt++;
    }
 else if(arr[i]==')')
    {
        icnt1++;
    }

 }

if(icnt1>icnt)
{
    ans=icnt;
}
else{
    ans=icnt1;
}


for(int j=0;j<ans;j++)
{
    cout<<"()";
}
return 0;
}