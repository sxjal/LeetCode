#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr{7,1,5,3,6,4};
    
    int mini = INT_MIN;
    int diff = 0;

    for(int i = 0; i < arr.size() ; i++){
        mini = min(mini,arr[i]);
        diff = max(diff, abs(mini-arr[i]));
    }
    
    cout<<diff;
    return 0;
}


