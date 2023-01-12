#include <iostream> 
using namespace std; 

void reverse(int arr[], int start, int end) 
{ 
	while (start < end) 
	{ 
		int temp = arr[start]; 
		arr[start] = arr[end]; 
		arr[end] = temp; 
		start++; 
		end--; 
	} 
} 

int main() 
{ 
	int nums[] = { 3, 1, 2, 4 }; 
	int n = sizeof(nums) / sizeof(nums[0]); 

	reverse(nums, 0, n - 1); 
cout<<"[";
	for (int i = 0; i < n; i++) {
		cout << nums[i] << " "; }
		cout<<"]";
	return 0; 
}