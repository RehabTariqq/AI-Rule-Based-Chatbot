#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "Hello! I am Reva, your rule-based AI chatbot." << endl;

    string userInput;

    cout << "You: ";
    getline(cin, userInput);

    cout << "You said: " << userInput << endl;

    return 0;
}