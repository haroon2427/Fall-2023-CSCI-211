#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double horror[]={1.14,1.23,2.01,2.43,1.87};
    double comedy[]={2.46,1.23,1.29,1.59,1.75};
    double action[]={1.13,2.14,3.00,1.93,2.15};
    double romance[]={1.05,1.56,2.07,2.01,2.14};
    
    int size_horror=sizeof(horror)/sizeof(horror[0]);
    int size_comedy=sizeof(comedy)/sizeof(comedy[0]);
    int size_action=sizeof(action)/sizeof(action[0]);
    int size_romance=sizeof(romance)/sizeof(romance[0]);

    string input;
    cout<<"Enter a movie genre to see the average movie duration: ";
    cin>>input;
    
    double average=0;
    
    if(input=="horror")
        {
        for(int i=0;i<size_horror;i++){
            average+=horror[i];
        }
        cout<<setprecision(3)<<average/size_horror;
        }
    else if (input=="comedy")
        {
        for(int i=0;i<size_comedy;i++){
            average+=comedy[i];
        }
        cout<<setprecision(3)<<average/size_comedy;
        }
    else if (input=="action")
        {
        for(int i=0;i<size_action;i++){
            average+=action[i];
        }
        cout<<setprecision(3)<<average/size_action;
        }
    else if (input=="romance")
        {
        for(int i=0;i<size_romance;i++){
            average+=romance[i];
        }
        cout<<setprecision(3)<<average/size_romance;
        }
    else cout<<"Invalid entry"<<endl;
    

    return 0;
}
