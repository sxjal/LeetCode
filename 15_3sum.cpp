#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>

using namespace std;

vector<vector<int>> soln(vector<int> &arr){


    vector<vector<int>> ans;

    int previ = 0;


    sort(arr.begin(),arr.end());
    for(int i = 0; i < arr.size(); i++){
        if(i > 0 && arr[i] == arr[i-1]){
            continue;
        }
        int j = i + 1;
        int k = arr.size()-1;
        while(1){
            int sum = arr[i] + arr[j] + arr[k];
            if( sum == 0){
                ans.push_back({arr[i],arr[j],arr[k]});
                while(arr[j] == arr[j-1]){
                    j++;
                }
                while(arr[k] == arr[k-1]){
                    k--;
                }          
                if(j >= k){
                    break;
                }
            }
            else if(sum < 0){
                j++;
            }
            else{
                k--;
            }
        }
    }

    return ans;

//tle in this approach
    // int n = arr.size();
    // set<vector<int>> st;

    // for (int i = 0; i < n; i++) {
    //     set<int> hashset;
    //     for (int j = i + 1; j < n; j++) {
            
    //         int third = -(arr[i] + arr[j]);

           
    //         if (hashset.find(third) != hashset.end()) {
    //             vector<int> temp = {arr[i], arr[j], third};
    //             sort(temp.begin(), temp.end());
    //             st.insert(temp);
    //         }
    //         hashset.insert(arr[j]);
    //     }
    // }

  
    // vector<vector<int>> ans(st.begin(), st.end());
    // return ans;
}
int main()
{
    vector<int> arr{2,6,5,8,11};
    int target = 14;

    vector<vector<int>> ans = soln(arr);
    
    for(auto row:ans){
        for(auto col:row){
            cout<<col;
        }
    }
    return 0;
}






