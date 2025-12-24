#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

void rotateMatrix(vector<vector<int>>& mat){
    int n = mat.size();
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
    for(int i = 0; i<n; i++){
        reverse(mat[i].begin(), mat[i].end());
    }
}


int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    int n = matrix.size();
   rotateMatrix(matrix);
     for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
     }
}