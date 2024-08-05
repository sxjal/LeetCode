
#include<iostream>
#include<vector>
#include <string>

using namespace std;

int main()
{
    string s = "azxxzy";
    string ans = "";
       
        int n = s.length();

        ans.push_back(s[0]);
        for(int i = 1; i < n; i++){
           
            if(ans.length() > 0 && ans[ans.length()-1] == s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }


    cout<<ans;
    
    
    return 0;
}


