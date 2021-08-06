#include<iostream>

using namespace std;

int lowerBound(int arr[], int n, int key)
{
    int s = 0;
    int e = n-1;
    int lbound =0;
    while(s <= e)
    {
        int mid = (s+e) / 2;
        if(arr[mid] == key)
        {
            lbound = mid;
            e = mid-1;
        }
        else if (arr[mid] > key)
        {
            e = mid-1;
        } else 
        {
            s = mid + 1;
        }
    }
    return lbound;

}

int upperBound(int arr[], int n, int key)
{
    int s = 0;
    int e = n-1;
    int uBound =0;
    while(s <= e)
    {
        int mid = (s+e) / 2;
        if(arr[mid] == key)
        {
            uBound = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid-1;
        } else 
        {
            s = mid + 1;
        }
    }
    return uBound;

}

int main()
{
    int arr[] = {0,1,1,2,2,2,2,2,3,5,11};

    int lbound = lowerBound(arr, 11,2);
    int uBound = upperBound(arr, 11,2);
    cout << uBound;
    return 0;
}



