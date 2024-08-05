
#include<iostream>
#include<vector>
#include <string>

using namespace std;

int findMinDifference(vector<string>& arr) {
    //convert all to minutes and then score diff.
    
    vector<int> minutes;
    for(int i = 0; i < arr.size(); i++){
        string curr = arr[i];
        int hrs = stoi(curr.substr(0,2));
        int mns = stoi(curr.substr(3,2));
        if(hrs == 0){
            hrs = 24;
        }

        minutes.push_back( (hrs*60) + mns );
        cout<<minutes[i]<<"\n";
    }

    
    sort(minutes.begin(),minutes.end());
    int mini = INT_MAX;
    int diff = 0;
    for(int i = 0; i<minutes.size()-1; i++){
        diff = minutes[i+1] - minutes[i];
        mini = min(mini,diff);
    }

    mini = min(mini,( (minutes[0]+1440) - minutes[minutes.size()-1]));
    return mini;

}

int main()
{
   vector<string> s = {"12:12","00:13"};


    cout<<findMinDifference(s);
    return 0;
}


