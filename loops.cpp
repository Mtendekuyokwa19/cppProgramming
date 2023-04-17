#include <iostream>
using namespace std;
int main(){
	enum yandhi{
kach,in,kashout	};

yandhi money=kach;
cout<<money;


enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };


    Day today = MONDAY;
    switch (today) {
        case MONDAY:
            cout << "Today is Monday." << endl;
            break;
        case TUESDAY:
            cout << "Today is Tuesday." << endl;
            break;
        case WEDNESDAY:
            cout << "Today is Wednesday." << endl;
            break;
        case THURSDAY:
            cout << "Today is Thursday." << endl;
            break;
        case FRIDAY:
            cout << "Today is Friday." << endl;
            break;
        case SATURDAY:
            cout << "Today is Saturday." << endl;
            break;
        case SUNDAY:
            cout << "Today is Sunday." << endl;
            break;
        default:
            cout << "Invalid day." << endl;
            break;
    }
 
 
 return 0;   
}


	

