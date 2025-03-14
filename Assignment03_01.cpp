#include<iostream>
using namespace std;

class volume
{
    int length;
    int width;
    int height;

    public:
    volume() : volume(10,20,30)
    {
        cout<<"Inside a Parameterless constructor"<<endl;
    }

    volume(int length) : volume(length,length,length)
    {
        cout<<"Inside a Single Parametrized constructor"<<endl;
    }

    volume(int length,int width,int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    void calculateVolumeDefault()
    {
        volume();
        displayData();
        cout<<"The volume is-"<<length*width*height<<endl;
    }

    void calculateVolumeSameValue()
    {
        acceptDataByOneValue();
        displayData();
        cout<<"The volume:-"<<length*width*height<<endl;
    }

    void calculateVolumeDifferentValue()
    {
        acceptDataByThreeValue();
        displayData();
        cout<<"The volume:-"<<length*width*height<<endl;
    }

    void acceptDataByOneValue()
    {
        cout<<"The length:"<<length<<endl;
        cin>>length;
        width=length;
        height=length;
    }

    void acceptDataByThreeValue()
    {
        cout<<"length"<<endl;
        cin>>length;
        cout<<"width"<<endl;
        cin>>width;
        cout<<"height"<<endl;
        cin>>height;
    }



    void acceptData()
    {
        cout<<"Enter the length"<<endl;
        cin>>length;
        cout<<"Enter the width"<<endl;
        cin>>width;
        cout<<"Enter the height"<<endl;
        cin>>height;
    }

    void displayData()
    {
        cout<<"Lenght:-"<<length<<endl;
        cout<<"Width:-"<<width<<endl;
        cout<<"Height:-"<<height<<endl;
    }

};

int menu()
{
    int choice;
    cout<<"O for Exit"<<endl;
    cout<<"1 for Calculate Volume with default values"<<endl;
    cout<<"2 for Calculate Volume with length,breadth and height with same value"<<endl;
    cout<<"3 for Calculate Volume with length,breadth and height with different value"<<endl;
    cout<<"Enter the choice"<<endl;
    cin>>choice;
    return choice;
}


int main()
{
    
    volume v1;
    int choice;
    while((choice=menu())!=0)
    {
        switch(choice)
        {
            case 0:
                cout<<"Thank You"<<endl;
            case 1:
                v1.calculateVolumeDefault();
                break;
            case 2:
                v1.calculateVolumeSameValue();
                break;
            case 3:
                v1.calculateVolumeDifferentValue();
            default:
                cout<<"You enter the Wrong choice"<<endl;
                break;
        }
    }

    
    return 0;
}