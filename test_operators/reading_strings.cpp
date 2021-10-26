#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first, second;
    cout << "enter two words: \n";
    cin >> first >> second;

    cout << "first word: " << first << endl;
    cout << "second word: " << second << endl;

    // must use this, there is a trailing '\n' in the stream input
    // cin.ignore();

    string line;
    cout << "enter a line:";
    getline(cin, line, '&');

    cout << line << endl;
}
