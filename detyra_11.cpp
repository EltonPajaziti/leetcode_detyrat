#include <iostream>
#include <vector>
#include<string>
using namespace std;
string defangIPaddr(string address) {
	string defangedAddress = "";
	for (int i = 0; i < address.length(); i++) {
		if (address[i] == '.') {
			defangedAddress += "[.]";
		}
		else {
			defangedAddress += address[i];
		}
	}
	return defangedAddress;
}

int main() {
	string address = "1.1.1.1";
	string defangedAddress = defangIPaddr(address);
	cout << defangedAddress << endl;
	return 0;
}