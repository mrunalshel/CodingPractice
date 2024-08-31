#include<iostream>
using namespace std;
void fun()
{
char arr[4]={'d','c','n','a'};
char brr[4]={'D','c','n','a'};
int n=4,k=0;
for(int i=0;i<n;i++)
{
for(int j=i;j<n;j++)
{
if(arr[i]>arr[j])
{
char temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;


}

}

}



for(int i=0;i<n;i++)
{
for(int j=i;j<n;j++)
{
if(brr[i]>brr[j])
{
char temp=brr[i];
brr[i]=brr[j];
brr[j]=temp;


}

}

}

for(k=0;k<n;k++)
{
    char ch1=arr[k]+32,ch2=arr[k]-32;
        if((arr[k]==brr[k])||(brr[k]==ch1)||(brr[k]==ch2))
        {
continue;

        }
        else if(((arr[k]!=brr[k])))
        {
            cout<<"not anagram";
            break;
        }
    
}
if(k==n)
{
cout<<"success";

}
}

int main()
{
fun();

}