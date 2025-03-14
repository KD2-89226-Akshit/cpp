#include<iostream>
using namespace std;

class Time
{
    int hr;   // data members
    int min;
    int sec;

    public:
    Time(): Time(0,0,0) // Parameterless ctor
    {
    }
    Time(int hr,int min,int sec) // Parametrized ctor 
    {
        this->hr = hr;
        this->min= min;
        this->sec= sec;
    }
    void setHour(int hr) // Mutator for hr
    {
        this->hr;
    }
    
    void setMinute(int min) // Mutator for min
    {
        this->min=min;
    }

    void setSecond(int sec) // Mutator for sec
    {
        this->sec=sec;
    }

    int getHour() // Inspector for hr
    {
        return hr;
    }

    int getMinute() // Inspector for min
    {
        return min;
    }

    int getSecond() // Inspector for sec
    {
        return sec;
    }

    void printTime() // Facilitator
    {
        cout<<"Time: "<<hr<<":"<<min<<":"<<sec<<endl;
    }
    void accept()
    {
        cout<<"ENter the hr "<<endl;
        cin>>hr;
        cout<<"enter the min "<<endl;
        cin>>min;
        cout<<"Enter the sec "<<endl;
        cin>>sec;
    }
};


int main()
{
    
    // creating array and allocate memory for array and object dynamically.
    Time**ptr = new Time*[3];

    for(int i=0;i<3;i++)
    {
        ptr[i]->accept();
    
    }
    
    for(int i=0;i<3;i++)
    {
        delete ptr[i];
        ptr[i] = NULL;
    
    }
    
    delete [] ptr;
    ptr=NULL;
    
    return 0;
}