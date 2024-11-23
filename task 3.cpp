#include <iostream>
using namespace std;

int main() 
{  
    int num, sum;
    
    cout<<"Enter any numbers and to stop enter a negative number:";
    cin>>num;

    while (num >= 0) 
    {
        sum=sum+num;  
        cin>>num;
    }

    cout<<"Total sum: "<<sum;
    return 0;
}


