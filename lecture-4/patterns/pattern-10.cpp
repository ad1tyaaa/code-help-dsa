#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;

    // print the pattern
    char c;
    for (int i = 0; i < n; i++)
    {
        c = 'A' + i;
        for (int j = 0; j < n; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
    return 0;
}

// for n = 3

// A B C
// B C D
// C D E