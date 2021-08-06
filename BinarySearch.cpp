#include<iostream>
#include<vector>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n -1;
    int mid;

    while(start <= end)
    {
        int mid = (start + end) / 2;

        if(arr[mid] == key)
        {
            return mid;
        }

        if(arr[mid] < key)
        {
            start = mid +1;
        }
    }

    return -1;

}

int main(int argc, char const *argv[])
{
   int arr[] = {1,2,10,11,19,29,2};
   cout << binarySearch(arr,8,11);
    return 0;
}
