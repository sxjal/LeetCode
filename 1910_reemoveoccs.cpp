
#include<iostream>
#include<vector>
#include <string>

using namespace std;

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
   
   
    int pos = s.find(part);
    while(pos != string::npos){
        s.erase(pos, part.length());
        pos = s.find(part);
    }
    cout<<s;
    return 0;
}


