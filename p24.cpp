#include<iostream>
using namespace std;

char fun()
{
char ch[10]={'a','b','b','b','c','c','c','a','f','c'};
int icnt=0,i=0;
char ans[4]={'\0'};
for( i=0;i<10;i++)
{
    icnt=0;
    for(int j=0;j<10;j++)
    {
        if(ch[i]==ch[j])
        {
            icnt++;
        }
    }


    if((icnt%2)!=0)
    {
        ans[0]=ch[i];
        break;
    }
}
if(i==19)
{
    return 0;
}

else
{
return ans[0];
}

}
int main()
{


    cout<<fun();
    return 0;
}