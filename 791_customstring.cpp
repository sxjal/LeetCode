#include<iostream>
#include<vector>
#include <string>

using namespace std;


string str;
bool mycomp(string a, string b){
    return str.find(a) < str.find(b);
}

string customSortString(string order, string s) {
    str = order;
    sort(s.begin(),s.end(),mycomp);
    return s;
}

int main()
{
    vector<int> nums = {1,2,3,4,5};

    cout<<customSortString("cad","bacdjkjkj");

    return 0;
}



