#include <iostream>

using namespace std;

int get_swap_vals(int &a,int &b) {

    int temp = a ;
    a = b;
    b=temp;
    
}

int main()
{
    int a,b,c;
    cout<<"Enter Numbers for Swap :";
    cin>>a>>b;
    
    cout <<"Values before swap are :"<<endl<<"  a = "<<a<<"  b = "<<b;
    get_swap_vals(a,b);
    cout <<"Values after swap are :"<<endl<<"  a = "<<a<<"  b = "<<b;
    return 0;
}