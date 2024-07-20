
#include<iostream>
#include<vector>
#include<unordered_map> // Add this line

using namespace std;


vector<int> solution(vector<vector<int>>& arr) {
        int count = 0;

        int cs = 0, rs = 0;
        int m = arr.size();  //rows
        int n = arr[1].size(); //cols

        int ce = n-1;
        int re = m-1;


        // cout<<"cs: "<<cs<<" ce: "<<ce<<" rs: "<<rs<<" re: "<<re<<endl;

        vector<int> ans;
        while(true){
            for(int i = cs; i<= ce; i++){
                //cout<<arr[cs][i];
                ans.push_back(arr[rs][i]);
                count++;
            }
            rs += 1;
            
            for(int i = rs; i<= re; i++){
                // cout<<arr[i][ce];
                ans.push_back(arr[i][ce]);
                count++;
            }
            ce -= 1;
            
            for(int i = ce; i>= cs; i--){
                // cout<<arr[re][i];
                ans.push_back(arr[re][i]);
                count++;
            }
            re -= 1;

            for(int i = re; i>= rs; i--){
                // cout<<arr[i][cs];
                ans.push_back(arr[i][cs]);
                count++;
            }
            cs += 1;

            if(count == m*n)
                break;
    
    }
        return ans;
}


int main()
{
    vector<vector<int>> arr{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
    };


    // cout<<arr[2][3]<<endl;
    
    // for(auto a:arr){
        
    //     for(auto b:a)
    //         cout<<b<<" ";
    //     cout<<endl;
    // }

    vector<int> ans = solution(arr);

    for(auto a:ans){
        cout<<a<<" ";
    }

    return 0;
}