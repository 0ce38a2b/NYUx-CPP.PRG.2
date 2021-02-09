#include<iostream>
#include<stdio.h>
#include<cmath>

float bmimetricf(int weight, float height){
    return weight/pow(height,2);
}

/*
int main(){

int weight = 50;
float height = 1.58;

printf("BMI is: %3.2f",bmimetricf(weight, height)) ;

system("pause");
return 0;

}
*/