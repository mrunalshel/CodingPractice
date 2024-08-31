#include<iostream>
using namespace std;
int main()
{
    int arr[7]={5,4,4,4,5,5}; 
    int r=0,icnt=0,fina;
    for(int i=0;i<7;i++)
    {
        icnt=0;
        for(int j=0;j<7;j++)
       
        {
if(arr[i]==arr[j])
{
    icnt++;
}

}

        if(icnt>=r)
        {
            r=icnt;
            fina=arr[r];
            if(arr[i]<fina)
            {
                fina=arr[i];
            }
        }

    }
cout<<fina;
return 0;
}