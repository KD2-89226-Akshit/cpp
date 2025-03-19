#include<iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

    public:
    Date()
    {
        cout<<"Date()"<<endl;
    }

    Date(int day,int month,int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }

    void acceptDate()
    {
        cout<<"Enter the Day- "<<endl;
        cin>>day;
        cout<<"Enter the Month- "<<endl;
        cin>>month;
        cout<<"Enter the Year- "<<endl;
        cin>>year;
    }

    void displayDate()
    {
        cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

class Person
{
    string name;
    string address;
    Date dob;

    public:
    Person()
    {
        cout<<"Person()"<<endl;
    }

    Person(string name,string address,int day,int month,int year):dob(day,month,year)
    {
        cout << "Employee(string,string,int,int,int)" << endl;
        this->name= name;
        this->address = address;
    }

    void acceptPerson()
    {
        cout<<"Enter the Name:-"<<endl;
        cin>>name;
        cout<<"Enter the Address-"<<endl;
        cin>>address;
        cout<<"Enter the Date of Birth:- "<<endl;
        dob.acceptDate();
    }

    void displayPerson()
    {
        cout<<"Enter the Name-"<<name<<endl;
        cout<<"Enter the Address-"<<address<<endl;
        cout<<"Date Of Birth-";
        dob.displayDate();
    }
};

class Student
{
    int id;
    int marks;
    string course;
    Date doj;
    Date enddate;

    public:
    Student()
    {
        cout<<"student()"<<endl;
    }

    Student(int id,int marks,string course,int day,int month,int year,int edate,int emonth,int eyear) :doj(day,month,year), enddate(edate,emonth,eyear)
    {
        cout<<"Student(id,marks,course)"<<endl;
        this->id=id;
        this->marks=marks;
        this->course=course;
    }

    void acceptStudent()
    {
        cout<<"Enter the id-"<<endl;
        cin>>id;
        cout<<"Enter the marks-"<<endl;
        cin>>marks;
        cout<<"Enter the course-"<<endl;
        cin>>course;
        doj.acceptDate();
        enddate.acceptDate();
    }

    void displayStudent()
    {
        cout<<"Id="<<id<<endl;
        cout<<"Marks="<<marks<<endl;
        cout<<"Course="<<course<<endl;
        doj.displayDate();
        enddate.displayDate();
    }

};

int main()
{
    Person p1;
    p1.acceptPerson();

    Student s1;
    s1.acceptStudent();
    
    p1.displayPerson();
    s1.displayStudent();
    return 0;
}