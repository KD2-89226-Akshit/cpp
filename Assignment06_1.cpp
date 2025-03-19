#include<iostream>
using namespace std;

class Product
{
    int id;
    string title;
    public:
    Product()
    {
        cout<<"Inside Product()"<<endl;
    }
    Product(int id,string title)
    {
        this->id=id;
        this->title=title;
    }

    virtual void accept()
    {
        cout<<"Enter the id "<<endl;
        cin>>id;
        cout<<"Enter the Title "<<endl;
        cin>>title;
    }

    virtual void display()
    {
        cout<<"Id: "<<id<<endl;
        cout<<"Title: "<<title;
    }
    virtual int getprice()
    {
        return 0;
    }
};

class Book:public Product
{
    string bauthor;
    int price;

    public:
    Book()
    {
        cout<<"Book()"<<endl;
    }

    Book(string bauthor,int price,int id,string title):Product(id,title)
    {
        cout<<"Book(string,price)"<<endl;
        this->bauthor=bauthor;
        this->price=price;
    }

    void accept()
    {
        
        cout<<"Enter the Author Name"<<endl;
        cin>>bauthor;
        cout<<"Enter the Price"<<endl;
        cin>>price;
        Product::accept();
        
    }

    void display()
    {
        cout<<"Author: "<<bauthor<<endl;
        cout<<"Price: "<<(price*0.90)<<endl; 
        Product::display();
    }

    int getPrice()
    {
        return (price*0.90);
    }

};

class Tape:public Product
{
    
    string tartist;
    int price;

    public:
    Tape()
    {
        cout<<"Inside Tape()"<<endl;
    }

    Tape(string taartist,int price,int id,string title):Product(id,title)
    {
        this->tartist=tartist;
        this->price=price;
    }

    void acceptTdetails()
    {
        cout<<"Enter the Artist: "<<endl;
        cin>>tartist;
        cout<<"Enter the Tape Price: "<<endl;
        cin>>price;
        Product::accept();
    }

    void display()
    {
        cout<<"Artist"<<tartist<<endl;
        cout<<"Price"<<(price*0.95)<<endl;
        Product::display();
    }

    int getPrice()
    {
        return (price*0.95);
    }
};

int menu()
{
    int choice;
    // cout<<"***************************"<<endl;
    cout<<"0. EXIT"<<endl;  
    cout<<"1. Add Book "<<endl;
    cout<<"2. Add Tape"<<endl;
    cout<<"3. Display All"<<endl;
    cout<<"4. Display All Book"<<endl;
    cout<<"5. Display All Tape"<<endl;
    cout<<"6. Show Final Bill"<<endl;
    cout<<"Enter the Choice"<<endl;
    cin>>choice;
    cout<<"***************************"<<endl;
    return choice;
}

int main()
{
    int choice;
    int index = 0;
    Product *prod_list[3];
    while((choice=menu())!=0)
    {
        switch(choice)
        {
            case 0:
                cout<<"Thank You"<<endl;
            case 1:
                {if(index<3)
                {
                    prod_list[index] = new Book();
                    prod_list[index++]->accept(); 
                }
                else
                {
                    cout<<"Array is Full"<<endl;
                }}
                break;
            case 2:
                {if(index<3)
                    {
                    prod_list[index]= new Tape();
                    prod_list[index++]->accept();
                    }
                else{
                    cout<<"Array is Full"<<endl;
                }}
                break;
            case 3:
                {for(int i=0;i<index;i++)
                    {
                        prod_list[i]->display();
                    }}
                break;
            case 4:
                {for(int i=0;i<index;i++){
                    if(typeid(*prod_list[i])==typeid(Book))
                    {
                        prod_list[i]->display();
                    }
                }}
                break;
            case 5:
                for(int i=0;i<index;i++)
                {
                    if(typeid(*prod_list[i])==typeid(Tape))
                    {
                        prod_list[i]->display();
                    }
                }
                break;
            case 6:
                {
                    int total=0;
                    for(int i=0;i<index;i++)
                    {
                        if(typeid(*prod_list[i])==typeid(Book))
                        {
                            total+=prod_list[i]->getprice();
                        }
                    }
                    cout<<"Total Bill is: "<<total<<endl;
                }
                break;
            default:
                cout<<"You enter the Wrong choice"<<endl;
                break;
        }    
    }
    
    return 0;

}