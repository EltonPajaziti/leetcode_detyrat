#include <iostream>
#include <vector>
#include<string>
using namespace std;
string toLowerCase(string s) {
	int length = s.size();
	string result = "";
	for (int i = 0; i < length; i++) {
		result += tolower(s[i]);
	}
	return result;
}
int main() {
	string s = "LoveLY";
	string result = toLowerCase(s);
	cout << result;
	return 0;
}