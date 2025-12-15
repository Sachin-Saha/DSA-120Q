#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (ans.empty() || arr[i][0] > ans.back()[1]){
            ans.push_back(arr[i]);
        }
        else{
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> result = mergeIntervals(intervals);
    for (auto interval : result){
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
}


/*

Dry Run of this code to understand the concept of this code 

Input:
intervals = [[1,3], [2,6], [8,10], [15,18]]

Step 1: Sort intervals
Sorted intervals = [[1,3], [2,6], [8,10], [15,18]]

Initialize:
ans = []

--------------------------------
Iteration i = 0
Current interval = [1,3]
ans is empty → push interval
ans = [[1,3]]

--------------------------------
Iteration i = 1
Current interval = [2,6]
Compare with last interval in ans → [1,3]
2 <= 3 → overlap
Merge intervals:
end = max(3,6) = 6
ans = [[1,6]]

--------------------------------
Iteration i = 2
Current interval = [8,10]
Compare with last interval → [1,6]
8 > 6 → no overlap
Push interval
ans = [[1,6], [8,10]]

--------------------------------
Iteration i = 3
Current interval = [15,18]
Compare with last interval → [8,10]
15 > 10 → no overlap
Push interval
ans = [[1,6], [8,10], [15,18]]

--------------------------------
Final Output:
[[1,6], [8,10], [15,18]]

Sorted intervals are compared only with the last merged interval.
If overlapping → merge, else → push as new interval.

*/

