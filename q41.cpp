#include<iostream>
using namespace std;
int main()
{
int frow=0,ione=0,max=0,izero=0;
    int arr[3][3]={1,2,1,2,0,0,1,1,1};//0 1 2 3 consider krt pn ek row 3 chich asel
    for(int i=0;i<3;i++)//p100,p41,p45,   char '*','/' single cote mdhe lkhi array mdhe 0 chi gammat;
    {
        ione=0,izero=0;
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==1)
            {
                ione++;
            }

             else if(arr[i][j]==0)
            {
                izero++;//declare rahil
            }
        }//atla for loop sampla


if(izero>max)
{
    max=izero;
    frow=i;
}

else if(ione>max)
{
    max=ione;
    frow=i;
}
    }//dusre for loop sampla

    cout<<frow;
    return 0;
}