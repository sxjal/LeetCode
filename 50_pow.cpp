
#include<iostream>
#include<vector>

using namespace std;

double soln(double x, int n){
    double ans = 1.0;
    long nn = n;
    if(nn<0){
        nn = nn * -1;
    }
    while(nn>0){
        if(nn%2){
            ans = ans*x;
            nn = nn -1;
        }
        else{
            x = x*x;
            nn = nn/2;
        }
    }
    if(n<0){
        ans = (double)(1.0) / double(ans);
    }

    return ans;
}
int main()
{
    //vector<vector<int>> nums{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    double x = 12.000;
    int n = -12;
    cout<<soln(x, n);    
    return 0;
}


