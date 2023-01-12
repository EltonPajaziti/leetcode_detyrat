#include <iostream>
#include <vector>
using namespace std;
int finalValueAfterOperations(vector<string>& operations) {
	int X = 0;
	for (std::string operation : operations) {
		if (operation == "++X" || operation == "X++") {
			X++;
		}
		else if (operation == "--X" || operation == "X--") {
			X--;
		}
	}
	return X;
}

int main() {
	std::vector<std::string> operations = { "--X","X++","X++" };
	std::cout << finalValueAfterOperations(operations);
	return 0;
}