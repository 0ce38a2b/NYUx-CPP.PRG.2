/*Read from the user a string containing
odd number of characters. Your program should:
a) Print the middle character.
b) Print the string up to but not including the middle character (i.e., the first half
of the string).
c) Print the string from the middle character to the end (not including the
middle character). */
#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
using namespace std;


int main(){

string input;
string mid_char;
string first_half , second_half;

cout<<"Enter an odd length string: ";
getline(cin,input);

int mid_ind = (input.length()+1)/2-1;
mid_char = input[mid_ind];    // string.length()

// for(int i = 0;i < (input.length()+1)/2-1; i++)
// {
//     first_half = first_half + first_half[i];
// }

// for(int i = (input.length()+1)/2-1;i <= input.length()-1; i++)
// {
//     second_half = second_half + second_half[i];
// }
first_half = input.substr(0, input.length()/2);
second_half = input.substr(mid_ind+1, input.length()/2 + 1);

cout<<"Middle character: "<<mid_char<<endl;
cout<<"First half: "<<first_half<<endl;
cout<<"Second half: "<<second_half<<endl;

return 0;

}