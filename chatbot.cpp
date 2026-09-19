#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "Hello! I am Reva, your rule-based AI chatbot." << endl;

    string userInput;

    cout << "You: ";
    getline(cin, userInput);

    if (userInput == "hello" || userInput == "hi" || userInput == "hey") {
        cout << "Reva: Hello! Nice to meet you." << endl;
    }

    else if (userInput == "how are you") {
        cout << "Reva: I'm doing great! Thanks for asking." << endl;
    }

    else if (userInput == "what is your name") {
        cout << "Reva: My name is Reva." << endl;
    }

    else if (userInput == "what can you do") {
        cout << "Reva: I can respond to predefined messages using simple rules." << endl;
    }

    else {
        cout << "Reva: Sorry, I don't understand that yet." << endl;
    }

    return 0;
}