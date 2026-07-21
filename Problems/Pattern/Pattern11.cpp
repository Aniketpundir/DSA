// Pattern 10 : -- --
// A B C
// D E F
// G H J

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    int k = 0;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + k;
            cout << ch << " ";
            k++;
            j++;
        }
        cout << endl;
        i++;
    }
}