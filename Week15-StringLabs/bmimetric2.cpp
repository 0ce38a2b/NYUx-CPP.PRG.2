#include<iostream>
#include<stdio.h>
#include<cmath>
#include<string>
#include <iomanip>
using namespace std;




float bmimetricf(int weight, float height){ return weight/pow(height,2); }


int main(){

float weight;
float height;
cout<<"Please enter weight in kilograms: ";
cin>>weight;
cout<<"Please enter height in meters: ";
cin>>height;


float BMI = bmimetricf(weight, height);


if (BMI < 18.5)
{
    cout<<setprecision(4)<<"BMI is: "<<BMI<<", Status is "<<"Underweight"<<endl;
}
else if (BMI>=18.5 && BMI<=24.9)
{
    cout<<setprecision(4)<<"BMI is: "<<BMI<<", Status is "<<"Normal"<<endl;
}
else if (BMI>=25.0 && BMI<=29.9)
{
    cout<<setprecision(4)<<"BMI is: "<<BMI<<", Status is "<<"Overweight"<<endl;
}
else
{
    cout<<setprecision(4)<<"BMI is: "<<BMI<<", Status is "<<"Obese"<<endl;
}

//system("pause");
return 0;
}
