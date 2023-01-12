#include <iostream>

using namespace std;

int findActiveStudents(int startTime[], int endTime[], int queryTime, int n) 
{ 
    int count = 0; 
  
    
    for (int i=0; i<n; i++) 
    { 
        if (startTime[i] > queryTime || endTime[i] < queryTime) 
            continue; 
  
        count++; 
    } 
  
    return count; 
} 

int main() 
{ 
    int startTime[] = {1,2,3}; 
    int endTime[] = {3,2,7}; 
    int queryTime = 4; 
    int n = sizeof(startTime)/sizeof(startTime[0]); 
  
    cout << findActiveStudents(startTime, endTime, queryTime, n); 
  
    return 0; 
}