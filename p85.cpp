#include<iostream>
using namespace std;
int main()
{
int ino=1210,i=0,j=0;
int arr[20]={0};



/* 1> array making of nu    2>digit count krne total 0 pasun store in icnt 
  and arr[0]==icnt asel trr conti    */
while(ino>0)
{
    int d=ino%10;
    arr[i]=d;
    ino=ino/10;
    i++;
}
int t=i,h=0,s=i-1;
int brr[i]={0};
while(h!=i)
{
brr[h]=arr[s];
s--;
h++;
}

/*  ba her ek no lavaycha  uu to 10 paryant jau deycha   brr mdhe to no asel trr
count check kraycha  mg check cond   */

int uu=0,sapdla=0,icnt=0;
while(uu!=10)
{
  sapdla=0,icnt=0;
for(int f=0;f<h;f++)  ///no aahe ki nahi array mdhe
{
  if (brr[f]==uu);
  {
    sapdla=1;
  }

}

if(sapdla==1)   //count mojne ekun
{
for(int g=0;g<h;g++)
{
  if(arr[g]==uu)
  {
    icnt++;     //ekun count of no in array
  }
}
}



if(icnt!=arr[uu])
{
  break;
}


  uu++;
}

if(uu==10)
{
  cout<<"okkk";
}

else{
  cout<<" no";
}






}
