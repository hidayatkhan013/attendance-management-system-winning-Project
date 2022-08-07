/****************************************
* Title: STUDENT ATTENDANCE SYSTEM      *
* Authors: Mateen Ahmed ,Shazeel khalil *
*  Hidayat Ur Rehman , Kaleem Dil Khan  *
* IDE: Dev C++                    	    *
* submit  Dated:	10/12/2017          *
*****************************************/


// Important Note : Please Use Dev++ IDE to get better result //


#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <conio.h>
#include <ctime>
#include <time.h>
using namespace std;

#define DTTMFMT "%Y-%m-%d %H:%M:%S "
#define DTTMSZ 21



struct student
{
	int roll;
	string name;
	string lname;
	string status;
	
}student;




void search();
void displaylist();
void mainheading();
void teacherheading();
void adminheading();
void adminlogin();
void teacherlogin();
void studentlogin();
void mainprogram();
void displaystudent();
int numberoflines();
int nolserach();
void studentheading();



// global veriable 
int options,option,nos,nol;
int tempcount,nolcount;
// global verable


#define DTTMFMT "%Y-%m-%d %H:%M:%S "
#define DTTMSZ 21
static char *getDtTm (char *buff) {
    time_t t = time (0);
    strftime (buff, DTTMSZ, DTTMFMT, localtime (&t));
    return buff;

}






int main ()
{
nolcount=nolserach();
tempcount=numberoflines();


	mainprogram();

	system("pause");
	return 0;
}



// main heading function //
void mainheading(){
		char ch=208;
		for (int i=1;i<=100;i++){if(i<=23){cout<<" ";continue;}cout<<ch;}cout<<endl;
		cout << "				                    STUDENT ATTENDANCE SYSTEM " << endl;
		char k=210;
		for (int i=1;i<=100;i++){if(i<=23){cout<<" ";continue;}cout<<k;}cout<<endl<<endl;
		}
// main program fucntion
void mainprogram(){
	
	system ("CLS");
	system ("color A");
// to creat a upper margin //
for (int i=1;i<8;i++)
	{
	cout<<"                                                             "<<endl;
	}	
cout<<"                                                             "<<endl;
cout<<"				            ����������    ����������     ����������         "<<endl;
cout<<"				            ��            ��      ��     ��       "<<endl;
cout<<"				            ��            ��      ��     ��           "<<endl;
cout<<"				            ����������    ����������     ����������             "<<endl; 
cout<<"				                    ��    ��      ��             �� "<<endl;
cout<<"				                    ��    ��      ��             ��"<<endl;
cout<<"				            ����������  ������  ������   ���������� "<<endl<<endl;

mainheading();
char ch2=245,ch1=196;
for (int i=0;i<=100;i++){if(i<=24){cout<<" ";continue;}cout<<ch1;}cout<<endl;

cout<<"			"<<ch2<<"                         \t\t\t\t\t\t     "<<ch2<<endl;
cout<<"			"<<ch2<<"     1- Admin Portal :   \t\t\t\t\t\t     "<<ch2<<endl;
cout<<"			"<<ch2<<"     2- Teacher Portal : \t\t\t\t\t\t     "<<ch2<<endl;
cout<<"			"<<ch2<<"     3- Student Portal : \t\t\t\t\t\t     "<<ch2<<endl;
cout<<"			"<<ch2<<"     4- Exit Program :   \t\t\t\t\t\t     "<<ch2<<endl;
cout<<"			"<<ch2<<"                         \t\t\t\t\t\t     "<<ch2<<endl;
for (int i=0;i<=100;i++){if(i<=24){cout<<" ";continue;}cout<<ch1;}cout<<endl;
cout<<"			Choose Your Option From above :  ";cin>>options;
cout<<endl;

// Switch start from here //

switch(options)
{
	case 1:
{			
				
					char ch,choice;
					// admin portal
					system ("color D");  system ("CLS");
					adminheading();
					adminlogin();
			
					for (int i=0;i<=100;i++){if(i<=24){cout<<" ";continue;}cout<<ch1;}cout<<endl;
	
					cout<<"			"<<ch2<<"                        	     \t\t\t\t\t     "<<ch2<<endl;
					cout<<"			"<<ch2<<"     1- Add New Record :        \t\t\t\t\t     "<<ch2<<endl;
					cout<<"			"<<ch2<<"     2- Display Students List : \t\t\t\t\t     "<<ch2<<endl;
					cout<<"			"<<ch2<<"     3- Display  Attendace :    \t\t\t\t\t     "<<ch2<<endl;
					cout<<"			"<<ch2<<"     4- Search Student Record : \t\t\t\t\t     "<<ch2<<endl;
					cout<<"			"<<ch2<<"     5- Main program :          \t\t\t\t\t     "<<ch2<<endl;
					cout<<"			"<<ch2<<"                                \t\t\t\t\t     "<<ch2<<endl;
					for (int i=0;i<=100;i++){if(i<=24){cout<<" ";continue;}cout<<ch1;}cout<<endl;

					cout<<"			Choose Your Option From above :  ";cin>>option;
					cout<<endl;
				if(option==1){
							do{
					char icon1=223,icon2=223;cout<<"\t\t\t";for (int i=1;i<30;i++){cout<<icon1<<icon2;}cout<<endl<<endl;
					cout<<"			Enter Student Roll Number : ";cin>>student.roll;
					while(cin.fail()) 
								{
								cout << "			Please Enter Integer Roll No : ";
								cin.clear();
								cin.ignore(256,'\n');
								cin >>student.roll;
								cout<<endl;
								}
					cout<<"			Enter Student First Name  : ";cin>>student.name;
					cout<<"			Enter Student Last Name   : ";cin>>student.lname;cout<<endl;
					cout<<"			Entered Record is : "<<student.roll<<" "<<student.name<<" "<<student.lname<<endl<<endl;
					cout<<"\t\t\t";for (int i=1;i<30;i++){cout<<icon1<<icon2;}cout<<endl<<endl;
					cout<<"			Do you Want to save the above details (y/n)	:	";
					cin>>ch;cout<<endl;
							if(ch=='y')
					{
					ofstream outfile;
					outfile.open("List.txt",ios::app);
					outfile <<student.roll<<"\t\t"<<student.name<<"\t"<<student.lname<<endl;
					cout<<"			Do you want to Add More Records  (y/n) : ";
					cin>>choice;
					outfile.close();
					cout<<"			successfully updated successfully .. "<<endl<<endl;
					
					}
							}
							while(choice=='y'||choice=='Y');
							mainprogram();
							
					}
					
			if(option==2)
				{
				displaylist();
				cout<<endl;
				}
			if(option==3)
				{
				displaystudent();
				cout<<endl;
				}	
			if(option==4)
				{
				search();
				cout<<endl;
				}		
			if(option==5)
				{
					mainprogram();}
				break;
				


}
case 2:
{
		
					// teacher portal	
						system ("color C");system ("CLS");
						cout<<endl;
						teacherheading();
						teacherlogin();
				cout<<endl;
				cout<<"			1- Attendace :  "<<endl;
				cout<<"			2- Display Attendace "<<endl;
				cout<<"			3- Search Student Record By Roll  "<<endl;
				cout<<"			4- Main Program : "<<endl;
				cout<<endl;
				cout<<"			Choose Your Option From above :  ";cin>>option;
				
if(option==1)
{
				int i8;
				string temp;
				char ch=205;for (int i=0;i<=100;i++){if(i<=23){cout<<" ";continue;}cout<<ch;}cout<<endl;
				cout<<"\t\t\tRoll No\t\t\t\t\tStatus (P/A)"<<endl;
				for (int i=0;i<=100;i++){if(i<=23){cout<<" ";continue;}cout<<ch;}cout<<endl;
				ofstream outfile;
				ofstream wtime;
				outfile.open("attendance.txt",ios::app);
				wtime.open("without_time.txt",ios::app);
								string dd6[3];
								ifstream f6;
								for(int i=0;i<1;i++){
							
								char buff[DTTMSZ];
    								outfile << getDtTm (buff) << "Time During attendace Saved" <<endl;
    								
								    f6.open("List.txt");cout<<endl;
								        for(int i7=0;i7<tempcount;i7++){
							
								              for(i8=0;i8<3;i8++){
								                  f6>>dd6[i8];
												  if(i8==0){cout<<"\t\t\t";} 
								                  cout<<dd6[i8]<<"  ";
								                  if (i8==0){temp=dd6[i8];}             
								} 
					
					cout<<setw(5)<<"\t\t\t";
					cout<<setw(3)<<" ";
					cin>>student.status;
					outfile <<temp<<"\t\t\t\t"<<student.status<<endl;
						if (student.status=="p" || student.status=="P" )
						{student.status="1";}
						else if (student.status=="a" || student.status=="A" )
						{student.status="0";}
					wtime <<temp<<"\t\t\t\t"<<student.status<<endl;
								cout<<"\n";   
								}
								for (int i=0;i<=100;i++){if(i<=23){cout<<" ";continue;}cout<<ch;}cout<<endl;
							
								f6.close();
								
				cout<<"\n";				   
						}
				wtime.close();
				outfile.close();
			cout<<"\t\t\tDo you want to exit (y/n) : ";
				char h;cin>>h; if (h=='y' || h=='Y'){break;}else{mainprogram();}
				
}
				
if(option==2)
		{
			displaystudent();
		}
			
				
if(option==3)
{
	search();
}
				
				
				
				if(option==4)
				{
				mainprogram();
				}
		break;
}
case 3:{
	system ("color B");system ("CLS");
	cout<<endl;
	studentheading();
	studentlogin();
		cout<<"			1- Search Your Record :  "<<endl;
		cout<<"			2- Main Program : "<<endl;
		cout<<"			Choose Your Option From above :  ";cin>>option;
		if(option==1){
			search();
			cout<<endl;
		}
		if(option==2){
			mainprogram();
			cout<<endl;
		}
	
	break;
}


case 4:
					break;
			default:
				cout<<"\t\t\tInvalid Option"<<endl;
				cout<<"\t\t\tDo you want to exit (y/n) : ";
				char h;cin>>h; if (h=='y' || h=='Y'){break;}else{mainprogram();}
				break;
		}


}

// admin heading function //
void adminheading()
{
	char ch=208;
	cout<<endl;
	for(int i=1;i<=100;i++)
	{ if(i<=23){cout<<" ";continue;}
			cout<<ch;
	}
	cout<<endl;
	cout << "				                    WELLCOME TO ADMIN PORTAL                    " << endl;
	char k=210;
	for (int i=1;i<=100;i++)
	{
	if(i<=23){cout<<" ";continue;}cout<<k;
	}
	cout<<endl<<endl;
}


void studentheading()
{
	char ch=208;
	for (int i=1;i<=100;i++){if(i<=23){cout<<" ";continue;}cout<<ch;}cout<<endl;
	cout << "				                    WELLCOME TO STUDENT PORTAL                    " << endl;
	char k=210;
	for (int i=1;i<=100;i++){if(i<=23){cout<<" ";continue;}cout<<k;}cout<<endl<<endl;
}


void teacherheading()
{
	char ch=208;
	for (int i=1;i<=100;i++){if(i<=23){cout<<" ";continue;}cout<<ch;}cout<<endl;
	cout << "				                    WELLCOME TO TEACHER PORTAL                    " << endl;
	char k=210;
	for (int i=1;i<=100;i++){if(i<=23){cout<<" ";continue;}cout<<k;}cout<<endl<<endl;
}


// Login  function //

void adminlogin()
{
		string ch = "";
		string ch2 = "";
		while(1)
		{ 
		cout<<"			Enter Username :  ";
		cin>>ch;
		cout<<"			Enter Password :  ";                
		cin>>ch2;
			if (ch == "admin" && ch2 == "admin")
			{
			cout<<endl;
			cout<<"			Access Granted... "<<endl;
			break;	
			}	
			else 
			{cout<<endl;
			cout<<"			You entered Wrong UserName/Password "<<endl;
			cout<<endl;
			}
		}
}


void teacherlogin()
{
	string ch = "";
	string ch2 = "";
	while(1)
{ 
cout<<"			Enter Username :  ";
cin>>ch;
cout<<"			Enter Password :  ";                
cin>>ch2;

	if (ch == "teacher" && ch2 == "teacher12345")
	{
cout<<endl;
cout<<"			Access Granted... "<<endl;
	break;
		
	}	
	else 
	{	cout<<endl;
cout<<"			You entered Wrong UserName/Password "<<endl;
		cout<<endl;
	}
}
}


void studentlogin()
{
	string ch = "";
	string ch2 = "";
	while(1)
{ 
cout<<"			Enter Username :  ";
cin>>ch;
cout<<"			Enter Password :  ";                
cin>>ch2;

	if (ch == "student" && ch2 == "student12345")
	{
cout<<endl;
cout<<"			Access Granted... "<<endl;
	break;
		
	}	
	else 
	{	cout<<endl;
cout<<"			You entered Wrong UserName/Password "<<endl;
		cout<<endl;
	}
}
}

void displaystudent()
{
    // roll number of student and attendace report //
    string getcontent;
    ifstream openfile ("attendance.txt");
    char ch=205;for (int i=0;i<=100;i++){if(i<=23){cout<<" ";continue;}cout<<ch;}cout<<endl;
    if(openfile.is_open())
    {
        while(! openfile.eof())
        {
            getline(openfile, getcontent);
            cout<<endl;
		cout<<"			"<<getcontent;
        }
        for (int i=24;i<=100;i++){if(i<=23){cout<<" ";continue;}cout<<ch;}cout<<endl;
    }
    cout<<"\t\t\tDo you want to exit (y/n) : ";
	char h;cin>>h; 
	if (h=='y' || h=='Y'){
		return;
	}
	else mainprogram();

}



//  total student are in list only for admin //
void displaylist()
{
    
    string getcontent;
    ifstream openfile ("List.txt");
    char ch=205;
    for (int i=1;i<=100;i++){if(i<=23){cout<<" ";continue;}cout<<ch;}cout<<endl;
    if(openfile.is_open())
    {
    	cout<<"		        "<< "Roll No"<<"	"<< " Name "<<endl;
    	for (int i=1;i<=100;i++){if(i<=23){cout<<" ";continue;}cout<<ch;}cout<<endl;
        while(! openfile.eof())
        {
            getline(openfile, getcontent);
            cout<<endl;
        
		cout<<"			"<< getcontent;
        }
        cout<<endl;
        for (int i=1;i<=100;i++){if(i<=23){cout<<" ";continue;}cout<<ch;}cout<<endl;
    }
cout<<"\t\t\tDo you want to exit (y/n) : ";
	char h;cin>>h; 
	if (h=='y' || h=='Y'){
		return;
}else {mainprogram();
}
}


// to display total number of student in list use in for loop //
int numberoflines(){
	 string line;
    ifstream myfile("List.txt");

    if(myfile.is_open()){
        while(!myfile.eof()){
            getline(myfile,line);
            
            nos++;
        }
        myfile.close();
    }
    nos--;
    return nos;
}


int nolserach(){
	 string line;
    ifstream myfile("without_time.txt");

    if(myfile.is_open()){
        while(!myfile.eof()){
            getline(myfile,line);
            
            nol++;
        }
        myfile.close();
    }
    nol--;
    return nol;
}

void search(){
	int h=0;
	int data,flag=0;
	int roll;
	int a[50];
	int b[50]; 
	string line;	   
	ifstream infile;
	infile.open("without_time.txt"); 
	for(int i=0;i<nolcount;i++)
		{		
			infile >> data; 
			a[i]=data;
			infile>>data;
			b[i]=data;		   
				if(b[i]==1)
				{		b[i]=80;	}
				else	if(b[i]==0)	{	b[i]=65;	}				   
		}
		
cout<<"			Enter Roll No to Show Record : ";
cin>>roll;cout<<endl;

// if character is entered than out error to enter interger
						
while(std::cin.fail()) 
{
cout << "			Please Enter Integer Roll No : ";
cin.clear();
cin.ignore(256,'\n');
cin >> roll;
}
	for (int i=0;i<nolcount;i++)
	{
		
		if (roll==a[i])	
			{
		if(h==0)
		{
				cout<<"			Entered Roll Record Found!!"<<endl;
		}
			h++;
			cout<<"			day  "<<h<<endl;
			cout<<"			"<<roll<<"			"<<(char)b[i]<<endl;
			flag++;
			}		
	}
if(flag==0)
{
	cout<<"			Record Not Found!!!!...."<<endl;
}
cout<<endl<<endl;
cout<<"		Enter 1 For Main Program OR 2 For search again : ";cin>>option;
if(option==1)
				{
				mainprogram();
				cout<<endl;
				}
if(option==2)
				{
				search();
				cout<<endl<<endl;
				}
   // close the opened file.
   infile.close();
}






