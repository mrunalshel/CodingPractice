#include<iostream>
using namespace std;
int main()
{

    int arr[5]={12,3,14,56,77};
    int aai=0,icnt=0;
    for(int i=0;i<5;i++)
    {

        aai=3;
        for(int j=i+1;j<5;j++)
        {

            aai=3;
          if(arr[i]>arr[j])
          {
            aai=arr[i]-arr[j];
            cout<<" ";
        }

        else{
            aai=arr[j]-arr[i];
        }
            if((aai<=2)&&(aai>=0))
            {
                cout<<" ";
                //cout<<arr[j];
                cout<<" ";
                icnt++;
                //cout<<arr[i];
                cout<<" ";
               // cout<<aai;
                cout<<" ";
            }
        }
    }
cout<<icnt;
return 0;
}