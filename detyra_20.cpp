#include <iostream>
#include <string>
#include <vector>

using namespace std;

int prefixCount(vector<string>& words, string pref) {
    int count = 0;
    for (int i = 0; i < words.size(); i++)
    {
        string word = words[i];
        int length = pref.size();
        if (word.substr(0, length) == pref)
        {
            count++;
        }
        
    }
    return count;
        }

int main(){
    vector<string> words;
    words = {"leetcode","win","loops","success"};
    string pref = "code";

    int result = prefixCount(words, pref);
    cout << "Count: " << result << endl;
    return 0;
}