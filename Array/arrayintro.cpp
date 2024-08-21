#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing The Array " << endl;
    for (int i = 0; i <  size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing DOne" << endl;
}

int main()
{
    int number[15];

    cout << "EveryThing is Fine" << endl;
    cout << "value at 0 index " << number[0];

    int third[3] = {1, 5, 8};

    printArray(third, 3);
}