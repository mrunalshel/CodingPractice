#include<iostream>
using namespace std;
int main()
{
   

 /* smja 2 aivji c aal pahije  eka array mdhe a b c aas store krne 0 1 2 pramane  mg 2=c   int ino= arramdhla no 7  
 a 1
 a 1 chya no la ahe
 ino=9 9 vya no ch char aal pahije
 ch[i]=ch[ino]
 */
char ch='a';
int ino=0;
char arr[26]={'\0'};
int brr[26]={0};
 for(int i=0;i<26;i++)
 {
arr[i]=ch;
brr[i]=ino;
ch++;
ino++;
 }

 int prr[3]={8,9,0};
 char rea[3]={'\0'};

 for(int j=0;j<3;j++)
 {
    int new1=prr[j];
    rea[j]=arr[new1];
 }

 cout<<rea[0];
  cout<<rea[1];
   cout<<rea[2];

 return 0;
}