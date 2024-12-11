#include <iostream>
using namespace std;

void get_power(int a,int b) {
    int power = 1;
    for(int i = 1;i<=b;i++){
        power *= a;
    }
    cout<<"Power is "<<power<<endl;
    
}

int main()
{
    int a,b;
    cout<<"Enter Number :";
    cin>>a>>b;

    get_power(a,b);

    return 0;
}