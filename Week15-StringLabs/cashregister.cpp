/*Hint: In order to print a number in a specific precision, you can use the round
function passing 2 arguments to it. Use help(round) to get a brief explanation of
this function, and try playing with it, to better understand what it does.
To format to two decimal places you can use the string format function with the format of 2.2f.
//round(val*100)/100;
 */

#include<iostream>
#include<stdio.h>
#include<string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    float fprice;
    float sprice;
    float lowerPrice, higherPrice, basePrice, Price_after_discounts, tax, total_price;
    bool club_card;
    string temp;

    cout<<"Enter price of the first item: ";
    cin>>fprice;
    cout<<"Enter price of the second item: ";
    cin>>sprice;

    basePrice = fprice + sprice;

    if(fprice > sprice)
    {
        lowerPrice = sprice;
        higherPrice = fprice;
    }
    else
    {
        lowerPrice = fprice;
        higherPrice = sprice;
    }

    cout<<"Does customer have a club card? (Y/N): ";
    cin>>temp;

    if(temp == "y" || temp == "Y"){ club_card = true;}
    if(temp == "n" || temp == "N"){ club_card = false;}

    if(club_card == true)
    {
        Price_after_discounts = (higherPrice + lowerPrice / 2.0) * 0.9;
    }

    if(club_card == false)
    {
        Price_after_discounts = higherPrice + lowerPrice / 2;
    }


    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin>>tax;

    total_price = Price_after_discounts * (1.0 + tax/100.0);

    //cout<<fprice<<sprice<<tax;
    cout<<fixed<<setprecision(2);
    cout<<"Base price = "<<basePrice<<endl;
    cout<<"Price after discounts = "<<Price_after_discounts<<endl;
    cout<<"Total price = "<<total_price<<endl;

    return 0;
}