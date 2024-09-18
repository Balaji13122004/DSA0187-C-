#include <iostream>
#include <string>
using namespace std;

// Function to check if the two usernames are the same
bool isValidUsername(const string& username1, const string& username2) {
    return username1 == username2;
}

int main() {
    string username1, username2;
    
    // Sample Input
    cout << "Enter the user name: ";
    cin >> username1;
    
    cout << "Reenter the user name: ";
    cin >> username2;
    
    // Validate the usernames
    if (isValidUsername(username1, username2)) {
        cout << "User name is Valid" << endl;
    } else {
        cout << "User name is Invalid" << endl;
    }

    return 0;
}

