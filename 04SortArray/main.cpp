#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of terms: " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number : " << endl;
        cin >> arr[i];
    }
    int c,d;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}