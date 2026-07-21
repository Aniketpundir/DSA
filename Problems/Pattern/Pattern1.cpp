// Pattern 1 : -- --
// ****
// ****
// ****
// ****

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}
