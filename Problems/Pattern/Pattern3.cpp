// Pattern 3 : -- --
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

// #include <iostream>
// #include <conio.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << j << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

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
            cout << n - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}