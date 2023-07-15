#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Gib deinen Namen ein: ";
    cin >> name;
    int long_name = name.length();
    cout << long_name << endl;
   
  // Oberer Teil des Dreiecks
    for (int i = 0; i < long_name; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Unterer Teil des Dreiecks
    for (int i = long_name - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
} 
