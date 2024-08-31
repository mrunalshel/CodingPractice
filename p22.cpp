#include<iostream>
using namespace std;

int fun()
{
 int icnt=0,ians=0;
 int arr[5]={34,56,11,112};
 
for(int i=0;i<5;i++)
{
        icnt=0;
        for(int j=0;j<i;j++)
        {
                if(arr[i]>arr[j])
                {
               icnt++;
                }
        }

        if(icnt==i)
        {
            
                ians++;
        }
}

return ians;
}




int main()
{
cout<<fun();
return 0;
}