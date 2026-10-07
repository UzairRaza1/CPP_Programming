# include <iostream>
using namespace std;

int main(){
    cout<<"WELCOME TO THE COMUNITY OF CODE WITH UZAIR"<<endl;

   //Taking User input
    
    int a, b;
    cout<<"Enter first number"<<endl;
    cin>>a;

    cout<<"Enter second number"<<endl;
    cin>>b;

    cout<<"The sum is: "<<a+b<<endl;
    cout<<"The difference is: "<<a-b<<endl;
    cout<<"The product is: "<<a*b<<endl;
 
    //If we use float in divide equal then answer will came in decimal 
    //by removing float answer will be single zero for some digits

    cout<<"The quotiennt is: "<<(float)a/b<<endl;
    return 0;


}
