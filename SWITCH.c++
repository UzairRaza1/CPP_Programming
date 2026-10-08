/*Task: Write a program that asks the user to enter a number from 1 to 7 and prints the name of the day.

Number  	    Day
1	            Monday
2	            Tuesday
3	            Wednesday
4	            Thursday
5	            Friday
6	            Saturday
7	            Sunday
Anything else	Invalid number*/

#include <iostream>
using namespace std;

int main(){
    cout<<"LET'S CODE WITH UZAIR"<<endl;

    int day;
    cout<<"Enter day (1-7):\n";
    cin>>day;

    switch(day){
        case 1:
            cout<<"MONDAY"<<endl;
            break;
        case 2:
            cout<<"TUESDAY"<<endl;
            break;
        case 3:
            cout<<"WEDNESDAY"<<endl;
            break;
        case 4:
            cout<<"THURSDAY"<<endl;
            break;
        case 5:
            cout<<"FRIDAY"<<endl;
            break;
        case 6:
            cout<<"SATURDAY"<<endl;
            break;
        case 7:
            cout<<"SUNDAY"<<endl;
            break;
        default:
            cout<<"INVALID DAY"<<endl;
    }
        return 0;
}