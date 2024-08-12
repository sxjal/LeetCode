
#include<iostream>
#include<vector>
#include <string>

using namespace std;


#include<iostream>
#include<vector>
#include <string>

using namespace std;

bool mycomp(string a, string b){
    string t1 = a+b;
    string t2 = b+a;

    return t1>t2;
}

string largestNumber(vector<int>& nums) {
    vector<string> str;

    for(auto x:nums){
        str.push_back(to_string(x));
    }

    sort(str.begin(),str.end(),mycomp);
    string ans = "";

    for(auto x : str){
        ans += x;
    }

    if(ans[0] == '0'){
        return "0";
    }

    return ans; 
}

int main()
{
    vector<int> nums = {1,2,3,4,5};

    cout<<largestNumber(nums);

    return 0;
}



