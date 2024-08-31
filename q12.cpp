#include<iostream>
using namespace std;
void fun()
{
 int n=6,icnt=0,occur=0,temp=0;
    int arr[6]={0,1,2,3,32,3};
int brr[6]={0};
for(int i=0;i<n;i++)
{                           
    for(int j=0;j<n;j++)    
    {
        if(arr[i]<arr[j])
        {
        temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }

        
    }

}
    for(int x=0;x<n;x++)
    {
        icnt=0;
        for(int y=0;y<n;y++)  
        {                      
            if((brr[y]==arr[x])&&(y!=x))
            {
                icnt++;
            }
        }

    if(icnt==0)
        {
            brr[occur]=arr[x];
            occur++;
            icnt=0;
        } 
}

cout<<brr[4];


}
int main()
{
    fun();
    return 0;
}