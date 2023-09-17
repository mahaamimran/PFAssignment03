//Q5
//Maham Imran SE-F 22I-2733
///Write a program that calculates the price of the car. Use the table given below to make your program. Your program should take total budget and tax filer status as inputs from the user. Your program should allow user to select among different features. At the end, your program should display all selected items, total budget, tax filer status and a message. Your price calculator should print, “Sorry! You don’t afford it.”, if it is out of the budget otherwise print “You have a good taste, go for it!” as a message.
#include <iostream>
using namespace std;
int validation(int a)
{
    while(a != 1 && a != 2)
    {
        cout<<"wrong input, enter 1 or 2"<<endl;
        cin>>a;
    }
    return a;
}
int selection(int cost)
{
    int of = 0, ns = 0, hl = 0, sts = 0;
    cout<<"what optional feature would you like to add?"<<endl;
    cout<<"1. Infotainment System"<<endl;
    cout<<"2. Fog Lights"<<endl;
    cout<<"3. High grade Interior"<<endl;
    cout<<"4. Floor Mats"<<endl;
    cout<<"5. Door visors"<<endl;
    cout<<"6. Trunk Tray"<<endl;
    cin>>of;
    switch (of)
    {
        case 1:
            
            cout<<"would you like a navigation system along with it?"<<endl;
            cout<<"1. Yes "<<endl;
            cout<<"2. No"<<endl;
            cin>>ns;
            ns = validation(ns);
            if (ns == 1)        cost += 59500;
            else if (ns == 2)   cost += 8000;
            break;
            
        case 2:
            
            cout<<"halogen or LED?"<<endl;
            cout<<"1. Halogen"<<endl;
            cout<<"2. LED"<<endl;
            cin>>hl;
            hl = validation(hl);
            if (hl == 1)  cost += 2000;
            else if (hl == 2) cost += 5000;
            break;
            
        case 3:
            cout<<"would you like leather seats or sofa seats?"<<endl;
            cout<<"1. Sofa Seats"<<endl;
            cout<<"2. Leather Seats"<<endl;
            cin>>sts;
            sts = validation(sts);
            if (sts == 1)       cost += 45000;
            else if (sts == 2)  cost += 25000;
            break;
            
        case 4:
            cost += 60000;
            break;
        case 5:
            cost += 60000;
            break;
        case 6:
            cost += 8500;
            break;
    }
    return cost;
    
}
void getinput()
{
    int tb = 0, type = 0, cost = 0, tax = 0 , fc = 0;
    cout<<"what is your total budget?"<<endl;
    cin>>tb;
    
    cout<<"are you a tax filer? (1/2)"<<endl;
    cout<<"1. Yes "<<endl;
    cout<<"2. No"<<endl;
    cin>>tax;
   tax = validation(tax);
    switch (tax)
    {
        case 1: cost = 25000; break;
        case 2: cost = 75000;
    }
    
    cout<<"would you like a (1/2)"<<endl;
    cout<<"1. Manual Car "<<endl;
    cout<<"2. Automatic Car?"<<endl;
    cin>>type;
    type = validation(type);
    
    switch (type)
    {
        case 1: cost += 3769000; break;
        case 2: cost += 3899000;
    }
    
    fc = selection(cost);
    cout<<"final cost is: "<<fc<<endl;
    if (tb >= fc) cout<<"this car is in the budget"<<endl;
    else cout<<"you cant afford this, get a job"<<endl;
    
}

int main()
{
    getinput();
    return 0;
}
