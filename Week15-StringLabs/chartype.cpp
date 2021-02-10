/*Write a program that  reads a character (string of  length  1)  from  the
user, and classifies it to  one of the following: lower case letter, upper case letter,
digit,  or non-alphanumeric character */
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main(){
    string char_user;
    string lower_case_letter = "abcdefghijklmnopqrstuvwxyz";
    string upper_case_letter = "QWERTYUIOPLKJHGFDSAZXCVBNM";
    string digits = "1234567890";
    string non_alphanumeric = "~!@#$%^&*()_+-{}[]-=|;./<>?:,.";

    cout<<"Enter a character: ";
    cin>>char_user;
    if(lower_case_letter.find(char_user) != string::npos)
    {
        cout<<char_user<<" is a lower case letter."<<endl;
    }

    if(upper_case_letter.find(char_user) != string::npos)
    {
        cout<<char_user<<" is an upper case letter."<<endl;
    }

    if(digits.find(char_user) != string::npos)
    {
        cout<<char_user<<" is a digit."<<endl;
    }

    if(non_alphanumeric.find(char_user) != string::npos)
    {
        cout<<char_user<<" is a non-alphanumeric character."<<endl;
    }


    return 0;
}