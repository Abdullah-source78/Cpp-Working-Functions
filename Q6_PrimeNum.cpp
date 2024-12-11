#include <iostream>
using namespace std;

bool is_primee(int no){
   
    if (no < 2) {
        return false;
    }

    bool prime = true;
    for (int i = 2; i <= no / 2; i++) {
        if (no % i == 0) {
            prime = false;
            break; //divisor pele mil jae to loop khtam
        }
    }
    return prime;
    
}
int main(){
    
	int no;
	cout<<"Enter No :";
	cin>>no;

    if (is_primee(no)) {
        cout << no << " is Prime" << endl;
    } else {
        cout << no << " is not Prime" << endl;
    }

}