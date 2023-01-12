#include <iostream>
#include <vector>
#include <array>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        for (int i=0;i<mat.size();i++){
            for (int j =0;j<mat.size();j++){
                if (i==j || i+j==mat.size()-1){
                    sum += mat[i][j];
                }
            }
        }
        return sum;
    }

int main(){
        vector<vector<int>> mat;
        mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        int sum = diagonalSum(mat);
        cout << "Shuma eshte: " << sum << endl;
        return 0;
}