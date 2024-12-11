/// for Guidline
#include <iostream>
using namespace std;

int get_sum(int a, int b) {
    int sum = a + b;
    return sum; 
}

int main()
{
    int a,b,c;
    cout<<"Enter two numbers for thir sum ";
    cin>>a>>b;

    c =get_sum(a, b);
    cout<<"The sum is = "<<c<<endl;


    return 0;
}