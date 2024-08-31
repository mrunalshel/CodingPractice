#include<iostream>
using namespace std;
int main()
{
int arr[10]={0,1,2,3,44,4,4,4};
int brr[8]={0};
int k=4,sapdla=0;
int u=0;//u mdhe tota no in brrrr array
/* dupli kadhun tate aani kth value return krte*/
for(int i=0;i<8;i++)
{
    sapdla=0;
    for(int j=0;j<8;j++)
    {
        if(arr[i]==brr[j])
        {
            sapdla=9;
        }
    }

    if(sapdla!=9)
    {
        brr[u]=arr[i];
        u++;
    }
}//last for loop sampla


k=k-1;
cout<<brr[0];
cout<<brr[1];
cout<<brr[2];
cout<<brr[3];
cout<<brr[4];
return 0;
}