#include<iostream>
#include<stdio.h>
#include<string>
#include <iomanip>
using namespace std;

int main(){
    string day;
    int start_time;
    float duration;
    float cost;

    cout<<"Enter the day the call started at: ";
    cin>>day;
    cout<<"Enter the time the call started at (hhmm): ";
    cin>>start_time;
    cout<<"Enter the duration of the call (in minutes): ";
    cin>>duration;

    if(start_time>=800 && start_time<=1800){ cost = 0.40 * duration; }
    if(start_time<800 || start_time>1800){ cost = 0.25 * duration; }

    if(day == "Sat" || day== "Sun"){ cost = 0.15 * duration; }


    cout<<fixed<<setprecision(2);
    cout<<"This call will cost $"<<cost;
    //return 0 ;
}
