
#include<iostream>
#include<vector>
#include <map>

using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();
    
    map<int, int> hsh; 
    for(int i = 0; i < n; i++){
        hsh[nums[i]]++;
    }

    for(auto it:hsh){
        if (it.second > (n/2))
            return it.first;

    }

    return -1;
}

int main()
{
    vector<int> nums{2,2,1,1,1,2,2};

    cout<<majorityElement(nums);    
    return 0;
}


