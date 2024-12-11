/// for Guidline
#include <iostream>
using namespace std;

int get_fact(int a) {
    int fact = 1;
    for(int i =1;i<=a;i++){
        fact *= i;
    }

    return fact; 
}

int main()
{
    int a,c;
    cout<<"Enter Number for Factorial ";
    cin>>a;

    c =get_fact(a);
    cout<<"The fact is = "<<c<<endl;


    return 0;
}