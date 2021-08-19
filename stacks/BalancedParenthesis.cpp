#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isBalanced(string str)
{
    // return false;
}


int main(int argc, char const *argv[])
{
    string str = "{(a+b) + c}";

    if(isBalanced(str)){
        cout << "Balanced!" << endl;
    } else {
        cout << "Not Balanced!" << endl;
    }
    return 0;
}
