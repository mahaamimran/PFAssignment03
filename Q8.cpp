//Q8
//Maham Imran SE-F 22I-2733
///JoyLand decided to make the tickets more affordable and devised following rules Rule 1: You get a discount of 50% if you are younger than 22 Rule 2: You get a discount of 20%, if you live in either city A or city B and work anywhere outside these cities. Rule 3: You get a discount of 90%, if your income is below Rs. 10000 a month A person that fits any one of the above eligibility criteria would get a discount. Write a program that help the customer to find out if they are eligible for discounted seasonal ticket or not.
#include <iostream>
using namespace std;
int validate(int, int, int);
int validate(string);
int validate(int);
void getinput();
bool age(int,int,int);

int main()
{
    getinput();
    return 0;
}
void getinput()
{
    int dd = 0, mm = 0, yy = 0, check = 0, workstatus = 0;
    string name = "", pc = ""; //postalcode
    float in = 0; //income
    char city = '%';
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Enter your date of birth in dd mm yyyy"<<endl;
    cin>>dd>>mm>>yy;
    check = validate(dd,mm,yy);
    while(check == 0)
    {
        cout<<"Wrong input. Enter date of birth in dd mm yyyy again"<<endl;
        cin>>dd>>mm>>yy;
        check = validate(dd,mm,yy);
    }
    check = 0;
    
    cout<<"Enter your postal code (4#3# for city A, 5#(5/3)##for city B)"<<endl;
    cin>>pc;

    check = validate(pc);
    if (check == 1) city = 'A';
    else if (check == 2) city = 'B';

    check = 0;
    
    cout<<"do you work out of city? (1/2)"<<endl;
    cout<<"1. Yes "<<endl;
    cout<<"2. No"<<endl;
    cin>>workstatus;
    check = validate(workstatus);
    while(check == 0)
    {
        cout<<"Wrong input, Enter 1 or 2"<<endl;
        cin>>workstatus;
        check = validate(workstatus);
    }
    
    cout<<"What is your income per month?"<<endl;
    cin>>in;
    
    cout<<name<<", ";
    if(in <= 10000){cout<<"You are eligible for 90% discount!"<<endl;}
    else if(age(dd,mm,yy) == 1){cout<<"You are eligible for a 50% discount!"<<endl; }
    else if ((city == 'A' || city == 'B') && workstatus == 1)cout<<"You are eligible for a 20% discount!"<<endl;
    else cout<<"You are not eligible for any discount aha"<<endl;
    
}
bool age(int dd, int mm, int yy)
{
    //asuming today is october 20th
    int td = 21, tm = 10, ty = 2022, daysofmonth = 0; //today
    int fd = 0, fm = 0, fy = 0; //final
    fy = ty - yy;
    if(tm>mm)
    fm = tm - mm;
    else
    {
        fy--;
        fm = tm - mm;
        fm = 12 + fm;
    }
    if(td>dd)
    fd = td - dd;
    else
    {
        fm--;
        
              if (fm == 01 || fm == 03 || fm == 05 || fm == 07 || fm == 8 || fm == 10 || fm == 12)
               {
                   daysofmonth = 31;
               }
               else if (fm == 4 || fm == 06 || fm == 9 || fm == 11 )
               {
                   daysofmonth = 30;
               }
               else if (fm == 02)
               {
                   daysofmonth = 28;
               }

        fd = td - dd;
        fd = daysofmonth + fd;
    }
    if(fy<=22) return 1;
    else return 0;
}




int validate(int dd, int mm, int yy)
{
    if (dd > 31 || mm > 12 || yy < 1922) return 0;
    else return 1;
}
int validate(string pc)
{
    if (pc.substr(0,1) == "5" && (pc.substr(2,1) == "3" || pc.substr(2,1) == "5")) return 1;
   else if (pc.substr(0,1) == "4" && pc.substr(2,1) == "3" ) return 2;
        else return 0;
}

int validate(int workstatus)
{
    if (workstatus == 1 || workstatus == 2) return 1;
    else return 0;
}



