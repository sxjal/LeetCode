#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> a{1,2,3,4,5,6,100,200,201};
    
    sort(a.begin(), a.end());

    if(a.size() == 0)
        return 0;

    int longseq = INT_MIN;
    int count = 1;
    int lastelem = INT_MIN;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == lastelem + 1){
            count++;
            lastelem = a[i];
        }
        else if(a[i] != lastelem){
            count = 1;
            lastelem = a[i];
        }
        longseq = max(longseq,count);
    }

    cout<<longseq;

    return 0;
}


