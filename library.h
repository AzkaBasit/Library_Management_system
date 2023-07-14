#ifndef LIBRARY_H
#define LIBRARY_H
#include<string>

using namespace std;

class library{
	public:
		char book_name[20];
		char writer_name[20];
		char code[10];
		
		
		void get_data();
};

class book_file:public library
{
	public:
		void fill();
		
		void file();
		
};

class T1:public book_file{
	public:
		
		void book_data();
		
};

class T2:public book_file{
	public:
		
		void book_data();
		
};

class T3:public book_file{
	public:
		
		void book_data();
		
};

class T4:public book_file{
	public:
		void book_data();
		
};

class add_books{
	public:
		add_books();
};

class display{
	public:
		display();
};

class search
{
	public:
		search();
};

class student
{
	public:
		char reg_no[20];
	    char student_name[20];
	    char ch;

		void crete_student();
		
		void display_student();
		
};

class issue_book: public book_file{
	public:
		char book_name[20];
		char writer_name[20];
	    char fill[20];
	    char ch,code[10];
		
		issue_book();
	
		void issue1();
    	void issue2();

};

class faculty
{
	public:
		char id_no[20];
	    char faculty_name[20];
	    char ch;

		void crete_faculty();
		void display_faculty();
};

class start{
	private:
		string username;
		string password;
		string pass;
		string un;
	public:
		start();
};


#endif


