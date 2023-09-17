//Q7
//Maham Imran SE-F 22I-2733
///PLink, a cellular company, provides the following three different post-paid data packages for its customers Package A: For Rs. 100 per month, 2GB data is provided. Additional data can be purchased for Rs. 30 per 100MB Package B: For Rs. 250 per month, 5.5GB data is provided. Additional data can be purchased for Rs. 20 per 100MB Package C: For Rs. 1000 per month, unlimited access is provided Task A: Write a program that calculates customer’s monthly bill. It should ask how many GBs the customer has used in the month and which package the customer has subscribed for. It should then display the total amount due. Task B: Modify the program in part A so that it also displays how much money package A customer would save if they purchase package B or C and how much money package B customer would save if they purchase package A or C and much money package C customer would save if they purchase package A or B.
#include <iostream>
using namespace std;
char validation(char a);
double packageA(double gb);
double packageB(double gb);
double packageC(double gb);
void getinput();

int main()
{
    getinput();
    return 0;
}


char validation(char a)
{
    while(a != 'A' && a != 'a' && a != 'B' && a != 'b' && a != 'C' && a != 'c' )
    {
        cout<<"wrong input, enter A, B or C."<<endl;
        cin>>a;
    }
    return a;
}
double packageA(double gb)
{
   int  amount = 100;
    if (gb>2)
    {
        gb = gb - 2;
        amount = (300 * gb) + 100;
    }
    return amount;
}

double packageB(double gb)
{
   int  amount = 250;
    if (gb>5.5)
    {
        gb = gb - 5.5;
        amount = (200 * gb) + 250;
    }
    return amount;
}
double packageC()
{
   int  amount = 1000;
    return amount;
}
void getinput()
{
    char pk;
    double gb, amount = 0, amsaved = 0;
    
    
    cout<<"which package do you have? (A/B/C)"<<endl;
    cin>>pk;
    pk = validation(pk);
    cout<<"How many GB's have you used this month?"<<endl;
    cin>>gb;
    pk = tolower(pk);
    switch (pk) {
        case 'a':
            amount = packageA(gb);
            cout<<"your total cost is "<<amount<<endl;
          
            amsaved = packageA(gb) - packageB(gb);
            if(amsaved > 0)
            {
            cout<<"if you chose package B you would save: ";
            cout<<amsaved<<endl;
            }
            amsaved = packageA(gb) - packageC();
            if(amsaved > 0)
            {
            cout<<"if you chose package C you would save: ";
            cout<<amsaved<<endl;
            }
            break;
        case 'b':
            amount = packageB(gb);
            cout<<"your total cost is "<<amount<<endl;
            
            amsaved = packageB(gb) - packageA(gb);
            if(amsaved > 0)
            {
            cout<<"if you chose package A you would save: ";
            cout<<amsaved<<endl;
            }
            amsaved = packageB(gb) - packageC();
            if(amsaved > 0)
            {
            cout<<"if you chose package C you would save: ";
            cout<<amsaved<<endl;
            }
            break;
        case 'c':
            amount = packageC();
            cout<<"your total cost is "<<amount<<endl;
            amsaved = packageC() - packageA(gb);
            if(amsaved > 0)
            {
            cout<<"if you chose package A you would save: ";
            cout<<amsaved<<endl;
            }
            amsaved = packageC() - packageB(gb);
            if(amsaved > 0)
            {
            cout<<"if you chose package B you would save: ";
            cout<<amsaved<<endl;
            }
            
            break;
    }
    
    
}
