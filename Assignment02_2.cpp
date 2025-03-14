#include<iostream>
using namespace std;

class student
{
    private:
    int roll_no;
    string name;
    int marks;

    public:
    void init()
    {
        roll_no=0;
        name="Null";
        marks=0;
    }
    void printStudentOnConsole()
    {
        cout<<"Enter the roll no-"<<roll_no<<endl;
        cout<<"Enter the Name-"<<name<<endl;
        cout<<"Enter the Marks-"<<marks<<endl;
    }

    void acceptStudentFromConsole()
    {
        cout<<"Roll No-"<<endl;
        cin>>roll_no;
        cout<<"Name-"<<endl;
        cin>>name;
        cout<<"Marks-"<<endl;
        cin>>marks;
    }
};

int menu()
{
    int choice;
    cout<<"O for Exit"<<endl;
    cout<<"1 for Accept"<<endl;
    cout<<"2 for Display"<<endl;
    cout<<"Enter the choice"<<endl;
    cin>>choice;
    return choice;
}



int main()
{
    student s1;
    s1.init();
    int choice;
    while((choice=menu())!=0)
    {
        switch(choice)
        {
            case 0:
                cout<<"Thank You"<<endl;
            case 1:
                s1.acceptStudentFromConsole();
                break;
            case 2:
                s1.printStudentOnConsole();
                break;
            default:
                cout<<"You enter the Wrong choice"<<endl;
                break;
        }
    }
    
    return 0;
}