//Q3
//Maham Imran SE-F 22I-2733
///Write a unit conversion program that asks the users from which unit they want to convert (fl. oz, gal, oz, lb, in, ft, mi) and to which unit they want to convert (ml, l, g, kg, mm, cm, m, km). Reject incompatible conversions (such as gal to km). Ask for the value to be converted, then display the result as follows
#include <iostream>
using namespace std;

bool validatefrom(string); //validates from unit
bool validateto(string);//validates to unit
bool checkconversion(string, string); //will select appropriate function to call based on coversion, and if the conversion is valid or not
void floztoml(void);
void floztol(void);
void galtoml(void);
void galtol(void);
void oztog(void);
void oztokg(void);
void lbtog(void);
void lbtokg(void);
void intomm(void);
void intocm(void);
void intom(void);
void intokm(void);
void fttomm(void);
void fttocm(void);
void fttom(void);
void fttokm(void);
void mitomm(void);
void mitocm(void);
void mitom(void);
void mitokm(void);

int main()
{
    string from = "", to = "";
    cout<<"convert from: (floz/gal/oz/lb/in/ft/mi)"<<endl;
    cin>>from;
    while (validatefrom(from) == 0)
    {
        cout<<"input again"<<endl;cin>>from;
        
    }//will ask for input until its correct

    cout<<"convert to: (ml/l/g/kg/mm/cm/m/km)"<<endl;
    cin>>to;
    while (validateto(to) == 0)
    {
        cout<<"input again"<<endl;cin>>to;
        
    }
    
   while(checkconversion(from, to) == 0)
   {
       cout<<"input from unit and to unit again"<<endl;
       cin>>from>>to;
       while (validatefrom(from) == 0)
       {
           cout<<"input again"<<endl;cin>>from;
           
       }//will ask for input until its correct
       while (validateto(to) == 0)
       {
           cout<<"input again"<<endl;cin>>to;}//will ask for input until its correct
       checkconversion(from, to);
        }
    return 0;
}

//functions

bool validatefrom(string from)
{
    if(from == "floz" || from == "gal" || from == "oz" || from == "lb" || from == "in" ||   from == "ft" || from == "mi"){return 1;}
    else{cout<<"invalid from unit"<<endl; return 0;}
}
bool validateto(string to)
{
    if(to == "ml" || to == "l" || to == "g" || to == "kg" || to == "mm" ||   to == "cm" || to == "m" || to == "km"){return 1;}
    else{cout<<"invalid to unit"<<endl; return 0;}
}
bool checkconversion(string from, string to)
{
    bool checkconversion = 1;
    if(from == "floz" && to == "ml"){floztoml();}
    else if(from == "floz" && to == "l"){floztol();}
    else if(from == "gal" && to == "ml"){galtoml();}
    else if(from == "gal" && to == "l"){galtol();}
    else if(from == "oz" && to == "g"){oztog();}
    else if(from == "oz" && to == "kg"){oztokg();}
    else if(from == "lb" && to == "g"){lbtog();}
    else if(from == "lb" && to == "kg"){lbtokg();}
    else if(from == "in" && to == "mm"){intomm();}
    else if(from == "in" && to == "cm"){intocm();}
    else if(from == "in" && to == "m"){intom();}
    else if(from == "in" && to == "km"){intokm();}
    else if(from == "ft" && to == "mm"){fttomm();}
    else if(from == "ft" && to == "cm"){fttocm();}
    else if(from == "ft" && to == "m"){fttom();}
    else if(from == "ft" && to == "km"){fttokm();}
    else if(from == "mi" && to == "mm"){mitomm();}
    else if(from == "mi" && to == "cm"){mitocm();}
    else if(from == "mi" && to == "m"){mitom();}
    else if(from == "mi" && to == "km"){mitokm();}
   else{cout<<"invalid conversion"<<endl; checkconversion = 0;}
return checkconversion;
}
void floztoml()
{
    int a = 0;
    cout<<"Enter the amount of fl oz to convert to ml"<<endl;
    cin>>a;
    cout<<a<<" fl oz are "<<(a*29.5735)<<" ml."<<endl;
}
void floztol()
{
    int a = 0;
    cout<<"Enter the amount of fl oz to convert to l"<<endl;
    cin>>a;
    cout<<a<<" fl oz are "<<(a/33.814)<<" l."<<endl;
}

void galtoml()
{
    int a = 0;
    cout<<"Enter the amount of gal to convert to ml"<<endl;
    cin>>a;
    cout<<a<<" gal are "<<(a*3785.41)<<" ml."<<endl;
}

void galtol()
{
    int a = 0;
    cout<<"Enter the amount of gal to convert to l"<<endl;
    cin>>a;
    cout<<a<<" gal are "<<(a*3.78541)<<" l."<<endl;
}

void oztog()
{
    int a = 0;
    cout<<"Enter the amount of oz to convert to g"<<endl;
    cin>>a;
    cout<<a<<" oz are "<<(a*28.35)<<" g."<<endl;
}

void oztokg()
{
    int a = 0;
    cout<<"Enter the amount of oz to convert to kg"<<endl;
    cin>>a;
    cout<<a<<" oz are "<<(a/35.274)<<" kg."<<endl;
}

void lbtog()
{
    int a = 0;
    cout<<"Enter the amount of lb to convert to g"<<endl;
    cin>>a;
    cout<<a<<" lb are "<<(a*453.592)<<" g."<<endl;
}

void lbtokg()
{
    int a = 0;
    cout<<"Enter the amount of lb to convert to kg"<<endl;
    cin>>a;
    cout<<a<<" lb are "<<(a/2.205)<<" kg."<<endl;
}

void intomm()
{
    int a = 0;
    cout<<"Enter the amount of in to convert to mm"<<endl;
    cin>>a;
    cout<<a<<" in are "<<(a*25.4)<<" mm."<<endl;
}

void intocm()
{
    int a = 0;
    cout<<"Enter the amount of in to convert to cm"<<endl;
    cin>>a;
    cout<<a<<" in are "<<(a*2.54)<<" cm."<<endl;
}

void intom()
{
    int a = 0;
    cout<<"Enter the amount of in to convert to m"<<endl;
    cin>>a;
    cout<<a<<" in are "<<(a/39.37)<<" m."<<endl;
}

void intokm()
{
    int a = 0;
    cout<<"Enter the amount of in to convert to km"<<endl;
    cin>>a;
    cout<<a<<" in are "<<(a/39370)<<" km."<<endl;
}

void fttomm()
{
    int a = 0;
    cout<<"Enter the amount of ft to convert to mm"<<endl;
    cin>>a;
    cout<<a<<" ft are "<<(a*304.8)<<" mm."<<endl;
}

void fttocm()
{
    int a = 0;
    cout<<"Enter the amount of ft to convert to cm"<<endl;
    cin>>a;
    cout<<a<<" ft are "<<(a*30.48)<<" cm."<<endl;
}

void fttom()
{
    int a = 0;
    cout<<"Enter the amount of ft to convert to m"<<endl;
    cin>>a;
    cout<<a<<" ft are "<<(a/3.281)<<" m."<<endl;
}

void fttokm()
{
    int a = 0;
    cout<<"Enter the amount of ft to convert to km"<<endl;
    cin>>a;
    cout<<a<<" ft are "<<(a/3281)<<" km."<<endl;
}

void mitomm()
{
    int a = 0;
    cout<<"Enter the amount of mi to convert to mm"<<endl;
    cin>>a;
    cout<<a<<" mi are "<<(a*1609340)<<" mm."<<endl;
}

void mitocm()
{
    int a = 0;
    cout<<"Enter the amount of mi to convert to cm"<<endl;
    cin>>a;
    cout<<a<<" mi are "<<(a*160934)<<" cm."<<endl;
}

void mitom()
{
    int a = 0;
    cout<<"Enter the amount of mi to convert to m"<<endl;
    cin>>a;
    cout<<a<<" mi are "<<(a*1609.34)<<" m."<<endl;
}

void mitokm()
{
    int a = 0;
    cout<<"Enter the amount of mi to convert to km"<<endl;
    cin>>a;
    cout<<a<<" mi are "<<(a*1.60934)<<" km."<<endl;
}

