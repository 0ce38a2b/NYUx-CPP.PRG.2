#include<iostream>
#include<string>
using namespace std;

string remainingwords(string s){
    int ind = s.find(" ");
    string remain_words = "";

    for (int i = ind + 1; i < s.length(); i++)
    {
       remain_words = remain_words + s[i];
    }

    return remain_words;
}

// int main(){
//      cout << remainingwords("the quick brown fox is your ");
//      return 0;
//  }