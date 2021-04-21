#include <iostream>

using namespace std;

void reverseArray(int arr[], int size)
{
    int h = size/2;
    for(int i =0; i < h; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void reverse(int arr[], int start, int end)
{
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}



int main()
{
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;
    int arr[n];
    cout << endl <<"Enter the elemnents: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    reverseArray(arr, n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << "   ";

    cout << "Hello world!" << endl;
    return 0;
}
