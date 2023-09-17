//Q6
//Maham Imran SE-F 22I-2733
///Write a program that reads three numbers and displays “increasing” if they are in increasing order, “decreasing” if they are in decreasing order, and “neither” otherwise. Here, “increasing” means “strictly increasing”, with each value larger than its predecessor. Before reading numbers, your program should ask the user whether increasing/decreasing should be “strict” or “lenient”. In lenient mode, the sequence 3 4 4 is increasing and the sequence 4 4 4 is both increasing and decreasing.
#include <iostream>
using namespace std;
void strict(int a, int b, int c)
{
    (a>b && b>c && a>c) ? cout<<"Strictly decresing"<<endl :
    (a<b && b<c && a<c) ? cout<<"Strictly increasing"<<endl: cout<<"Neither"<<endl;
}


void lenient(int a, int b, int c)
{
    (a == b && b == c)? cout<<"increasing and decreasing"<<endl:
    (a>=b && b>=c && a>=c)? cout<<"decresing"<<endl:
    (a<=b && b<=c && a<=c)?cout<<"increasing"<<endl: cout<<"none"<<endl;
}
int validation(int x)
{
    while(x != 1 && x != 2)
    {
        cout<<"wrong input, enter 1 or 2"<<endl;
        cin>>x;
    }
    return x;
}
void getinput()
{
    int choice = 0, n1 = 0, n2 = 0, n3 = 0;
    cout<<"enter 3 numbers"<<endl;
    cin>>n1>>n2>>n3;
    cout<<"would you like increaing/decresing to be: (1/2)"<<endl;
    cout<<"1. Strict"<<endl;
    cout<<"2. Lenient"<<endl;
    cin>>choice;
    choice = validation(choice);
    if      (choice == 1)     strict(n1,n2,n3);
    else if (choice == 2)     lenient(n1,n2,n3);
    
}
int main()
{
    getinput();
    return 0;
}
