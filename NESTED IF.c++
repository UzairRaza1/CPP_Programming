/*Write a program that asks the user to enter their marks (0 to 100)
and prints a message based on the following rules:
Marks	                        Message
90 and above	                Excellent! Grade A
80 to 89	                    Very Good! Grade B
70 to 79                    	Good! Grade C
50 to 69                       	Pass! Grade D
Below 50	                    Fail
Less than 0 or more than 100	Invalid mark*/

#include <iostream>
using namespace std;

int main(){
    cout<<"LET'S CODE WITH UZAIR"<<endl;

    int marks;
    
        cout<<"ENTER YOUR MARKS IN GRADES:\n";
        cin>>marks;

    // BY USING NESTED IF
    
    if(marks<0 || marks>100){
        cout<<"INVALID MARKS!";
    }
    else if(marks>=90){
        cout<<"EXCELLENT!\nGRADE A";
    }
    else if(marks>=80){
        cout<<"VERY GOOD!\nGRADE B";
    }
    else if(marks>=70){
        cout<<"GOOD!\nGRADE C";
    }
    else if (marks>=50){
        cout<<"PASS!\nGRADE D";
    }
    else{
        cout<<"FAILED!\nTRY AGAIN!";
    }
        return 0;
}