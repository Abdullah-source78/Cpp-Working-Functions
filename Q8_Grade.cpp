#include <iostream>
using namespace std;

string get_grades(float gainmarks,float totalMarks){
    float percentage = (gainmarks/totalMarks)*100;
    // float percentage = (static_cast<float>(gainmarks) / totalMarks) * 100;
    string grade;
    if(percentage>= 80){    
        grade = "A";
    }else if(percentage>60 && percentage <=79){    
        grade = "B";
    }else if(percentage>40 && percentage <=59){    
        grade = "C";
    }else{    
        grade = "D";
    }
    return grade;   
}
int main(){
    
	float gainmarks,totalMarks;
    
    string result;
	cout<<"Enter total Marks :";
	cin>>totalMarks;
    

	cout<<endl<<"Enter gained marks of the Student :";
	cin>>gainmarks;
    if(totalMarks<=0.0){
        cout<<"Wrong input!Total Marks cannot be zero"<<endl;
        return -1;
    }
    if(gainmarks>totalMarks || gainmarks < 0.0){
        cout<<"Wrong input!Gained Marks cannot be less than zero"<<endl;
        return -1;
    }

    result = get_grades(gainmarks,totalMarks);
    cout << result << " is Grade of the student" << endl;
  

}