//Q1
//Maham Imran SE-F 22I-2733
///In a scheduling program, we want to check whether two appointments overlap. For simplicity, appointments start at a full hour, and we use time in hours (0–23). Write a program that takes date, start time, and end time of both appointments and checks whether these appointments overlap.
#include <iostream>
#include <string>
using namespace std;
int gettime();
int getdate();
string validate(int);
string validate (int, int, int);
bool isoverlapping(int, int, int, int, int, int);

int main(void)
{
    bool overlap = 0;
    int starttime1 = 0, starttime2 = 0, endtime1 = 0, endtime2 = 0;
    int date1 = 0, date2 = 0;
    cout<<"Enter the starting time hour (0-23) of the first appointment"<<endl;
    starttime1 = gettime();
    cout<<"Enter the ending time hour (0-23) of the first appointment"<<endl;
    endtime1 = gettime();
    cout<<"Enter the starting time hour (0-23) of the second appointment"<<endl;
    starttime2 = gettime();
    cout<<"Enter the ending time hour (0-23) of the second appointment"<<endl;
    endtime2 = gettime();
    cout<<"Enter date of  first appointment in the format dd mm yyyy"<<endl;
    date1 = getdate();
    cout<<"Enter date of  second appointment in the format dd mm yyyy"<<endl;
    date2 = getdate();
    overlap = isoverlapping(starttime1, endtime1, starttime2, endtime2, date1, date2);
    if(overlap == 1)
    {
        cout<<"time overlaps"<<endl;
    }
    else if (overlap == 0)
    {
        cout<<"time does not overlap"<<endl;
    }
    cout<<endl;
    return 0;
}
int gettime()
{
    int time = 0;
    cin>>time;
    cout<<validate(time)<<endl;
    return time;
}
int getdate()
{
    int date = 0, month = 0, year = 0, finald = 0;
    cin>>date>>month>>year;
    cout<<validate(date, month, year)<<endl;
    string s1 = to_string(date);
    string s2 = to_string(month);
    string s3 = to_string(year);
    string s = s1 + s2 + s3;
    finald = stoi(s);

    //concatinated date
    return finald;
}
string validate(int time)
{
    string status = "";
    if (time > 23 || time < 0)
    {
        status = "invalid input";
    }
    return status;
}
string validate(int date, int month, int year)
{
    string status = "";
    if (date > 31 || month > 12 || year > 2100)
    {
        status = "invalid input";
    }
    return status;
}
bool isoverlapping(int starttime1, int endtime1, int starttime2, int endtime2, int date1, int date2)
{       bool overlap=0;
    if (date1 == date2)
    {
        if ((endtime1 > starttime2) && (starttime1 < endtime2))
        {
            overlap = 1;
        }
    }
    return overlap;
}
