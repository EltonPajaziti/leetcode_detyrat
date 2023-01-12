#include <iostream> 
#include <vector> 

using namespace std; 

int countGoodPairs(vector<int>& nums) 
{ 
	
	int count = 0; 

	
	for (int i = 0; i < nums.size(); i++) 
		for (int j = i + 1; j < nums.size(); j++) 
			if (nums[i] == nums[j]) 
				count++; 

	return count; 
} 

int main() 
{ 
	vector<int> nums{ 1, 2, 3, 1, 1, 3 }; 
	cout << countGoodPairs(nums); 
	return 0; 
} 
#include <iostream> 
#include <vector> 

using namespace std; 

int countGoodPairs(vector<int>& nums) 
{ 
	// Initialize result 
	int count = 0; 

	// Traverse through all possible pairs 
	// of indices of given array 
	for (int i = 0; i < nums.size(); i++) 
		for (int j = i + 1; j < nums.size(); j++) 
			if (nums[i] == nums[j]) 
				count++; 

	return count; 
} 

int main() 
{ 
	vector<int> nums{ 1, 2, 3, 1, 1, 3 }; 
	cout << countGoodPairs(nums); 
	return 0; 
} 
