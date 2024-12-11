#include <iostream>

using namespace std;

int fahrenheit_to_celsius(double fahrenheit) {

    return (5.0 / 9.0) * (fahrenheit - 32);
    
}

int main()
{
    double fahrenheit,celsius;
    cout<<"Enter temperature in farenhite :";
    cin>>fahrenheit;
    
    celsius= fahrenheit_to_celsius(fahrenheit);
    cout <<"Temperature in Celcius is :"<<celsius<<endl;
    return 0;
}