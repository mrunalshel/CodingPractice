#include<iostream>
using namespace std;
void fun()
{

char ch[5]={'m','r','u','n','a'};
char bh[5]={'m','r','u','u','a'};
int n=5,icnt=0,i=0,l=0;
for(i=0;i<n;i++)
{
    icnt=0;
for(int j=0;j<n;j++)
{

if(ch[i]==bh[j])
{
icnt++;
}

}
if(icnt<1)
{
cout<<"not alu";
break;
}

}


for(l=0;l<n;l++)
{
    icnt=0;
for(int m=0;m<n;m++)
{

if(bh[l]==ch[m])
{
icnt++;
}

}
if(icnt<1)
{
cout<<"not alu";
break;
}

}
if(l==n)
{
cout<<"is alu";
}

}
 int main()
{
fun();
return 0;

}