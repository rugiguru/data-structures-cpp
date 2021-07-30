#include <iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{ 
    map<string, vector<string>> phoneBook;

    phoneBook["guru"].push_back("000000001");
    phoneBook["guru"].push_back("000000002");
    phoneBook["guru"].push_back("000000003");
    phoneBook["guru"].push_back("000000004");
    phoneBook["guru"].push_back("000000005");


    phoneBook["dhanu"].push_back("000000001");
    phoneBook["dhanu"].push_back("000000001");
    phoneBook["dhanu"].push_back("000000001");
    phoneBook["dhanu"].push_back("000000001");

      for (const auto& p : phoneBook ) {
        std::cout << p.first << std::endl; 
    }

    return 0;
}