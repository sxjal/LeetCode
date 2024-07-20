#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n = 6;
    
    vector<vector<int>> arr;
    vector<int> ans;
    for(int i = 1; i <= n; i++){
        int count = 1;
        for(int j = 1; j <= i; j++){
           // cout<<count<<" ";
            ans.push_back(count);
            count = count * (i-j)/j;
        }
        arr.push_back(ans);
        ans.clear();
        cout<<endl;
    }    

    for(auto a : arr){
        for(auto b:a){
            cout<<b<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}


