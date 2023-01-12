#include <iostream>
#include <vector>
using namespace std;
 vector<int> runningSum(vector<int>& arr) {
    int sum=0;
    for (int i=0;i<arr.size();i++){
        arr[i]={sum+=arr[i]};
    }
    return arr;
    }
int main(){
    vector<int> arr;
    arr = {1,2,3,4};
    vector<int> rez;

    rez = runningSum(arr);
    cout << "{ ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << rez[i] << " ";
    }
    cout << "}";

    return 0;
}