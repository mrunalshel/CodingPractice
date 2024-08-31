#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,3,0};
    int ali=0,pali=0,i=1;
    while(i!=5)
    {

        ali=0,pali=0;
        for(int j=0;j<i;j++)
        {
            ali=arr[j]+ali;
        }

         for(int j=i+1;j<5;j++)
        {
            pali=arr[j]+pali;
        }

        if((ali==arr[i])&&(pali==arr[i]))
        {
            cout<<arr[i];
        }

        
    i++;
}

return 0;
}