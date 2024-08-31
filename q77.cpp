
#include<iostream>
using namespace std;


int main()
{
    int icnt=0;
    int arr[5]={90,10,34,50,50};
    for(int i=0;i<5;i++)
    
    {
        
        for(int j=0;j<5;j++)
        {
            if((arr[i]+arr[j]==100)&&(i!=j))
            {
                icnt++;
            }
        }
    }

    cout<<icnt/2;
return 0;
}
 