#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr{7,1,5,3,6,4};
    
    int mini = INT_MAX;
    int diff = 0;

    for(int i = 0; i < arr.size() ; i++){
        mini = min(mini,arr[i]);
        diff = max(diff, arr[i]-mini);
    }
    
    cout<<diff;
    return 0;
}


