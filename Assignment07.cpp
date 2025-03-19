#include<iostream>
using namespace std;

class Employee
{
    int id;
    double salary;

    public:
    Employee()
    {
        cout<<"Employee()"<<endl;
    }

    Employee(int id,double salary)
    {
        this->id=id;
        this->salary=salary;
    }

    void setId(int)  // Mutator
    {
        this->id=id;
    }

    int getId()  // Inspector
    {
        return id;
    }

    void setSalary()  // Mutator
    {
        this->salary=salary;
    }

    double getSalary()  // Inspector
    {
        return salary;
    }

    virtual void accept()
    {
        cout<<"Enter the Id:- "<<endl;
        cin>>id;
        cout<<"Enter the Salary"<<endl;
        cin>>salary;
    }

    virtual void display()
    {
        cout<<"Id: "<<id<<endl;
        cout<<"Salary: "<<salary;
    }

};

class Manager:virtual public Employee
{
    double bonus;

    protected:
    void acceptManager()
    {
        cout<<"Enter the Bonus: "<<endl;
        cin>>bonus;
    }
    void displayManager()
    {
        cout<<"Bonus: "<<bonus<<endl;
    }

    public:
    Manager()
    {
        cout<<"Manager()"<<endl;
    }

    Manager(int id,double salary,double bonus):Employee(id,salary)
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
        cout<<"Commission: "<<commission<<endl;
    }

    public:
    Salesman()
    {
        cout<<"Salesman()"<<endl;
    }

    Salesman(int id,double salary,double commission):Employee(id,salary)
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
        cout<<"SalesManager()"<<endl;
    }

    SalesManager(int id,double salary,double bonus,double commission):Employee(id,salary)
    {
        cout<<"SalesManager(int,double,double,double)"<<endl;
        Salesman::setCommission(commission);
        Manager::setBonus(bonus);
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

int menu()
{
    int choice;
    // cout<<"***************************"<<endl;
    cout<<"0. EXIT"<<endl;  
    cout<<"1. Add Manager "<<endl;
    cout<<"2. Add Salesman"<<endl;
    cout<<"3. Add SalesManager"<<endl;
    cout<<"4. Display the count of all emloyees with respect to designation"<<endl;
    cout<<"5. Display All Managers"<<endl;
    cout<<"6. Display All Salesman"<<endl;
    cout<<"7. Display All SalesManagers"<<endl;
    cout<<"Enter the Choice"<<endl;
    cin>>choice;
    cout<<"***************************"<<endl;
    return choice;
}

void empDesignation(int index,Employee **arr)
{
    int Manager=0;
    int Salesman=0;
    int SalesManager=0;


    for(int i=0;i<index;i++)
    {
        if(typeid(*arr[i])==typeid(Manager)) 
        {
            Manager++;
        } 
        else if(typeid(*arr[i])==typeid(Salesman)) 
        {
            Salesman++;
        }
        else
        {   
            // cout << "Value of manager" << endl;
            // cout << SalesManager << endl;
            SalesManager++;
        }
    }
    cout<<"Manager= "<<Manager<<endl;
    cout<<"Salesman= "<<Salesman<<endl;
    cout<<"SalesManager= "<<SalesManager<<endl;
}

void displayAllManager(int index,Employee **arr)
{
    for(int i=0;i<index;i++)
    {
        if(typeid(*arr[i])==typeid(Manager))
        {
            arr[i]->display();
        }
    }
}

void displayAllSalesman(int index,Employee **arr)
{
    for(int i=0;i<index;i++)
    {
        if(typeid(*arr[i])==typeid(Salesman))
        {
            arr[i]->display();
        }
    }
}

void displayAllSalesManager(int index,Employee **arr)
{
    for(int i=0;i<index;i++)
    {
        if(typeid(*arr[i])==typeid(SalesManager))
        {
            arr[i]->display();
        }
    }
}

int main()
{
    int choice;
    int index=0;
    Employee *arr[5] = {NULL}; 
    while((choice=menu())!=0)
    {
        switch(choice)
        {
            case 0:
                cout<<"Thank you:) "<<endl;
            case 1:
            {
            if(index<5)
            {
                Employee *ptr= new Manager();
                ptr->accept();
                arr[index] =ptr;
                index++;
            }
            else
            {
                cout<<"Memory is Full"<<endl;
            }
            break;
            }
           
            case 2:
            {
            if(index<5)
            {
                Employee *ptr = new Salesman();
                ptr->accept();
                arr[index] =ptr;
                index++;
            }
            else
            {
                cout<<"Memory is Full"<<endl;
            }
            break;
            }
            case 3:
            {if(index<5)
            {
                Employee *ptr = new SalesManager();
                ptr->accept();
                arr[index] = ptr;
                index++;
            }
            else
            {
                cout<<"Memory is Full"<<endl;
            }
            break;
            }
            case 4:
            {
            if(arr[0]!= NULL)
            {
                empDesignation(index,arr);
            }
            else 
            {
                cout<<"No Employee found"<<endl;
            }
            break;
            }
            case 5:
            {
                if(arr[0]!= NULL)
                {
                    displayAllManager(index,arr);
                }
                else
                {
                    cout<<"Employee Not Found"<<endl;
                }
            break;
            }
            case 6:
            {
                if(arr[0]!= NULL)
                {
                    displayAllSalesman(index,arr);
                }
                else
                {
                    cout<<"Employee not found"<<endl;
                }
            break;
            }
            case 7:
            {
                if(arr[0]!= NULL)
                {
                    displayAllSalesManager(index,arr);
                }
                else
                {
                    cout<<"Employee Not Found"<<endl;
                }
            break;
            }
            default:
                cout<<"You Enter a Wrong Choice"<<endl;
        }
    }
    // Employee e;
    // e.accept();
    // e.display();

    // Manager m1;
    // m1.accept();
    // m1.display();

    // Employee *eptr = new Manager();
    // eptr->accept();
    // eptr->display();
    return 0;


}