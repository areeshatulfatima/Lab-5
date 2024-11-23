#include <iostream>
using namespace std;

int main() {
    int total, temp;

    for (int i = 1; i <= 7; i++)
	 {
        cout<<"Enter temperature for day "<<i<<": ";
        cin>>temp; 
        total=total+temp;
    }

    cout<<"Average temperature: "<<total/7;
    return 0;
}

