
#include<iostream>
#include<vector>
#include<unordered_map> // Add this line

using namespace std;


int solution(vector<int>& arr) {
        
         
        // int maxi = INT_MIN;
        // int var = 0;
        // int n = arr.size();
        // for(int i = 0; i < n; i++){
        //     for(int j = i; j < n; j++){
        //         var += arr[j];
        //         maxi = max(var,maxi);
        //     }
        //     var = 0;
        // }
        // return maxi;

        int maxi = INT_MIN;
        int var = 0;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            
            var += arr[i];
            maxi = max(var,maxi);

            if(var < 0)
                var = 0;
        }
        return maxi;
}


int main()
{
    vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};

    int ans = solution(arr);

    std::cout<<ans;

    return 0;
}