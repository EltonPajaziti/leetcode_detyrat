#include <iostream>
#include <array>
#include <vector>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
        int length = nums.size();
        vector<int> rez(length, 0);
        for (int i=0;i<nums.size();i++){
            rez[i]= nums[nums[i]];
        } 
        return rez;
    }

int main(){
        vector<int> nums;
        vector<int> rez;

        nums = {0, 2, 1, 5, 3, 4};

        rez = buildArray(nums);
        cout << "{";
        for (int i = 0; i < rez.size(); i++)
        {
            string lidhesa = (i == rez.size() - 1) ? "}": ",";
            cout << rez[i] << lidhesa;
        }
        
        return 0;
}