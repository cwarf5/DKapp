//
//  main.cpp
//  CPP
//
//  Created by Creed Warf on 1/17/22.
//  This program calculates the end of day sheet for employees. 

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int mop, voids, payOut, coups, lotto, promoCoup, ttaf, manCard, manCred, passCred, chow, pt, coc, ebt, check, loyalty, giftCert, uCard, regDrop, finDrop, total;
    cout << "Total sales: ";
    cin >> mop;
    cout << "Voids: ";
    cin >> voids;
    cout << "Paid Outs: ";
    cin >> payOut;
    cout << "Coupons: ";
    cin >> coups;
    cout << "Lotto Paid Outs: ";
    cin >> lotto;
    cout << "Promo Coupons: ";
    cin >> promoCoup;
    ttaf = mop - (voids+payOut+coups+lotto+promoCoup);
    cout << "Total to account for is " << ttaf << "." << endl;
    cout << "";
    cout << "Manual Card: ";
    cin >> manCard;
    cout << "Manual Credit: ";
    cin >> manCred;
    cout << "Passport Credit: ";
    cin >> passCred;
    cout << "Chow now: ";
    cin >> chow;
    cout << "Pump Test: ";
    cin >> pt;
    cout << "Coc Charges: ";
    cin >> coc;
    cout << "EBT Foodstamps: ";
    cin >> ebt;
    cout << "Paper Checks: ";
    cin >> check;
    cout << "Loyalty Rewards: ";
    cin >> loyalty;
    cout << "Gift Certificate: ";
    cin >> giftCert;
    cout << "Gift Card Redemption: ";
    cin >> uCard;
    cout << "Regular Drops: ";
    cin >> regDrop;
    cout << "Final Drop: ";
    cin >> finDrop;
    total = manCard+manCred+passCred+chow+pt+coc+ebt+check+loyalty+giftCert+uCard+regDrop+finDrop;
    cout << "Your total is " << total << "." << endl;
    if(total > ttaf) {
        int over;
        over = total - ttaf;
        cout << "You are over " << over << ".";
    }
    if(ttaf > total) {
        int shrt;
        shrt = ttaf - total;
        cout << "You are short " << shrt << "." << endl;
    }
}
