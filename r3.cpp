#include<iostream>
using namespace std;
int main()
{
    int no=0,n=0,sp=0;
    string abc="hiibyeekyyjjjjbyeehiikyy";
    string bh[2]={"hii","bye"};
/*string arry tayar krne*/
string arr[50]; //hii byee
string ah;
for(int i=0;i<50;i++)
{
    ah=ah+abc[i];
    no++;
if(no==3)
{
    arr[n]=ah;
    n++;
    ah=' ';
    no=0;
}
}

/* arr mdhe word takle abc cha arr tayar kela aata bh aani arr check krne fkt      string bh[2]={"hii","bye"}   string arr[50];;*/

for(int k=0;k<3;k++)
{
if(arr[k]==bh[0]||bh[1])&&(arr[k+1]==bh)
}
    return 0;
}