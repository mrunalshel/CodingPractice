#include<iostream>
using namespace std;
int main()
{
    string abc="hiibyeekyyjjjjbyeehiikyy";
    string bh[2]={"hii","byee"};
    /*bh array ch char mdhe convert krte*/
char ch[10]={'\0'};
int n=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<bh[i].length();j++)
        {
          ch[n]=bh[i][j];  
          cout<<ch[n];
          n++;
        }
    }

    /*ch mdhe char ahet bh mdhle /n ch chi len*/
/*doghanche sgle char checkj krne*/




    return 0;
}