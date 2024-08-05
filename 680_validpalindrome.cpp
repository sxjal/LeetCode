
#include<iostream>
#include<vector>
#include <string>

using namespace std;


bool ispalindrome(string s, int i, int j){
    while(i<=j){
        if(s[i] != s[j])
        return false;

        i++;
        j--;
        
    }
    return true;
}

bool validPalindrome(string s) {
    int i = 0;
    int j = s.length()-1;


    while(i<=j){
        if(s[i] == s[j]){
            i++;
            j--;
        }
        else{
            return ispalindrome(s,i,j-1) || ispalindrome(s,i+1,j);
        }
    }

    return true;
}

int main()
{
    string s = "abba";


    cout<<validPalindrome(s);
    return 0;
}


