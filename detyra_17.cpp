#include <iostream>
#include <vector>

using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
       int m = nums.size();
        vector <int> final (m,0);
        for(int i=0, j=0;i<m || j<n;i+=2, j++){
            final[i] = nums[j];
            final[i+1] = nums[j+n];
        }
        return final;
    }


int main(){

        vector<int> nums;
        int n = 3;

        vector<int> result;

        nums = {2, 5, 1, 3, 4, 7};

        result = shuffle(nums, n);
        cout << "{";
        for (int i = 0; i < result.size(); i++)
        {
            string lidhesa = (i == result.size() - 1) ? "}": ",";
            cout << result[i] << lidhesa;
        }
        
        return 0;
}