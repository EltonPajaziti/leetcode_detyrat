#include <iostream>
#include <vector>
#include<string>
using namespace std;
int percentageLetter(string s, char letter) {
	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == letter)
			count++;
	}
	int percentage = count * 100 / s.length();
	return percentage;
}
int main() {
    string s = "foobar";
    char letter = 'o';
    int percentage = percentageLetter(s, letter);
    cout << "The percentage of characters in s that equal the letter '" << letter << "' is " << percentage << "%" << std::endl;
    return 0;
}