#include<iostream>
#include<vector>


using namespace std;


int main(){
    vector<int> arr{2,3,5,1,2,3};

    int n = 6;
    int k = 3;
    int sum = 0;
    int mm = INT_MAX;

    for(int i = 0; i < k; i++){
        sum += arr[i];
    }

    mm = min(mm,sum);

    for(int i = 1; i < n-k+1 ; i++){
        sum -= arr[i-1];
        sum += arr[i+k-1];

        mm = min(mm,sum);
    }


    cout<<mm;
    return 0;
}