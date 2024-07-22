
#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> arr, int low, int high, int x)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}

bool soln(vector<vector<int>> matrix, int target){

    int rows = matrix.size();
    int cols = matrix[0].size();

    for(int i = 0; i < rows; i++){
        if(target > matrix[i][cols-1]){
            continue;
        }
        else 
            //binary search
            return binarySearch(matrix[i],0,cols,target) != -1 ? true : false;
    }
    return false;
}
int main()
{
    vector<vector<int>> nums{{1,3,5,7},{10,11,16,20},{23,30,34,60}};

    cout<<soln(nums, 3);    
    return 0;
}


