#include<iostream>
using namespace std;

class Employee
{
    int id;
    double salary;

    public:
    Employee()
    {
        cout<<"Employe()"<<endl;
    }

    Employee(int id,double salary)
    {
        this->id=id;
        this->salary=salary;
    }
    void setId(int id)
    {
        this->id=id;
    }
    int getId()
    {
        return id;
    }
    void setSalary(double)
    {
        this->salary=salary;
    }
    double getSalary()
    {
        return salary;
    }
    virtual void accept()
    {
        cout<<"Enter the id: "<<endl;
        cin>>id;
        cout<<"Enter the Salary: "<<endl;
        cin>>salary;
    }

    virtual void display()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

class Manager : virtual public Employee
{
    double bonus;
    protected:
    void acceptManager()
    {
        cout<<"Enter the Bonus- "<<endl;
        cin>>bonus;
    }
    void displayManager()
    {
        cout<<"Bonus- "<<bonus<<endl;
    }

    public:
    Manager()
    {
        cout<<"Manager()"<<endl;
    }
    Manager(double bonus,int id,double salary):Employee(id,salary)
    {
        this->bonus=bonus;
    }
    void setBonus(double)
    {
        this->bonus=bonus;
    }

    double getBonus()
    {
        return bonus;
    }

    void accept()
    {
        Employee::accept();
        acceptManager();
    }
    void display()
    {
        Employee::display();
        displayManager();
    }

};

class Salesman:virtual public Employee
{
    double commission;

    protected:

    void acceptSalesman()
    {
        cout<<"Enter the commission"<<endl;
        cin>>commission;
    }

    void displaySalesman()
    {
        cout<<"Commission "<<commission<<endl;
    }

    public:
    Salesman()
    {
        cout<<"Salesman()"<<endl;
    }
    Salesman(int id,double salary,double commmission):Employee(id,salary)
    {
        this->commission=commission;
    }

    void setCommission(double)
    {
        this->commission=commission;
    }
    double getCommission()
    {
        return commission;
    }

    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }

    void display()
    {
        Employee::display();
        displaySalesman();
    }
};

class SalesManager:public Manager,public Salesman
{
    public:
    SalesManager()
    {

    }

    SalesManager(int id,double salary,double bonus,double commission):Employee(id,salary)
    {
        cout<<"SalesManager(int,double,double,double)"<<endl;

    }

    void accept()
    {
        Employee::accept();
        Manager::acceptManager();
        Salesman::acceptSalesman();
    }

    void display()
    {
        Employee::display();
        Manager::displayManager();
        Salesman::displaySalesman();
    }
};

int main()
{
    // Manager m;
    // m.accept();
    // m.display();

   Salesman sm;
   sm.accept();
   sm.display();

   // Employee *eptr = new SalesManager();
   // eptr->accept();
   // eptr->display();
    return 0;
}