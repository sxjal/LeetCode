#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> soln(vector<int> &arr, int target){

//optimal approach
    int n = arr.size();
    int left = 0;
    int right = n-1;
    for(int i = 0; i < n; i++){
        if(arr[left] + arr[right] == target){
            return {left,right};
        }
        
        if(arr[left] + arr[right] < target){
            left++;
        }
        else{
            right--;
        }
    }

    return {-1,-1};

//bruteforce
    // unordered_map<int,int> hash;
    // int n = arr.size();
    // for(int i = 0 ; i < n; i++){
    //     int a = arr[i];
    //     int needed = target-a;
    //     if(hash.find(needed) != hash.end()){
    //         return {hash[needed],i};
    //     }
    //     hash[a] = i;
    // }
    // return {0};
}
int main()
{
    vector<int> arr{2,6,5,8,11};
    int target = 14;

    vector<int> ans = soln(arr, target);
    
    for(auto row:ans){
        cout<<row<<" ";
    }
    return 0;
}


