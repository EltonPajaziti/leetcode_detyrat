#include <iostream>
#include <vector>
#include<string>
using namespace std;
bool checkIfPangram(string sentence) {
	int letters[26] = { 0 };
	int index = 0;
	for (int i = 0; i < sentence.length(); i++)
	{
		index = sentence[i] - 'a';
		letters[index]++;
	}

	for (int j = 0; j < 26; j++)
	{
		if (letters[j] == 0)
			return false;
	}
	return true;
}
int main()
{
    string sentence="thequickbrownfoxjumpsoverthelazydog";
     bool checkIfPangram(string sentence="thequickbrownfoxjumpsoverthelazydog");
     cout<<checkIfPangram;
}