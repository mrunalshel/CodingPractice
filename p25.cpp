#include<iostream>
using namespace std;
int main()
{

    int arr[10]={0,0,0,0,1,1,1};
    int icnt=0,max=0;
    for(int i=0;i<7;i++)
    {
icnt=0;
        for(int j=0;j<7;j++)
        {
            if(arr[i]==arr[j])
            {
                icnt++;
            }

            if(arr[i]!=arr[j])
            {
                continue;
            }



            if(max<icnt)
            {
                max=icnt;
            }
        }


    }

    cout<<max;
    return 0;
}