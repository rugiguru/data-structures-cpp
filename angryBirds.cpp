#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool canPlaceBirds(int B, int N, vector<int> nests, int sep)
{
    int birds = 1;
    int location = nests[0];

    for (int i = 0; i < N - 1; i++)
    {
        int currentLocation = nests[i];
        if(currentLocation - location >= sep)
        {
            birds++;
            location = currentLocation;

            if(birds == B){
                return true;
            }
        }
    }

    return false;
    
}


int main()
{
    int B = 3;
    vector<int> nests{1,2,4,8,9};
    int N = nests.size();

    // sort if not sorted
    sort(nests.begin(),nests.end());

    // Binary search 
    int s = 0;
    int e = nests[N-1] - nests[0];
    int ans = -1;

    while (s<=e)
    {
        int mid = (s+e) / 2;

        bool canPlace = canPlaceBirds(B,N,nests,mid);

        if(canPlace){
            ans = mid;
            s = mid +1;
        } else {
            e = mid -1;
        }
    }

    cout << ans << endl;
    

    // 
    return 0;
}
