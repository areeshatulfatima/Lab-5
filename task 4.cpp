#include <iostream>
using namespace std;

int main() 
{
    int n, sum;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) 
		{ 
        
            sum= sum+i;
        }
    }

    cout << "Sum of odd numbers between 1 and "<<n<<" is: " <<sum;
    return 0;
}

