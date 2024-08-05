
#include<iostream>
#include<vector>
#include <string>

using namespace std;


#include<iostream>
#include<vector>
#include <string>

using namespace std;

int func(string s, int i, int j){
    int count = 0;


    //jabtak match karega tab kar count increment and i-- and j++
    while(i>= 0 && j < s.length() && s[i] == s[j]){
        count++;
        i--;
        j++;
    }
    
    return count;
}

int countSubstrings(string s) {
    int count = 0;

    for(int i = 0; i < s.size(); i++){
        count += func(s,i,i); //odd ans
        count += func(s,i,i+1); //even ans
    }

    return count;
}
int main()
{
   string s = "noon";


    cout<<countSubstrings(s);
    return 0;
}




int main()
{
   vector<string> s = {"12:12","00:13"};


    cout<<findMinDifference(s);
    return 0;
}


