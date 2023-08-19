#include<iostream>
#include<fstream>
#include<conio.h>
#include<windows.h>
#include <string>
using namespace std;

void home(void);
void reg()
{
	int a=13101;
    system ("cls");
	Beep(3000,100);
	cout<<"\n\n ---------------------------------------";
	cout<<"\n | Dear User Welcome To Data Base 0002 |";
	cout<<"\n ---------------------------------------";
	cout<<"\n | All Registered Voters Cnic No List  |";
	cout<<"\n ---------------------------------------";
	fstream in;
	string cnic;
    in.open("cnic.txt",ios::in);
	while(in.eof()==0)
	{	
	getline(in,cnic);	
	cout<<"\n 13101 "<<cnic<<endl;
    }
    in.close();
    cout<<"\n Press Any Key To Continue. ";
	getch();
	home();
}
void db()
{
	
    ifstream inputFile;
    inputFile.open("party.txt");

    if (inputFile.is_open()) {
        char c;
        //int count = 0;
        int total=0,ppp=0,pti=0,ptl=0,jui=0,mqm=0,pmln=0;
        
        while (inputFile.get(c))
        
		{
            if (c == 't') 
			{
                total++;
            }
            if (c == 'a') 
			{
                ppp++;
            }
            if (c == 'b') 
			{
                pti++;
            }
            if (c == 'c') 
			{
                ptl++;
            }
            if (c == 'd') 
			{
                jui++;
            }
            if (c == 'e') 
			{
                mqm++;
            }
            if (c == 'f') 
			{
                pmln++;
            }
        }

    system ("cls");
	Beep(3000,100);
	cout<<"\n\n ---------------------------------------";
	cout<<"\n | Dear User Welcome To Data Base 0001 |";
	cout<<"\n ---------------------------------------";	
	cout<<"\n Total Votes Casted : "<<total;
	cout<<"\n ---------------------------------------";	
	cout<<"\n Total PPP Votes    : "<<ppp;
	cout<<"\n ---------------------------------------";	
	cout<<"\n Total PTI Votes    : "<<pti;
	cout<<"\n ---------------------------------------";	
	cout<<"\n Total PTL Votes    : "<<ptl;
	cout<<"\n ---------------------------------------";	
	cout<<"\n Total JUI Votes    : "<<jui;
	cout<<"\n ---------------------------------------";	
	cout<<"\n Total MQM Votes    : "<<mqm;
	cout<<"\n ---------------------------------------";	
    cout<<"\n Total PMLN Votes   : "<<pmln;
	cout<<"\n ---------------------------------------";	
	inputFile.close();
}
}
void adm()
{
	int ch;
	system ("cls");
	Beep(3000,100);
	cout<<"\n\n -------------------------------------";
	cout<<"\n | Dear User Welcome To Admin Pannel |";
	cout<<"\n -------------------------------------";
	cout<<"\n   > Press 1 To Check Complete Results  ";
	cout<<"\n   > Press 2 To Check Registered Cnic In Database  ";
	cout<<"\n   > Press 3 To Exit ";
	cout<<"\n --------------------------------";
	cout<<"\n Your Choice : ";
	cin>>ch;
	if(ch==1)
	{
		db();
	}
	else if(ch==2)
	{
		reg();
    }
	else if(ch==2)
	{
		system ("cls");
		cout<<"\n Program Terminated ";	
	    exit(0);
	}
	else
	{
	Beep(3000,100);
	cout<<"\n Invalid Choice Please Try Again ";	
	system ("cls");
	adm();	
	}	
}
void vote()
{
	string cnic;
	string c[100];
	int ch;
	Beep(3000,100);
	system ("cls");
	cout<<"\n\n ---------------------------------------------";
	cout<<"\n    | Dear User Welcome To Voting System |";
	cout<<"\n ---------------------------------------------";
	cout<<"\n Enter Cnic No Without Dashes : 13101 ";
	fstream out;
    out.open("cnic.txt",ios::app);
	cin>>cnic;
		
	if(cnic.size()>8 ||cnic.size()<8 )
	{
	Beep(3000,100);	
	system("cls");
	cout<<"\n Wrong Cnic No Try Again ";
	vote();	
	}
	    out<<cnic<<endl;;
	    out.close();
	
	Beep(3000,100);	
	system("cls");
	cout<<"\n ----------------------------";
	cout<<"\n     Caste Your Vote Now  ";
	cout<<"\n ----------------------------";
	cout<<"\n   > Press 1 To Vote PPP  ";
	cout<<"\n ----------------------------";
	cout<<"\n   > Press 2 To Vote PTI ";
	cout<<"\n ----------------------------";
	cout<<"\n   > Press 3 To Vote PTL ";
	cout<<"\n ----------------------------";
	cout<<"\n   > Press 4 To Vote JUI ";
	cout<<"\n ----------------------------";
	cout<<"\n   > Press 5 To Vote MQM ";
	cout<<"\n ----------------------------";
	cout<<"\n   > Press 6 To Vote PMLN ";
	cout<<"\n ----------------------------";
	cout<<"\n Your Choice : ";
	cin>>ch;
	if(ch==1)
	{
	fstream pr;
    pr.open("party.txt",ios::app);
	pr<<"at";
	pr.close();
		Beep(3000,100);
		cout<<"\n --------------------------------";
		cout<<"\n SucessFully Vote Casted To PPP ";
		Beep(3000,100);
		cout<<"\n --------------------------------";
		Beep(3000,100);
		cout<<"\n Thanks ! For Casting Your Vote  ";
        vote();
	}
	else if(ch==2)
	{
		
	fstream pr;
    pr.open("party.txt",ios::app);
	pr<<"bt";
	pr.close();
		Beep(3000,100);
		cout<<"\n --------------------------------";
		cout<<"\n SucessFully Vote Casted To PTI ";
		Beep(3000,100);
		cout<<"\n --------------------------------";
		Beep(3000,100);
		cout<<"\n Thanks ! For Casting Your Vote  ";
        vote();
	}
	else if(ch==3)
	{
	
		fstream pr;
    pr.open("party.txt",ios::app);
	pr<<"ct";
	pr.close();
		Beep(3000,100);
		cout<<"\n --------------------------------";
		cout<<"\n SucessFully Vote Casted To PTL ";
		Beep(3000,100);
		cout<<"\n --------------------------------";
		Beep(3000,100);
		cout<<"\n Thanks ! For Casting Your Vote  ";
        vote();
	}
	else if(ch==4)
	{
	
		fstream pr;
    pr.open("party.txt",ios::app);
	pr<<"dt";
	pr.close();
		Beep(3000,100);
		cout<<"\n --------------------------------";
		cout<<"\n SucessFully Vote Casted To JUI ";
		Beep(3000,100);
		cout<<"\n --------------------------------";
		Beep(3000,100);
		cout<<"\n Thanks ! For Casting Your Vote  ";
        vote();
	}
	else if(ch==5)
	{
		
		fstream pr;
    pr.open("party.txt",ios::app);
	pr<<"et";
	pr.close();
		Beep(3000,100);
		cout<<"\n --------------------------------";
		cout<<"\n SucessFully Vote Casted To MQM ";
		Beep(3000,100);
		cout<<"\n --------------------------------";
		Beep(3000,100);
		cout<<"\n Thanks ! For Casting Your Vote  ";
        vote();
	}
	else if(ch==6)
	{
		
		fstream pr;
    pr.open("party.txt",ios::app);
	pr<<"ft";
	pr.close();
		Beep(3000,100);
		cout<<"\n --------------------------------";
		cout<<"\n SucessFully Vote Casted To PMLN ";
		Beep(3000,100);
		cout<<"\n --------------------------------";
		Beep(3000,100);
		cout<<"\n Thanks ! For Casting Your Vote  ";
        vote();
	}
	else
	{
	Beep(3000,100);
	cout<<"\n Invalid Choice Please Try Again ";	
	system ("cls");
	vote();	
	}	
}
void home()
{
	system("cls");
	int ch;
	Beep(3000,100);
	cout<<"\n\n --------------------------------";
	cout<<"\n | Welcome To Voting System 0.1 |";
	cout<<"\n --------------------------------";
	cout<<"\n   > Press 1 For Admin Pannel ";
	cout<<"\n   > Press 2 For Voting Pannel ";
	cout<<"\n   > Press 3 For Termination ";
	cout<<"\n --------------------------------";
	cout<<"\n Your Choice : ";
	cin>>ch;
	if(ch==1)
	{
		adm();
	}
	else if(ch==2)
	{
	    vote();	
	}
	else if(ch==3)
	{
		system ("cls");
		cout<<"\n Program Terminated ";	
	    exit(0);
	}
	else
	{
	Beep(3000,100);
	cout<<"\n Invalid Choice Please Try Again ";	
	system ("cls");
	home();	
	}	
}
int main()
{
	home();
}
