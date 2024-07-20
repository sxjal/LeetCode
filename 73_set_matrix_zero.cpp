#include<iostream>
#include<vector>

using namespace std;

//brutefore approach
// void markzero(vector<vector<int>> &arr, int a,int b,int row, int col){

//     //marking row
//     for(int i = 0; i < col;i++){
//         if(arr[b][i] != 0) 
//             arr[b][i] = -1;
//     }

//     //marking col
//     for(int i = 0; i < row;i++){
//         if(arr[i][a] != 0)
//             arr[i][a] = -1;
//     }

// }

vector<vector<int>> soln(vector<vector<int>> &arr){
    

    int row = arr.size();
    int col = arr[0].size();

    int col0 = 1;

    for(int i = 0; i < row; i++){
        for(int j = 0; j< col; j++){
            if(arr[i][j] == 0){    
                arr[i][0] = 0;
                if(j!= 0){
                    arr[0][j] = 0;
                }
                else{
                    col0 = 0;
                }
            }
        }
    }

    for(int i = 1; i < row; i++){
        for(int j = 1; j< col; j++){
            if(arr[i][j] != 0){
                if (arr[i][0] == 0 || arr[0][j] == 0) {
                    arr[i][j] = 0;
                }
            }
        }
    }

    if(arr[0][0] == 0){
        for(int j = 0; j < col; j++){
                arr[0][j] = 0;
        }
    }


    if(col0 == 0){
        for(int i = 0; i < row; i++){
            arr[i][0] = 0;       
        }
    }

    return arr;
}
int main()
{
    vector<vector<int>> arr
    {{0,1,2,0},{3,4,5,2},{1,3,1,5}};

    //{{0,1,1,1},{1,0,1,1},{1,1,0,1},{1,1,0,1}};
    //{{1,1,1},{1,0,1},{1,1,1}};
    
    vector<vector<int>> ans = soln(arr);
    
    for(auto row:ans){
        for(auto col:row){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}


