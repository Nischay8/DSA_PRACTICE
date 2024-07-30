#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        int val = col;
        while (col <= row)
        {
            cout << val;
        }
        cout << endl;
        row++;
    }
}