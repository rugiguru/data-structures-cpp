#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isRedundant(string str)
{
    // return false;

    stack<char> s;
    
    for (char c : str)
    {
        if(c != ')')
        {
            s.push(c);
        } 
        else if (c == ')'){
            bool isOperator = false;
            while(!s.empty() and  s.top()  != '('){
                char top = s.top();
                if( top == '+' or top == '-' or top == '*' or top == '/')
                {
                    isOperator = true;
                } 
                s.pop();
            }
            s.pop();
            if(isOperator == false){
                return true;
            }
        }
    }
    return false;
}


int main(int argc, char const *argv[])
{
    string str = "((a+b) + c)";

    if(isRedundant(str)){
        cout << "Redundant!" << endl;
    } else {
        cout << "Not Redundant!" << endl;
    }
    return 0;
}
