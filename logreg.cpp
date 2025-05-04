#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void registerUser() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ofstream file;
    file.open(username + ".txt");
    file << username << endl;
    file << password << endl;
    file.close();

    cout << "Registration successful!\n";
}


void loginUser() {
    string username, password, fileUser, filePass;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream file(username + ".txt");
    if (file.is_open()) {
        getline(file, fileUser);
        getline(file, filePass);
        file.close();

        if (username == fileUser && password == filePass) {
            cout << "Login successful!\n";
        } else {
            cout << "Invalid username or password.\n";
        }
    } else {
        cout << "User not found.\n";
    }
}

int main() {
    int choice;

    cout << "1. Register\n2. Login\nChoose an option: ";
    cin >> choice;

    if (choice == 1) {
        registerUser();
    } else if (choice == 2) {
        loginUser();
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}