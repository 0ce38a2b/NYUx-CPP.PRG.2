#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;


string firstword(string s){
    string first_word;
    int ind = s.find(" ");
    int start = 0, len;

    first_word = s.substr(start, ind);
    return first_word;
}

// string firstword_v2(string s){
//     string first_word;
//     char gap = ' ';

//     int i = 0;
//     while(s[i] != gap){
//         first_word += (s[i]);
//         i++;
//     }
//     return first_word;
// }

// int main(){
//     cout << firstword("the quick brown fox")<<endl;
//     cout << firstword_v2("the quick brown fox")<<endl;
//     return 0;

// }