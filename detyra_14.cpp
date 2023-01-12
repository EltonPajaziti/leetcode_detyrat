#include <iostream>
#include <vector>
#include<string>
using namespace std;
void reverseString(vector<char>& s) {
	int length = s.size();
	char temp;
	for (int i = 0, j = (length - 1); i < j; i++, j--)
	{
		swap(s[i], s[j]);

	}
	cout << "{\"";
	for (int i = 0; i < length; i++)
	{
		string lidhesa = (i == length - 1) ? "\"}" : "\",\"";
		cout << s[i] << lidhesa;
	}


}

int main() {
	vector<char> s;
	s = { 'h', 'e', 'l', 'l', 'o' };
	reverseString(s);
	return 0;
}