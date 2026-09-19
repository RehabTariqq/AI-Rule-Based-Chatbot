#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "============================================" << endl;
    cout << "          REVA - AI CHATBOT" << endl;
    cout << "============================================" << endl;
    cout << "Hello! I'm Reva, a rule-based AI chatbot." << endl;
    cout << "Type 'help' to see what I can do." << endl;
    cout << "Type 'bye', 'exit', or 'quit' to end the chat." << endl;
    cout << "--------------------------------------------" << endl;

    while (true) {

        string userInput;

        cout << "You: ";
        getline(cin, userInput);

        if (userInput == "bye" ||
            userInput == "exit" ||
            userInput == "quit") {

            cout << "Reva: Goodbye! Have a great day!" << endl;
            break;
        }

        else if (userInput == "hello" ||
                 userInput == "hi" ||
                 userInput == "hey") {

            cout << "Reva: Hello! Nice to meet you." << endl;
        }

        else if (userInput == "how are you") {

            cout << "Reva: I'm doing great! Thanks for asking." << endl;
        }

        else if (userInput == "what is your name" ||
                 userInput == "what's your name") {

            cout << "Reva: My name is Reva." << endl;
        }

        else if (userInput == "what can you do" ||
                 userInput == "help") {

            cout << "Reva: I can respond to predefined messages using simple rules." << endl;
            cout << "Reva: You can greet me, ask my name, or ask what I can do." << endl;
        }

        else if (userInput == "who created you" ||
                 userInput == "who made you") {

            cout << "Reva: I was created as a rule-based AI chatbot project." << endl;
        }

        else if (userInput == "thanks" ||
                 userInput == "thank you") {

            cout << "Reva: You're welcome!" << endl;
        }

        else {

            cout << "Reva: Sorry, I don't understand that yet." << endl;
        }
    }

    return 0;
}