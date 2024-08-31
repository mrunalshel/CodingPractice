
#include<iostream>
using namespace std;


int main()
{
    int icap=0,ism=0;
char ch[100]={"aaAAA"};
for(int i=0;i<5;i++)
{
    if((ch[i]>='a')&&(ch[i]<='z'))
    {
        ism++;
    }
    else
    {
        icap++;
    }
}

      if(ism>icap)
      {
        cout<<"ism";
      }

      else{
        cout<<"icap";
      }

return 0;
}
