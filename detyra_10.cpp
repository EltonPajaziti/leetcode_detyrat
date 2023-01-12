#include <iostream>
#include <vector>
#include <array>
using namespace std;

 vector<int> getConcatenation(vector<int>& nums) {
        int length = 2 * nums.size();
        vector<int> rez (length, 0);
        for (int i =0;i<length;i++){
            if (i<nums.size()){
                rez[i] = nums[i];
            } else {
                rez[i] = nums[i-nums.size()];
            }
        }
        return rez;
    }

int main(){
        vector<int> nums;
        vector<int> result;

        nums = {1, 2, 1};
        result = getConcatenation(nums);
        cout << "{";
        for (int i = 0; i < result.size(); i++)
        {
            string lidhesa = (i == result.size() - 1) ? "}" : ",";
            cout << result[i] << lidhesa;
        }
        
        return 0;
}