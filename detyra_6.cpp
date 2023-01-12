#include <iostream>
#include <vector>
#include<string>
using namespace std;
int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
	int count = 0;
	int rows = items.size();
	int columns = items[0].size();

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (ruleKey == "type" && ruleValue == items[i][0])
			{
				count++;
				break;
			}
			else if (ruleKey == "color" && ruleValue == items[i][1]) {
				count++;
				break;
			}
			else if (ruleKey == "name" && ruleValue == items[i][2]) {
				count++;
				break;
			}

		}

	}
	return count;
}

int main() {

	vector<vector<string>> items;
	string ruleKey = "type";
	string ruleValue = "phone";
	items = { {"phone","blue","pixel"},{"computer","silver","phone"},{"phone","gold","iphone"} };
	int result = countMatches(items, ruleKey, ruleValue);
	cout << result;
	return 0;
}