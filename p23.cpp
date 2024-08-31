#include<iostream>
using namespace std;
int fun()
{

    int arr[5]={3,5,2,0};
    int brr[5]={0,2,4,4};
int mothe=0,iguest=0,gele=0;
    for(int i=0;i<5;i++)
    {
int atag=arr[i];
        iguest=iguest+arr[i];

     gele=brr[i];
        iguest=iguest-gele;

        
        
        if(iguest>mothe)
        {
            mothe=iguest;
        }
    }

    return mothe;
}

int main()
{

    cout<<fun();
    return 0;
} 