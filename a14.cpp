#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,13,4};//pahu
    int brr[5]={1,2,3,4};//gele
    //cout<<arr[0];
    //ek vari create kraycha tyat store krne ekunguest ;jevdhe jatil tevdhe minu skrne // max chi valu bdlne


int min=arr[0];
int ekunpahune=0,ans=0;
for(int i=0;i<4;i++)
{
ekunpahune=ekunpahune+arr[i];
ekunpahune=ekunpahune-brr[i];
if(ekunpahune>min)
{
min=ekunpahune;
ans=i;
}
}

cout<<ans;
}