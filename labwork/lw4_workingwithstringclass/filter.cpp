#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {

    string sentence;
    string filter;

    cout << "Please enter the sentence: ";
    getline(cin, sentence);
    cout << "Please enter the filter word: ";
    cin >> filter;

    // int i; // iterator for sentence
    int found = sentence.find(filter); // location of the first item;

    
    if (sentence.find(filter) != string::npos) {
        sentence.replace(found, filter.length(), filter.length(), '#');
    }

    cout << "Filtered sentence: " << sentence << endl;

    return 0;
}