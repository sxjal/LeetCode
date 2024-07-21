#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> soln(vector<vector<int>> &arr){

    //transpose the matrix
    int count = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < i; j++){
            swap(arr[i][j],arr[j][i]);
            count++;
        }
    }
    for (int i = 0; i < arr.size(); i++) {
        reverse(arr[i].begin(), arr[i].end());
    }
    return arr;
}
int main()
{
    vector<vector<int>> arr
    {{1,2,3},{4,5,6},{7,8,9}};

    vector<vector<int>> ans = soln(arr);
    
    for(auto row:ans){
        for(auto col:row){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}


