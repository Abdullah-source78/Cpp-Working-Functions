#include <iostream>
using namespace std;

bool is_vowel(char ch){
    ch = tolower(ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return true;
    }else{
        return false;
    }
    
}
int main(){
    
	char input_char;
    
    cout << "Enter a character: ";
    cin >> input_char;

    if (is_vowel(input_char)) {
        cout << input_char << " is Vowel" << endl;
    } else {
        cout << input_char << " is not Vowel" << endl;
    }

}