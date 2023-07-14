#include<fstream>
#include<iostream>
#include<dos.h>
#include<conio.h>
#include<iomanip>
#include<windows.h>
#include<stdlib.h>
#include<string>
#include"library.h"
#include"library.cpp"

using namespace std;


int main()
{
	int choice;
	int choice1;
    int choice2;
	char input;
	char ch;
	student st;
    faculty ft;
	system("Color 4f");
   cout<<"\n\n";
   Sleep(40);
   cout<<"\t                   WELCOME TO LIBRARY              ";
   cout<<"\n\t                    'THE PAGES OF TIME'                "<<endl<<endl;
   cout<<"\t_________________________________________________________"<<endl;
   cout<<"\t||-------------------------------------------------------||"<<endl;
   cout<<"\t||.--.    .-._                        .----.             ||"<<endl;
   cout<<"\t|||==|____| |H|___            .---.___|    |_____.--.___ ||"<<endl;
   cout<<"\t|||  |====| | |oop|_          |+++|=-=| _ _|-=+=-|==|---|||"<<endl;
   cout<<"\t|||==|    | | |   | \\          |   |   | _\\/_|math |  | ^ |||"<<endl;
   cout<<"\t|||  |    | | |   |\\ \\   .--.   |   |=-=| _/\\_|-=+=-|  | ^ |||"<<endl;
   cout<<"\t|||  |    | | |   |_\\ \\_( oo )  |   |   |    |book |  | ^ |||"<<endl;
   cout<<"\t|||==|====| |H|xxx|  \\ \\ |''|   |+++|=-=|""""    |-=+=-|==|---|||"<<"                 MADE BY:"<<endl;
   cout<<"\t||`--^----'-^-^---'   `-' ""    '---^---^----^-----^--^---^||"<<"                   Azka Basit (383431)"<<endl;
   cout<<"\t||-------------------------------------------------------||"<<"                   Rameen Aamir (368788)"<<endl;
   cout<<"\t||-------------------------------------------------------||"<<"                   Abdullah Riaz(368970)"<<endl;
   cout<<"\t||               ___                   .-.__.-----. .---.||"<<endl;
   cout<<"\t||              |===| .---.   __   .---| |XX|<(*)>|_|^^^|||"<<endl;
   cout<<"\t||         ,  /(|   |_|ENG|__|''|__|:x:|=|  |     |=| U |||"<<endl;
   cout<<"\t||      _a'{ / (|===|+|   |++|  |==|   | |  |DISCR| | R |||"<<endl;
   cout<<"\t||       '/\\/ _(|===|-|   |  |''|  |:x:|=|  | ETE | | D |||"<<endl;
   cout<<"\t||_____   -\{___(|   |-|   |  |  |  |   | |  |     | | U |||"<<endl;
   cout<<"\t||       _(____)|===|+|[I]|DK|''|==|:x:|=|XX|<(*)>|=|^^^|||"<<endl;
   cout<<"\t||              `---^-^---^--^--'--^---^-^--^-----^-^---^||"<<endl;
   cout<<"\t||-------------------------------------------------------||"<<endl;
   cout<<"\t||_______________________________________________________||"<<endl;
   while(0)
    {
	   cin>>ch;
       cout<<ch;
	}
	getch();

	do
	{
		
		system("cls");
		cout<<endl<<endl;
		cout<<"\t               WELCOME TO BOOKHOUSE              ";
		cout<<"\n\t                THE PAGES OF TIME                "<<endl<<endl;
		cout<<"\t\t\t     () () "<<endl;
	    cout<<"\t\t\t     (o o) "<<endl;
	    cout<<"\t\t\t    c(   ) "<<endl;
	    cout<<"\t\t\t      O O  "<<endl;
		cout<<"\t -------------------------------------------------"<<endl;
	    cout<<"\t ' A READER LIVES THOUSAND LIVES BEFORE HE DIES '"<<endl;
	    cout<<"\t -------------------------------------------------"<<endl;
	    cout<<"\n\n\t1. ADMINISTRATOR "<<endl;
	    cout<<"\t2. STUDENT "<<endl;
	    cout<<"\t3. DISPLAY STUDENT RECORD"<<endl;
	    cout<<"\t4. FACULTY "<<endl;
	    cout<<"\t5. DISPLAY FACULTY RECORD "<<endl;
        cout<<"\t6. EXIT "<<endl;
	    cout<<"\n\t\t CHOICE:";
	    cin>>choice;
	    
	    if (choice == 1)
	    {
		   start end;
	    }
	    
	    if (choice == 2)
	    {
	    	st.crete_student();
	    	while(1){
	    	system("cls");
	    	cout<<"\n\n";
	    	cout<<"\t\t.......CHOOSE WHAT YOU WANNA DO.......... "<<endl;
	    	cout<<"\n\n\t\t1. ISSUE BOOKS"<<endl;
	    	cout<<"\t\t2. EXIT "<<endl;
	    	cout<<"\n\t\t CHOICE:";
	    	cin>>choice1;
	    
	    	if(choice1 == 1)
	    	{
	    		 issue_book bb;
	    		 bb.issue1();
			}
			
			
			
			
			if (choice1 == 2)
			{
				system("cls");
            	cout<<"\n\n\t\t Visit again :)";
            	
            	break;
			}
	        }
	    }

        
	    
	    if(choice == 3)
	    {
		    st.display_student();
	    }

         if (choice == 4)
	    {
	    	ft.crete_faculty();
	    	while(1){
	    	system("cls");
	    	cout<<"\n\n";
	    	cout<<"\t\t.......CHOOSE WHAT YOU WANNA DO.......... "<<endl;
	    	cout<<"\n\n\t\t1. ISSUE BOOKS"<<endl;
	    	cout<<"\t\t2. EXIT "<<endl;
	    	cout<<"\n\t\t CHOICE:";
	    	cin>>choice2;
	    
	    	if(choice2 == 1)
	    	{
	    		 issue_book bb;
	    		 bb.issue2();
			}
			
			
			
			
			if (choice2 == 2)
			{
				system("cls");
            	cout<<"\n\n\t\t Visit again :)";
            	
            	break;
			}
	        }
	    }

        if(choice == 5)
	    {
		    ft.display_faculty();
	    }
	    
	    
			
		if(choice == 6)
		{
			break;
		}
		
		 cout<<endl<<endl;
	    cout<<"Do you wanna continue(y/n)?"<<endl;
	    cin>>input;
	}while(input == 'y'|| input == 'Y');

	return 0;
}  


