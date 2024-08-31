#include<iostream>
using namespace std;
class fir
{
public:
void fee()
{
cout<<"hii";
}
};
int main()
{
fir *ptr;
ptr=new fir;
ptr->fee(); 
return 0;
}