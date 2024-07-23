#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>

using namespace std;

vector<vector<int>> soln(vector<int> &nums, int target){


    vector<vector<int>> ans;
    int n = nums.size();

    sort(nums.begin(),nums.end());
    for(int i = 0; i < n; i++){
        if(i>0 && nums[i] == nums[i-1]){
            continue;
        }

        for(int j = i+1; j < n; j++){

            if(j > i+1 && nums[j] == nums[j-1]){
                continue;
            }

            int k = j+1;
            int l = n-1;
            while(k<l){
                long long sum = nums[i] + nums[j] + nums[k] + nums[l];

                if(sum > target){
                    l--;
                }
                else if(sum < target){
                    k++;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                    k++;
                    l--;

                    while(k<l && nums[k] == nums[k-1]){
                        k++;
                    }
                    while(k<l && nums[l] == nums[l+1]){
                        l--;
                    }
                }
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> arr{1,0,-1,0,-2,2};

    int target = 0;

    vector<vector<int>> ans = soln(arr, target);
    
    for(auto row:ans){
        for(auto col:row){
            cout<<col;
        }
    }
    return 0;
}






