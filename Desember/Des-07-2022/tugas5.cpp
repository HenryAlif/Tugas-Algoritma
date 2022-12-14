#include <iostream>
using namespace std;

int main()
{
    int n, fib1 = 0, fib2 = 1, then = 0;

    cout << "Enter the Limits of the Fibonacci Number :  ";
    cin >> n;
	cout<<endl;
    cout << "Fibonacci: ";

    for (int i = 1; i <= n; ++i)
    {
        // Mencetak dua deret bilangan fibonacci pertama.
        if(i == 1)
        {
            cout << " " << fib1<<" ";
            continue;
        }
        if(i == 2)
        {
            cout << fib2 << " ";
            continue;
        }
        then = fib1 + fib2;
        fib1 = fib2;
        fib2 = then;
         // Mencetak deret bilangan fibonacci berikutnya.
        cout << then << " ";
    }
    return 0;
}