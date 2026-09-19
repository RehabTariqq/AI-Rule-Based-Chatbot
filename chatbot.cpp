#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "Hello! I am Reva, your rule-based AI chatbot." << endl;

    string userInput;

    cout << "You: ";
    getline(cin, userInput);

    if (userInput == "hello") {
        cout << "Reva: Hello! Nice to meet you." << endl;
    }

    return 0;
}