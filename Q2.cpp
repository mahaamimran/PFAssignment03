//Q2
//Maham Imran SE-F 22I-2733
/// A minivan has two sliding doors. Each door can be opened by either a dashboard switch, its inside handle, or its outside handle. However, the inside handles do not work if a child lock switch is activated. In order for the sliding doors to open, the gear shift must be in park, and the master unlock switch must be activated. Your task is to simulate a portion of the control software for the vehicle. The input is a sequence of values for the switches and the gear shift, in the following order:
 ///• Dashboard switches for left and right sliding door, child lock, and master unlock (0 for off or 1 for activated)
 ///• Inside and outside handles on the left and right sliding doors (0 or 1)
 ///• The gear shift setting (one of P N D 1 2 3 R).
 ///A typical input would be 0 0 0 1 0 1 0 0 P. Print “left door opens” and/or “right door opens” as appropriate. If neither door opens, print “both doors stay closed”.

#include <iostream>
using namespace std;
bool getswitchstatus();
bool gethandle();
char getgearshift();
void validate(int a);
void validate(char a);


int main()
{

    bool lsd = 0, rsd = 0, cl = 0, mu = 0;     ///dashboard left+right sliding door,childlock, master unlock
    bool ir = 0, ort = 0, il = 0, ol = 0;      //inside+outside legt+right
    char g = '%';                              //gear
    cout<<"left sliding door status? (0/1)"<<endl;
    lsd = getswitchstatus();
    cout<<"right sliding door status? (0/1)"<<endl;
    rsd = getswitchstatus();
    cout<<"child lock status? (0/1)"<<endl;
    cl = getswitchstatus();
    cout<<"master unlock status? (0/1)"<<endl;
    mu = getswitchstatus();
    cout<<"inside right handle status? (0/1)"<<endl;
    ir = gethandle();
    cout<<"outside right handle status? (0/1)"<<endl;
    ort = gethandle();
    cout<<"inside left handle status? (0/1)"<<endl;
    il = gethandle();
    cout<<"outside left handle status? (0/1)"<<endl;
    ol = gethandle();
    cout<<"what is the gear status? (P/N/D/1/2/3/R)"<<endl;
    g = getgearshift();
    
    
    if ((ir == 1 || il == 1) && cl == 1)
    {
        cout<<"Child lock activated, both doors stay closed"<<endl;
    }
    else if((g != 'p' || g != 'P') && mu == 0 && (lsd == 1 || rsd == 1))
    {
        cout<<"Both doors stay closed"<<endl;
    }
    else if (rsd == 1 && (g == 'P' || g == 'p') && mu == 1)
    {
        cout<<"right door open"<<endl;
    }
    else if (lsd == 1 && (g == 'P' || g == 'p') && mu == 1)
    {
        cout<<"left door open"<<endl;
    }
    else if ((ir == 1 || ort == 1) && cl == 0)
    {
        cout<<"right door open"<<endl;

    }
    else if ((il == 1 || ol == 1) && cl == 0)
    {
        cout<<"left door open"<<endl;
    }
    cout<<endl;
    //if inside handles open but childlock is activates doors stay closed
    //if gearshift is p andand mu is 1 sliding dooes can oopen
    return 0;

}


bool getswitchstatus()
{
    int stat = 0;
    cin>>stat;
    validate(stat);
    return stat;    //value will convert to bool on its own
}
bool gethandle()
{
    int stat = 0;
    cin>>stat;
    validate(stat);
    return stat;  //value will convert to bool on its own
}
char getgearshift()
{
    char stat = '%';
    cin>>stat;
    validate(stat);
    return stat;
}
void validate(int a)
{
    if (a == 0 || a == 1)
    {
        cout<<endl;
    }
   else
    {
        cout<<"invalid entry; anything other than a 0 will be treated as 1"<<endl;
    }
}
void validate(char a)
{
    if ((a == 'p') || (a == 'P') || (a == 'n') || (a == 'N') || (a == 'd') || (a == 'D')|| (a == '1') || (a == '2') || (a == '3') || (a == 'r') || (a == 'R'))
    {
        cout<<endl;
    }
    else
    {
        cout<<"invalid input"<<endl;
        
    }
}
