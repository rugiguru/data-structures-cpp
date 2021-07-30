#include<iostream>
#include<unordered_set>
using namespace std;


int main()
{
    unordered_set<int> s{1,6,33,11,4};

    int key;
    cin>>key;


    if(s.find(key) != s.end()){
        cout << key << "is found";
    } else {
        cout << key << "not found";
    }

    return 0;
}
