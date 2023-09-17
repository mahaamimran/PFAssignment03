//Q4
//Maham Imran SE-F 22I-2733
///Write a program that converts a positive integer into the Roman number system.

#include <iostream>
using namespace std;
int validation(int a);
void getinput();
string convert(int);


int validation(int a)
{
    while(a>3999)
    {
        cout<<"Enter a number less than 3999"<<endl;
        cin>>a;
    }
    return a;
}

void getinput()
{
    int a = 0;
    cout<<"enter the number you would like to convert."<<endl;
    cin>>a;
    a = validation(a);
   cout<<convert(a)<<endl;
}
string convert(int a)
{
    string roman = "";
    while(a != 0)
    {
        if (a >= 1000){roman = roman + "M"; a = a - 1000;}
    else if (a >= 900){roman = roman + "CM"; a = a - 900;}
    else if (a >= 500){roman = roman + "D"; a = a - 500;}
    else if (a >= 400){roman = roman + "CD"; a = a - 400;}
    else if (a >= 100){roman = roman + "C"; a = a - 100;}
    else if (a >= 90){roman = roman + "XC"; a = a - 90;}
    else if (a >= 50){roman = roman + "L"; a = a - 50;}
    else if (a >= 40){roman = roman + "XL";a = a - 40;}
    else if (a >= 10){roman = roman + "X";a = a - 10;}
    else if (a >= 9){roman = roman + "IX";a = a - 9;}
    else if (a >= 5){roman = roman + "V";a = a - 5;}
    else if (a >= 4){roman = roman + "IV";a = a - 4;}
    else if (a >= 1){roman = roman + "I";a = a - 1;}
    }
    return roman;
}
int main()
{
    getinput();
    return 0;
}



