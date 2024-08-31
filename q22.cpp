#include<iostream>
using namespace std;
int main()
{

    int arr[56]={23,34,2,3,2,4};
    int brr[90]={0};
    int gh=0;
    for(int i=0;i<5;i++)
    {
        int icnt=0;
        for(int j=0;j<5;j++)
        {
            if(arr[i]==brr[j])
            {
                icnt++;
            }


        }
        if(icnt==0)
        {
brr[gh]=arr[i];
gh++;
        }
    }
    cout<<gh+1;
}