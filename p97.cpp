#include<iostream>
using namespace std;
int main()
{

    int arr[10]={10,23,4,65};    
    int brr[10]={8,5,6,7};    
    int ep=0,ag=0,sum=0,jastpahune=0;
int n=0;   //2 20 19< 18
    for(int i=0;i<7;i++)
    {

        ep=arr[n]+ag;
        ag=ep-brr[n];
        
        if(ag>jastpahune)
        {
            //cout<<jastpahune;

            jastpahune=ag;
        }
        n++;
    }

    cout<<jastpahune;
}