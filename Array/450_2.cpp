//Find the Maximum and Minimum element in an array


#include <iostream>

using namespace std;


typedef struct Pair
{
    int Max;
    int Min;
}Pair;


Pair maxmin(int arr[], int size)
{
    Pair minmax;
    int i;
    if( size == 1)
    {
        minmax.Max = arr[0];
        minmax.Min = arr[0];
    }

    if( size == 2)
    {
        if(arr[0] > arr[1])
        {
            minmax.Max = arr[0];
            minmax.Min = arr[1];
        }
        else
        {
               minmax.Max = arr[1];
            minmax.Min = arr[0];
        }
    }

    if( size > 2)
    {
        minmax.Max = arr[0];
        minmax.Min = arr[0];
        for(int i = 1; i < size; i++)
        {
            if(arr[i] > minmax.Max)
                minmax.Max = arr[i];
            if(arr[i] < minmax.Min)
                minmax.Min = arr[i];
        }
    }
    return minmax;
}


int main()
{
    int arr[] = {100, 15, 78, 63, 54};
    int size = sizeof(arr)/sizeof(arr[0]);
    Pair minmax = maxmin(arr, size);
    cout << "Max is  " << minmax.Max << endl;
    cout << "Min is  " << minmax.Min << endl;
    return 0;
}
