
#include <iostream>
using namespace std;

int get_operation_answer(char expression,int a,int b){
    int result;
    switch (expression) {
            case '+':
                result = a+b;
                break;
            case '-':
                result = a-b;

                break;
            case '/':
                if(b<=0){
                    cout << "Error: Division by zero is not allowed!" << endl;
                    result = 0;
                }else{
                    result = a/b;

                }
                
                break;
            case '*':
                result = a*b;
                
                break;

            default:
                cout<<"Wrong Operation "<<endl;
                result = 0;
                break;
        } 
    return result;  
}
int main(){
    int a,b;
	char expression;
    cout<<"Enter the operation sign desired :";
    cin>>expression;
    cout<<"Enter the Numbers :";
    cin>>a>>b;
    int result;
 
    result = get_operation_answer(expression,a,b);
    cout << result << " is the answer " << endl;
}