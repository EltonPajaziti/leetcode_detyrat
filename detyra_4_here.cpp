#include <iostream>
#include <vector>
#include<string>
using namespace std;
int mostWordsFound(vector<string>& sentences) {
	int length = sentences.size();
	int words = 0;
	int max = 0;
	for (int i = 0; i < length; i++)
	{
		words = 0;
		string fjalia = sentences[i];
		for (int j = 0; j < fjalia.size(); j++)
		{
			if (fjalia[j] == ' ')
			{
				words++;
			}
		}
		words += 1;
		if (max < words)
		{
			max = words;
		}

	}
	return max;
}

int main() {
	vector<string> sentences;
	sentences = { "alice and bob love leetcode", "i think so too", "this is great thanks very much" };
	int result = mostWordsFound(sentences);
	cout << "The greatest number of words is: " << result << endl;
	return 0;
}