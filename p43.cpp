#include<iostream>
using namespace std;
int main()
{
    int icnt=0,s=0,t=1;
    char arr[10]={"rreef"};
    char nr[10]={'\0'};
    for(int i=0;i<10;i++)
    {
        icnt=0;
        for(int j=0;j<10;j++)
        {
            if(arr[i]==arr[j])
            {
                icnt++;
            }
        }

     nr[s]=arr[i];
        nr[t]=icnt+'0';
        s=s+2;
        t=t+2;
    }


       
cout<<nr[0];
cout<<nr[1];
cout<<nr[2];
cout<<nr[3];
cout<<nr[4];
cout<<nr[5];
cout<<nr[6];
cout<<nr[7];
cout<<nr[8];
cout<<nr[9];

}