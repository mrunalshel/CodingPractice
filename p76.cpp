#include<iostream>
using namespace std;
int main()
{


    string fir="hii";
    string sec="by";


   char ch[6]={'\0'};


   for(int i=0;i<6;i++)
   {
    if(i<3)
    {
        ch[i]=fir[i];
    }
    else{

        cout<<ch[i];
        ch[i]=sec[i];
    }

    cout<<ch[i];
   }

  // cout<<ch[0];
   //cout<<sec[1];
}