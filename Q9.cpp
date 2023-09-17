//Q8
//Maham Imran SE-F 22I-2733
///You are a networks engineer for a renowned product development company. You have been tasked with programming the interface for one of your company's applications. Before proceeding ahead, you are required to write the following functions for your development:
#import <iostream>
using namespace std;
void networkStartValidator();
bool isconnected();
float availableBandwidth();
void error(string);
void startapplication();
void fileSaver(string);
string getFileType(char);
void saveFile(string,string);
bool isFileSaved(string);
void networkSend(string,string);
int validation(int);
int validation(char);
void sendmessage(string);

int main()
{
    //isFileSaved("fileanem");
  networkStartValidator();
    return 0;
}
bool isconnected()
{
    int wifi = 0;
    cout<<"is the application connected to wifi? (1/2) "<<endl;
    cout<<"1. Yes "<<endl;
    cout<<"2. No"<<endl;
    cin>>wifi;
    wifi = validation(wifi);
    if(wifi == 1) return 1;
    else return 0;
}

float availableBandwidth()
{
    float bandw = 0;
    cout<<"what is the available bandwidth at the moment?"<<endl;
    cin>>bandw;
    return bandw;
}
void networkStartValidator()
{
    
    if (isconnected() == 1 && availableBandwidth() > 20) startapplication();
    else error("Wifi must be connected and Bandwidth must be more than 20 to start application.");
    
}
void startapplication()
{
    string filename;
    cout<<"Enter the file name"<<endl;
    cin>>filename;
    fileSaver(filename);
}

void fileSaver(string filename)
{
    char type;
    int check;
    cout<<"what is the file type? (T/M/P/I)"<<endl;
    cin>>type;
    type = tolower(type);
    check = validation(type);
    while(check == 0)
    {
        cout<<"Wrong input, enter either t,m,p or i"<<endl;
        cin>>type;
        type = tolower(type);
        check = validation(type);
    }
    
    if (availableBandwidth()>5)
    {
        if(getFileType(type) == "txt")saveFile("TextFile", filename);
        else if(getFileType(type) == "mp3")saveFile("SoundFiles", filename);
        else if(getFileType(type) == "mp4")saveFile("VideoFiles", filename);
        else if(getFileType(type) == "invalid")error("error: invalid filetype");
    }
    if ((isFileSaved(filename) == 1) && (isconnected()) == 1 && (availableBandwidth() > 10)) networkSend("successfully", filename);
    else error("error: network not connected");
}

void networkSend(string returnmessage,string filename)
{
    cout<<filename<<" saved ";
    sendmessage(returnmessage);
    
}
void  sendmessage(string returnmessage)
{
    cout<<returnmessage<<endl;
}
string getFileType(char type)
{
    if(type == 't') return "txt";
    else if(type == 'm') return "mp4";
    else if(type == 'p') return "mp3";
    else if(type == 'i') return "invalid";
    else return "this statement will never execute but my IDE insists that i use it";
}
void saveFile(string location, string filename)
{
    if(isFileSaved(filename) == 1)
    cout<<"your file "<<filename<<" is saved in "<<location<<endl;
    else cout<<"your file "<<filename<<" could not be saved at "<<location<<endl;
}
bool isFileSaved(string filename)
{
    int status;
    cout<<"do you see your file "<<filename<<" in your applications folder?"<<endl;
    cout<<"1. Yes "<<endl;
    cout<<"2. No"<<endl;
    cin>>status;
    status = validation(status);
    if(status == 1) return 1;
    else return 0;
}

void error(string message)
{
    cout<<message<<endl;
}
int validation(int a)
{
    while(a != 1 && a != 2)
    {
        cout<<"wrong input, enter 1 or 2"<<endl;
        cin>>a;
    }
    return a;
}
int validation(char a)
{
    if (a == 't' || a == 'm' || a == 'p' || a == 'i')
    {
        return 1;
    }
    else return 0;
    
}
