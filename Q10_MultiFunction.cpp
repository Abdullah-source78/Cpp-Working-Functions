#include <iostream>
using namespace std;


void get_sum(int a,int b){

    int sum = a+b;
    cout <<a<<" + "<<b<<" = "<<sum<<endl;
}
void subtract_func(int a,int b){

    int sub = a-b;
    cout <<a<<" - "<<b<<" = "<<sub<<endl;
    
}
void multiply_func(int a,int b){
    int mul = a*b;
        cout <<a<<" x "<<b<<" = "<<mul<<endl;

}
void divison_func(int a,int b){
    int div;
    if(b<=0){
        
        cout<<"Error!Zero is not divisible"<<endl;
        div= 0;
    }else{
        div = a/b;
    }
    
    cout <<a<<" / "<<b<<" = "<<div<<endl;
}
void modulus_func(int a,int b){
    int mod;
    if(b<=0){
        
        cout<<"Error!Zero is not divisible"<<endl;
        mod= 0;
    }else{
        mod = a%b;
    }
    
    cout <<a<<" % "<<b<<" = "<<mod<<endl;
}
void message_func(){
    cout<<"Wrong Operation! "<<endl;
}




int main(){
    int a,b;
	char expression;
    cout << "Enter the operation sign desired (+, -, *, /, %): ";
    cin >> expression;
    cout << "Enter the numbers: ";
    cin >> a >> b;

    switch (expression) {
            case '+':
               get_sum(a, b);
                break;
            case '-':
                subtract_func(a, b);

                break;
            case '/':
                divison_func(a, b);
                break;
            case '*':
                multiply_func(a, b);
                
                break;
            case '%':
                modulus_func(a,b);
                
                break;    

            default:
                message_func();
                
                break;
        } 
    
}