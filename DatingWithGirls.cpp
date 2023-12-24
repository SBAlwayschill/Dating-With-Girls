#include<iostream>
using namespace std;

int main()
{
    cout<<"Neha is an expensive girl \n while shanu is an budget girl \n So this program will say whom and where to go on date according to your wallet! \n Good Luck Singles "<<endl;

    int money;
    cout<<"Enter the amount you have "<<endl;
    cin>> money;

    if (money>5000)
    {
        cout<<"Date with neha"<<endl;
        if (money > 10000)
        {
            cout<<"Go to the 5 star mall"<<endl;
        }
        else
        {
            cout<<"Go to any cafe with her brooo!!"<<endl;
        }
        
    }

    else if (money>2000)
    {
        cout<<"Date with shanu"<<endl;
    }
    else
    {
        cout<<"Go out with friends"<<endl;
    }
    
    





    return 0;
}