#include <iostream>
using namespace std;

void get_max(int a,int b,int c) {
    int max = a;
    if(b>max){
        max =b;
    }if(c>max){
        max =c;
    }
    cout<<"Max number is "<<max;
}

int main()
{
    int a,b,c;
    cout<<"Enter Numbers for Check ";
    cin>>a>>b>>c;

    get_max(a,b,c);
    return 0;
}