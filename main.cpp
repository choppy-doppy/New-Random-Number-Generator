#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string>

using namespace std;

void placeholderFunc();

int main() {
    cout << "type a number to generate a random number between 1 and your number" << endl;
    srand(GetTickCount());
    placeholderFunc();
}

void placeholderFunc() {

    for ( ; ; ) {
        string userInput;
        cin >> userInput;
        if (userInput == "exit")
            exit(2);
        cout << userInput << endl;
    }

}


