#include<iostream>
using namespace std;

// Menu Driven Program using class
/*class Date
{
    private:
    int day;
    int month ;
    int year;

    public:
    void init()
    {
        day=0;
        month=0;
        year=0;
    }

    void acceptDateFromConsole()
    {
        cout<<"Enter the day-"<<endl;
        cin>>day;
        cout<<"Enter the Month-"<<endl;
        cin>>month;
        cout<<"Enter the Year-"<<endl;
        cin>>year;

    }

    void printDateFromConsole()
    {
        cout<<"The Date Format is: "<<day<<"-"<<month<<"-"<<year<<endl;
    }

    bool isLeapYear()
    {
        if( year % 400 == 0 && year %4 == 0 || year % 4 == 0 && year %100!= 0)
            return 1;
        else
            return 0;
    }
};

int menu()
{
    int choice;
    cout<<"0 for Exit"<<endl;
    cout<<"1 for Accept"<<endl;
    cout<<"2 for Display"<<endl;
    cout<<"3 for Leap Year"<<endl;
    cout<<"Enter the Choice"<<endl;
    cin>>choice;
    return choice;
}

int main()
{
    Date d1;
    int n;
    d1.init();
    int choice;
    while((choice=menu())!=0)
    {
        switch(choice)
        {
            case 0:
                cout<<"Thank you for using the application"<<endl;
            case 1:
                d1.acceptDateFromConsole();
                break;
            case 2:
                d1.printDateFromConsole();
                break;
            case 3:
                n=d1.isLeapYear();
                if(n==1)
                     cout<<"Year is leap year"<<endl;
                else
                    cout<<"Not a Leap Year"<<endl; 
                break;
            default:
                cout<<"You Enter the wrong choice"<<endl;
        }
    }

       
    
    return 0;
}*/



//Menu Driven Program using structure

struct Date
{
    private:
    int day;
    int month ;
    int year;

    public:
    void init()
    {
        day=0;
        month=0;
        year=0;
    }

    void acceptDateFromConsole()
    {
        cout<<"Enter the day-"<<endl;
        cin>>day;
        cout<<"Enter the Month-"<<endl;
        cin>>month;
        cout<<"Enter the Year-"<<endl;
        cin>>year;

    }

    void printDateFromConsole()
    {
        cout<<"The Date Format is: "<<day<<"-"<<month<<"-"<<year<<endl;
    }

    bool isLeapYear()
    {
        if( year % 400 == 0 && year %4 == 0 || year % 4 == 0 && year %100!= 0)
            return 1;
        else
            return 0;
    }
};

int menu()
{
    int choice;
    cout<<"0 for Exit"<<endl;
    cout<<"1 for Accept"<<endl;
    cout<<"2 for Display"<<endl;
    cout<<"3 for Leap Year"<<endl;
    cout<<"Enter the Choice"<<endl;
    cin>>choice;
    return choice;
}

int main()
{
    struct Date d1;
    int n;
    d1.init();
    int choice;
    while((choice=menu())!=0)
    {
        switch(choice)
        {
            case 0:
                cout<<"Thank you for using the application"<<endl;
            case 1:
                d1.acceptDateFromConsole();
                break;
            case 2:
                d1.printDateFromConsole();
                break;
            case 3:
                n=d1.isLeapYear();
                if(n==1)
                     cout<<"Year is leap year"<<endl;
                else
                    cout<<"Not a Leap Year"<<endl; 
                break;
            default:
                cout<<"You Enter the wrong choice"<<endl;
        }
    }

       
    
    return 0;
}