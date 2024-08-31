#include<iostream>
using namespace std;
int main()
{
    int t=0;
    string st={"india is my country"};
    string p;
string arr[10];
    for(int i=0;i<st.length();i++)
    {
        if(st[i]!=' ')
        {
            p=p+st[i];
            }
 else{
arr[t]=p;  //t arr chya last paryant jaeel
p=' ';
t++;
        }

 }

 arr[t]=p;

// cout<<arr[2];

 /**arr mdhil string ulti krne brr mdhe atore knre  t arr len jast nahi*/
 string brr[10];
int shevt=t;
 t++;
 for(int i=0;i<t;i++)
 {
brr[i]=arr[shevt];
shevt--;
 }

 cout<<brr[0];
 cout<<" ";
 cout<<brr[1];
 cout<<" ";
 cout<<brr[2];
cout<<" ";
 cout<<brr[3];

 return 0;
}