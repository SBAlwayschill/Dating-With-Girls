#include<iostream>
using namespace std;

int main()
{
    //Introduction to the Program 
    cout<<"Neha is an expensive girl \n while shanu is an budget girl \n So this program will say whom and where to go on date according to your wallet! \n Good Luck Singles "<<endl;

//Variable Zone started
    int money;

//Variable Zone Ended

 

    cout << "Enter the amount you have " << endl; //asks for how much money you have

        cin >> money; //takes input


    //if else region started 

    if (money > 5000)
    {
        cout << "Date with neha" << endl;
        if (money > 10000)
        {
            cout << "Go to the 5 star mall" <<endl;
        }
        else
        {
            cout << "Go to any cafe with her brooo!!" << endl;
        }
        
    }

    else if (money>2000)
    {
        cout << "Date with shanu" << endl;
    }
    else
    {
        cout << "Go out with friends" << endl;
    }
    //if else region ended



    return 0;
}