#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> soln(vector<vector<int>> &arr){

    // int row = arr.size();
   
    // if (row == 1)
    //     return arr;
    
    // sort(arr.begin(),arr.end());
    // vector<vector<int>> ans;    
    // int count = 0;
    // for(int i = 0; i < row; i++){
    //     int start = arr[i][0];
    //     int end = arr[i][1];

    //     if(!ans.empty() && end <= ans.back()[1]){
    //         continue;
    //     }
    //     for(int j = i+1; j<  row; j++){
    //         if(arr[j][0] <= end){
    //            end =  max(end,arr[j][1]);
    //         }
    //         else break;
    //     }

    //     ans.push_back({start,end});
    // }
    
    // return ans;


    int row = arr.size();
    sort(arr.begin(),arr.end());

    vector<vector<int>> ans;

    for(int i = 0; i < row; i++){
        int start = arr[i][0];
        int end = arr[i][1];

        if(!ans.empty() && ans.back()[1] <= end){
            continue;
        }
        for(int j = i+1; j<row; j++){
            if(end >= arr[j][0]){
                end = max(end,arr[j][1]);
            }
            else break;
        }
        ans.push_back({start,end});
    }
    return ans;
}
int main()
{
    vector<vector<int>> arr
    {{0,2},{1,4},{3,5}};

    
    
    vector<vector<int>> ans = soln(arr);
    
    for(auto row:ans){
        for(auto col:row){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}


