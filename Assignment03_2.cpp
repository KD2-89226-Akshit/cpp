#include<iostream>
using namespace std;

class tollboth
{
    private:
    unsigned int totalCars;
    double totalAmt;


    public:
    tollboth()
    {
        totalCars = 0;
        totalAmt = 0;
    }
    void payingCar()
    {
        cout <<"Inside Paying car"<<endl;
        totalCars++;
        totalAmt +=0.5 ;
    }
    
    void nopayCar()
    {
       cout<<"Inside Non-paying car"<<endl;
        totalCars++;
    }

    void printOnConsole()
    {
        cout<<"Total Cars:"<<totalCars<<endl;
        cout<<"Total Amount:-"<<totalAmt<<endl;
    }
} ;

int menu()
{
    int choice;
    cout<<"O for Exit"<<endl;
    cout<<"1 for Paying car"<<endl;
    cout<<"2 for Non Paying car"<<endl;
    cout<<"3 for Display the Data"<<endl;
    cout<<"Enter the choice"<<endl;
    cin>>choice;
    return choice;
}

int main()
{
    tollboth t1;
    int choice;
    while((choice=menu())!=0)
    {
        switch(choice)
        {
            case 0:
                cout<<"Thank You"<<endl;
            case 1:
                t1.payingCar();
                break;
            case 2:
                t1.nopayCar();
                break;
            case 3:
                t1.printOnConsole();
                break;
            default:
                cout<<"You enter the Wrong choice"<<endl;
                break;
        }    
    }

    return 0;
}