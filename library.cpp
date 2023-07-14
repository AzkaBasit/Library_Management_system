#include<fstream>
#include<iostream>
#include<dos.h>
#include<conio.h>
#include<iomanip>
#include<windows.h>
#include<stdlib.h>
#include<string>
#include"library.h"

using namespace std;

void library :: get_data()
		{
			cout<<"\nBook name  : ";
			cin.getline(book_name, 20);;
			
			cout<<"\nBook code  : ";
			cin.getline(code, 20);;
			
			cout<<"\nWriter name: ";
			cin.getline(writer_name, 20);
			
			
		}
		
void book_file :: fill()
		{
			fstream file("All_Books.txt",ios::out|ios::app);
			
			file.width(20);
			file<<setiosflags(ios::left);
			file<<book_name;
			
			file.width(20);
			file<<setiosflags(ios::left);
			file<<writer_name;
			
			file.width(10);
			file<<setiosflags(ios::right);
			file<<code<<endl;
			
	
			file.close();
		}
		

void book_file::file()
{
	char fill[20];
	
	get_data();
	strcpy(fill,code);
	strcat(fill,".txt");

	
	ofstream file(fill);
	file<<"Book name   : "<<book_name<<endl;
	file<<"Writer name : "<<writer_name<<endl;
	file<<"Book Code   : "<<code<<endl;

 
	file.close();
}
		
		
void T1 :: book_data()
		{
			fstream file1("OOP.txt",ios::out|ios::app);
			file1<<endl;
			file1<<"Book name   : "<<book_name<<endl;
			file1<<"Writer name : "<<writer_name<<endl;
			file1<<"Book code   : "<<code<<endl;
		
			file1.close();
		}	
		
void T2 :: book_data()
		{
			fstream file("Discrete.txt",ios::out|ios::app);
			file<<endl;
			file<<"Book name   : "<<book_name<<endl;
			file<<"Writer name : "<<writer_name<<endl;
            file<<"Book code   : "<<code<<endl;
	
			
			file.close();
		}
	
void T3 :: book_data()
		{
			fstream file1("English.txt",ios::out|ios::app);
			file1<<endl;
			file1<<"Book name   : "<<book_name<<endl;
			file1<<"Writer name : "<<writer_name<<endl;
			file1<<"Book code   : "<<code<<endl;
		
			
			file1.close();
		}
	
void T4 :: book_data()
		{
			fstream file1("Linear_algebra.txt",ios::out|ios::app);
			file1<<endl;
			file1<<"Book name   : "<<book_name<<endl;
			file1<<"Writer name : "<<writer_name<<endl;
			file1<<"Book code   : "<<code<<endl;
		

			file1.close();
		}
		
add_books::add_books()
{
	T1 t1;
	T2 t2;
	T3 t3;
	T4 t4;
	
	int choice;

	while(1)
	{
		system("cls");
		cout<<"\t\t___________________________________"<<endl;
		cout<<"\t\t|           ADD BOOKS             |"<<endl;
		cout<<"\t\t|_________________________________|"<<endl;
		cout<<"\t\t| 1.  OOP  BOOK                   |"<<endl;
		cout<<"\t\t| 2. DISCRETE BOOK                |"<<" () ()"<<endl;
		cout<<"\t\t| 3. ENGLISH BOOK                 |"<<" (o o)"<<endl;
		cout<<"\t\t| 4. LINEAR ALEGEBRA BOOK         |"<<"c(   )"<<endl;
		cout<<"\t\t| 5. TO EXIT                      |"<<"  O O  "<<endl;
		cout<<"\t\t|_________________________________|"<<endl<<endl;                 
		cout<<"\n\t\t CHOICE:";
		cin>>choice;
		
        if(choice == 1)
        {
        	t1.file();
		    t1.book_data();
			t1.fill();
		}
        
        if(choice == 2)
        {
        	t2.file();
		    t2.book_data();
			t2.fill();
		}
		
		if(choice == 3)
		{
			t3.file();
		    t3.book_data();
			t3.fill();
		}
		
		if(choice == 4)
		{
			t4.file();
		    t4.book_data();
			t4.fill();
		}
		   
		if(choice == 5)
		{
			cout<<"\t\tTHANKYOU :)"<<endl;
			break;
	    }     
	}
}	
		
		
display::display()
{
    int choice;
	char code[10],ch;

	while(1)
	{
		cout<<"\t\t___________________________________"<<endl;
		cout<<"\t\t|      DISPLAYING INFORMATION     | "<<endl;
		cout<<"\t\t|_________________________________|"<<endl;
		cout<<"\t\t| 1. ALL BOOKS                    |"<<endl;
		cout<<"\t\t| 2. OOP                          |"<<endl;
		cout<<"\t\t| 3. DISCRETE                     |"<<" () ()"<<endl;
		cout<<"\t\t| 4. ENGLISH                      |"<<" (o o)"<<endl;
		cout<<"\t\t| 5. LINEAR ALEGEBRA              |"<<"c(   )"<<endl;
		cout<<"\t\t| 6. EXIT                         |"<<"  O O  "<<endl;
		cout<<"\t\t|_________________________________|"<<endl<<endl;
		cout<<"\n\t\t CHOICE:";
     cin>>choice;

      if(choice==1)
      {
        system("cls");
        cout<<"\n\t\t........DISPLAYING INFORMATION........."<<endl;
         cout<<endl;
         cout<<"............................................................"<<endl;
         cout.width(20);
         cout<<setiosflags(ios::left);
         cout<<"Book Name ";

         cout.width(20);
         cout<<setiosflags(ios::left);
         cout<<"Writer Name ";

         cout.width(10);
         cout<<setiosflags(ios::right);
         cout<<"Code ";


         fstream file("All_Books.txt",ios::in);
         file.seekg(0);
         cout<<"\n";
         while(file)
         {
            file.get(ch);
            Sleep(40);
            cout<<ch;
         }
       cout<<"............................................................"<<endl<<endl;
       file.close();
       
		getch();
 
      }

		if (choice == 2)
		{
			system("cls");
			fstream file("OOP.txt",ios::in);
			file.seekg(0);
			if(!file)
			{
				cout<<"\t\tTHIS BOOK IS NOT AVAILABLE!"<<endl<<endl;
			}
			else
			{
			cout<<"\n\t........DISPLAYING INFORMATION........."<<endl;
			cout<<"\n";
			while(file)
			{
				file.get(ch);
				Sleep(40);
				cout<<ch;
			}
			file.close();
			getch();
			}
		}
		
		if(choice == 3)
		{
			system("cls");
			fstream file("Discrete.txt",ios::in);
			file.seekg(0);
			if(!file)
			{
				cout<<"\t\tTHIS BOOK IS NOT AVAILABLE!"<<endl<<endl;
			}
	        else
	        {
	        	cout<<"\n\t........DISPLAYING INFORMATION........."<<endl;
			    cout<<"\n";
			    while(file)
			    {
				  file.get(ch);
				  Sleep(40);
				  cout<<ch;
			    }
			    file.close();
			    getch();
			}
			
		}
		
		if(choice == 4)
		{
			system("cls");
			fstream file("English.txt",ios::in);
			file.seekg(0);
			if(!file)
			{
				cout<<"\t\tTHIS BOOK IS NOT AVAILABLE!"<<endl<<endl;
			}
			else
			{
				cout<<"\n\t........DISPLAYING INFORMATION........."<<endl;
			    cout<<"\n";
			    while(file)
			    {
			     	file.get(ch);
			     	Sleep(40);
				    cout<<ch;
			    }
			    file.close();
			    getch();
			    }

		}
		if(choice == 5)
		{
			system("cls");
			fstream file("Linear_algebra.txt",ios::in);
			file.seekg(0);
			if(!file)
			{
				cout<<"\t\tTHIS BOOK IS NOT AVAILABLE!"<<endl<<endl;
			}
	        else
	        {
	        	cout<<"\n\t........DISPLAYING INFORMATION........."<<endl;
			    cout<<"\n";
			    while(file)
			    {
				  file.get(ch);
				  Sleep(40);
				  cout<<ch;
			    }
			    file.close();
			    getch();
			}
		}
		if(choice == 6)
		{
			system("cls");
			cout<<"\t\t THANKYOU :)";
			break;
		}
	}	
}


search::search()
{
	int choice;
	char fill[20];
	char code[10];
	char ch;
	while(1)
	{
		system("cls");
		cout<<"\n\n\t\t---------SEARCH--------\n\n";
		cout<<"\t\t1. SEARCH ";
		cout<<"\n\t\t2. EXIT\n ";
		cout<<"\n\t\t CHOICE:";
		cin>>choice;
		if(choice == 1)
		{
			cout<<"Enter Code:";
			cin>>code;
			cout<<endl;
			strcpy(fill,code);
			strcat(fill,".txt");
			fstream file(fill,ios::in);
			while(file)
			{
				file.get(ch);
				cout<<ch;
			}
			file.close();
			getch();
		}
		if(choice == 2)
		{
			break;
		}
	}
}


void student :: crete_student()
		{
			system("cls");
			cout<<"\n\n";
			cout<<"\t\t\t      () () "<<endl;
	        cout<<"\t\t\t      (o o) "<<endl;
	        cout<<"\t\t\t     c(   ) "<<endl;
	        cout<<"\t\t\t       O O  "<<endl;
			cout<<"\t\t_________________________________"<<endl;
			cout<<"\t\t|       NEW STUDENT RECORD      |"<<endl;
			cout<<"\t\t|_______________________________|"<<endl;
			cout<<"\n\n\t\t REGISTRATION NUMBER:  ";
			cin>>reg_no;
			cout<<"\n\t\t STUDENT NAME:  ";
			cin.getline(student_name, 20);
			fstream file2("Student.txt",ios::out|ios::app);
			file2<<endl;
			file2<<"\t\tREGISTRATION NUMBER  :"<<reg_no<<endl;
			file2<<"\t\tSTUDENT NAME         :"<<student_name<<endl;
			
			file2.close();
			cout<<"\n\n\t\tStudent record created !!"<<endl;
			
			Sleep(40);
		}


void student :: display_student()
		{
			system("cls");
			cout<<"\n\n\t\t\t          () () "<<endl;
	        cout<<"\t\t\t          (o o) "<<endl;
	        cout<<"\t\t\t         c(   ) "<<endl;
	        cout<<"\t\t\t           O O  "<<endl;
			cout<<"\t\t         ALL STUDENT ENTRY RECORD          "<<endl;
			cout<<"\t\t        THAT HAS COME TO BOOKSHOUSE        "<<endl;
			cout<<"\t\t___________________________________________"<<endl;
			fstream file2("student.txt",ios::in);
            file2.seekg(0);
            cout<<"\n";
            while(file2)
            {
              file2.get(ch);
    	      Sleep(40);
              cout<<ch;
            }
            cout<<"\t\t___________________________________________"<<endl;
            file2.close();
            getch();
		}
		
issue_book::issue_book(){};
void issue_book::issue1(){
	int choice;
	while(1)
	{
		system("cls");
		cout<<"\n\n\t\t---------ISSUE--------\n\n";
		cout<<"\t\t1. AVAILABLE BOOKS";
		cout<<"\n\t\t2. ISSUE BOOKS ";
		cout<<"\n\t\t3. EXIT\n ";
		cout<<"\n\t\t CHOICE:";
		cin>>choice;
		if(choice == 1)
		{
			system("cls");
        cout<<"\n\t\t........AVAILABLE BOOKS........"<<endl;
         cout<<endl;
         cout<<"............................................................"<<endl;
         cout.width(20);
         cout<<setiosflags(ios::left);
         cout<<"Book Name ";

         cout.width(20);
         cout<<setiosflags(ios::left);
         cout<<"Writer Name ";

         cout.width(10);
         cout<<setiosflags(ios::right);
         cout<<"Code ";

        

         fstream file("All_Books.txt",ios::in);
         file.seekg(0);
         cout<<"\n";
         while(file)
         {
            file.get(ch);
            cout<<ch;
         }
       cout<<"............................................................"<<endl<<endl;
       file.close();
       
		getch();
 
		}
		if(choice == 2)
		{
			int option;
			char input3;
			int i=1;
			
			do
			{
		if(i<4){
			system("cls");
			cout<<"\n\n\t\tENTER CODE:";
			cin>>code;
			cout<<endl;
			strcpy(fill,code);
			strcat(fill,".txt");
			fstream file(fill,ios::in);
			if(!file)
			{
				cout<<"\n\t\tTHIS BOOK IS NOT AVAILABLE!!";
				cout<<"\n\t\t\t      () () "<<endl;
	            cout<<"\t\t\t      (o o) "<<endl;
	            cout<<"\t\t\t     c(   ) "<<endl;
	            cout<<"\t\t\t       O O  "<<endl;
			}
			else{
				cout<<"\t\t...........YOUR SELECTION IS ............."<<endl<<endl;
			    while(file)
			    {
				  file.get(ch);
				  Sleep(40);
				  cout<<ch;
				  
			    }
			    
			    file.close();
			    getch();
			    cout<<"\n\t\t..........CONFIRM YOUR SELECTION.........."<<endl;
			    cout<<"\n\t\t1. CORRECT";
			    cout<<"\n\t\t2. NOT CORRECT";
			    cout<<"\n\n\t\t CHOICE:";
			    cin>>option;
			    if(option == 1)
			    {
				   cout<<"\n\t\tBOOK ISSUED :)";
			    }
			    if (option == 2)
			    {
				   cout<<"\n\t\tSORRY FOR INCONVIENECE:( "<<endl;
			    }	
				
			i++;
			}
			
			}
				
			else if(i==4)	
			{
				cout<<"you can issue only 3 books"<<endl;
				Sleep(10000);
				break;
			}
			
	
			
			cout<<"\n\n\t\tDO YOU WANNA ISSUE MORE BOOKS?";
			cin>>input3;
			
			}
			while((input3 == 'Y'|| input3 == 'y'));
		}
		

		if(choice == 3)
		{
			break;
		}
	}
}		
		
	
void issue_book::issue2(){
	int choice;
	while(1)
	{
		system("cls");
		cout<<"\n\n\t\t---------ISSUE--------\n\n";
		cout<<"\t\t1. AVAILABLE BOOKS";
		cout<<"\n\t\t2. ISSUE BOOKS ";
		cout<<"\n\t\t3. EXIT\n ";
		cout<<"\n\t\t CHOICE:";
		cin>>choice;
		if(choice == 1)
		{
			system("cls");
        cout<<"\n\t\t........AVAILABLE BOOKS........"<<endl;
         cout<<endl;
         cout<<"............................................................"<<endl;
         cout.width(20);
         cout<<setiosflags(ios::left);
         cout<<"Book Name ";

         cout.width(20);
         cout<<setiosflags(ios::left);
         cout<<"Writer Name ";

         cout.width(10);
         cout<<setiosflags(ios::right);
         cout<<"Code ";

        

         fstream file("All_Books.txt",ios::in);
         file.seekg(0);
         cout<<"\n";
         while(file)
         {
            file.get(ch);
            cout<<ch;
         }
       cout<<"............................................................"<<endl<<endl;
       file.close();
       
		getch();
 
		}
		if(choice == 2)
		{
			int option;
			char input3;
			int i=1;
			
			do
			{
		if(i<6){
			system("cls");
			cout<<"\n\n\t\tENTER CODE:";
			cin>>code;
			cout<<endl;
			strcpy(fill,code);
			strcat(fill,".txt");
			fstream file(fill,ios::in);
			if(!file)
			{
				cout<<"\n\t\tTHIS BOOK IS NOT AVAILABLE!!";
				cout<<"\n\t\t\t      () () "<<endl;
	            cout<<"\t\t\t      (o o) "<<endl;
	            cout<<"\t\t\t     c(   ) "<<endl;
	            cout<<"\t\t\t       O O  "<<endl;
			}
			else{
				cout<<"\t\t...........YOUR SELECTION IS ............."<<endl<<endl;
			    while(file)
			    {
				  file.get(ch);
				  Sleep(40);
				  cout<<ch;
				  
			    }
			    
			    file.close();
			    getch();
			    cout<<"\n\t\t..........CONFIRM YOUR SELECTION.........."<<endl;
			    cout<<"\n\t\t1. CORRECT";
			    cout<<"\n\t\t2. NOT CORRECT";
			    cout<<"\n\n\t\t CHOICE:";
			    cin>>option;
			    if(option == 1)
			    {
				   cout<<"\n\t\tBOOK ISSUED :)";
			    }
			    if (option == 2)
			    {
				   cout<<"\n\t\tSORRY FOR INCONVIENECE:( "<<endl;
			    }	
				
			i++;
			}
			
			}
				
			else if(i==6)	
			{
				cout<<"you can issue only 5 books"<<endl;
				Sleep(10000);
				break;
			}
			
	
			
			cout<<"\n\n\t\tDO YOU WANNA ISSUE MORE BOOKS?";
			cin>>input3;
			
			}
			while((input3 == 'Y'|| input3 == 'y'));
		}
		

		if(choice == 3)
		{
			break;
		}
	}
}

	
void faculty :: crete_faculty()
		{
			system("cls");
			cout<<"\n\n";
			cout<<"\t\t\t      () () "<<endl;
	        cout<<"\t\t\t      (o o) "<<endl;
	        cout<<"\t\t\t     c(   ) "<<endl;
	        cout<<"\t\t\t       O O  "<<endl;
			cout<<"\t\t_________________________________"<<endl;
			cout<<"\t\t|       NEW FACULTY RECORD      |"<<endl;
			cout<<"\t\t|_______________________________|"<<endl;
			cout<<"\n\n\t\t ID NUMBER:  ";
			cin>>id_no;
			cout<<"\n\t\t FACULTY NAME:  ";
			cin>>faculty_name;
			fstream file3("Faculty.txt",ios::out|ios::app);
			file3<<endl;
			file3<<"\t\tID NUMBER  :"<<id_no<<endl;
			file3<<"\t\tFACULTY NAME         :"<<faculty_name<<endl;
			
			file3.close();
			cout<<"\n\n\t\tFaculty record created !!"<<endl;
			
			Sleep(40);
		}
	
	
void faculty ::  display_faculty()
		{
			system("cls");
			cout<<"\n\n\t\t\t          () () "<<endl;
	        cout<<"\t\t\t          (o o) "<<endl;
	        cout<<"\t\t\t         c(   ) "<<endl;
	        cout<<"\t\t\t           O O  "<<endl;
			cout<<"\t\t         ALL FACULTY ENTRY RECORD          "<<endl;
			cout<<"\t\t        THAT HAS COME TO LIBRARY        "<<endl;
			cout<<"\t\t___________________________________________"<<endl;
			fstream file3("Faculty.txt",ios::in);
            file3.seekg(0);
            cout<<"\n";
            while(file3)
            {
              file3.get(ch);
    	      Sleep(40);
              cout<<ch;
            }
            cout<<"\t\t___________________________________________"<<endl;
            file3.close();
            getch();
		}
	
	
start::start()
{
	username = "sir_shams_qazi";
		password = "sir_shams";
	int choice;
	system("cls");
	cout<<"\n\n\n";
	cout<<"\t\t\t        () () "<<endl;
	cout<<"\t\t\t        (o o) "<<endl;
	cout<<"\t\t\t       c(   ) "<<endl;
	cout<<"\t\t\t         O O  "<<endl;
	cout<<"\t\t          LOGIN INFORMATION          "<<endl;
	cout<<"\t\t _____________________________________"<<endl;
	cout<<"\n\t\t         USERNAME:";
	cin>>un;
	cout<<"\n\t\t         PASSWORD:";
	cin>>pass;
	cout<<"\t\t _____________________________________"<<endl;
	Sleep(40);
	
	if(username == un && password == pass)
	{
	while(1)
	{
		system("cls");
	    cout<<"\t\t\t () () "<<"  () () "<<"  () () "<<endl;
	    cout<<"\t\t\t (o o) "<<"  (o o) "<<"  (o o) "<<endl;
	    cout<<"\t\t\tc(   ) "<<" c(   ) "<<" c(   ) "<<endl;
	    cout<<"\t\t\t  O O  "<<"   O O  "<<"   O O  "<<endl;

	    cout<<"\t    -------------------------------------------------"<<endl;
	    cout<<"\t    ' A ROOM WITHOUT BOOKS IS LIKE BODY WITHOUT SOUL '"<<endl;
	    cout<<"\t    -------------------------------------------------"<<endl<<endl;
		cout<<"\t\t____________________________________"<<endl;
		cout<<"\t\t|           MAIN MENU              |"<<endl;
		cout<<"\t\t|__________________________________|"<<endl;
		cout<<"\t\t|1. TO ADD BOOKS                   |"<<endl;
		cout<<"\t\t|2. TO DISPLAY BOOKS               |"<<endl;
		cout<<"\t\t|3. TO SEARCH SPECIFIC BOOK        |"<<endl;
		cout<<"\t\t|4. TO EXIT                        |"<<endl;
		cout<<"\t\t|__________________________________|"<<endl<<endl;
		cout<<"\n\t\t CHOICE:";
		cin>>choice;
		
		if(choice == 1)
		{
			add_books a;
		}
		
		if(choice == 2)
		{
			display d;
		}
		
		if(choice == 3)
		{
			search s;
		}
		
		if(choice == 4)
		{
			system("cls");
			cout<<"\t ---------------------------------------"<<endl;
			cout<<"\t ' THERE IS NO FRIEND LOYAL THAN BOOK '"<<endl;
			cout<<"\t ---------------------------------------"<<endl;
			cout<<"\t\t\t () () "<<endl;
	        cout<<"\t\t\t (o o) "<<endl;
	        cout<<"\t\t\tc(   ) "<<endl;
	        cout<<"\t\t\t  O O  "<<endl;
	        cout<<"\t  ..........(: THANK YOU :)........."<<endl;
			break;
		}
	}
}
    else if(username != un)
    {
	    cout<<"\n\n\t\t\t INVALID USERNAME!! "<<endl<<endl;
	    cout<<"\t\t\t   Please try again :)";
    }
    
    else 
    {
	    cout<<"\n\n\t\t\t INVALID PASSWORD!! "<<endl<<endl;
	    cout<<"\t\t\t   Please try again :)";
    }
}
	
		
