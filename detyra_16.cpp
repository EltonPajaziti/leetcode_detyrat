 #include <iostream>
#include <string>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
 int lengjew = jewels.size();
    int lengsto = stones.size();
    int count = 0;

    for (int i = 0; i < lengjew; i++)
    {
        for (int j = 0; j < lengsto; j++)
        {
            if (jewels[i] == stones[j])
            {
                count++;
            }
            
        }
        
    }
    return count;
            }

int main(){
    string jewels = "aA";
    string stones = "aAAbbbb";

    int result = numJewelsInStones(jewels, stones);
    cout << "Number of stones that are jewels is: " << result;
    return 0;
}