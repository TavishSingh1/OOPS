#include <iostream>
using namespace std;

int main()
{
    // int arr[3] = {1, 2};
    // cout << arr[2] << endl;

    // int marks[6];
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << "Enter marks"
    //          << "\n";
    //     cin >> marks[i];
    // }

    // int sum;

    // for (int i = 0; i < 6; i++)
    // {
    //     cout << marks[i] << endl;
    //     sum = sum + marks[i];
    //     cout << sum;
    // }

    int arr2d[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr2d[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr2d[i][j] << endl;
        }
    }
}