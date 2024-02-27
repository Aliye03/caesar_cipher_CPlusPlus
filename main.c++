#include <iostream>
#include <string>
using namespace std;
int shift;
int k = shift - 3;
string encrypt(string a){
    string encrypted_string;
    cout << "Enter your message: ";
    getline(cin, a);
    cout << "Enter the shift paramater: ";
    cin >> shift;
    for (char i : a){
        i += shift;
        encrypted_string += i;
    }
    return encrypted_string;
}
string decrypt(string a){
    string decrypted_string;
    k = shift - 3;
    cout << "Enter your meesage: ";
    getline(cin, a);
    cout << "Enter the shift paramater: ";
    cin >> shift;
    for (char i : a)
    {   
        i -= shift;
        decrypted_string += i;
    }
    return decrypted_string;
}
// Main function
int main(){
    string logo = R"(  ____                              ____ _       _               
 / ___|__ _  ___  ___  __ _ _ __   / ___(_)_ __ | |__   ___ _ __ 
| |   / _` |/ _ \/ __|/ _` | '__| | |   | | '_ \| '_ \ / _ \ '__|
| |__| (_| |  __/\__ \ (_| | |    | |___| | |_) | | | |  __/ |   
 \____\__,_|\___||___/\__,_|_|     \____|_| .__/|_| |_|\___|_|   
                                          |_|                    )";
    cout << logo << endl;
    string message;
    string choice1;
    cout << "Type 'encode' to encrypt your message or 'decode' to decrypt your message: ";
    cin >> choice1;
    getchar();
    bool play;
    if (choice1 == "encode"){
        message = encrypt(message);
        cout << "Your encrypted message is: " << message << endl;
    }
    else if(choice1 == "decode"){
        message = decrypt(message);
        cout << "Your decrypted message is: " << message << endl;
    }
    cout << "Type '1' to continue or '0' to quit: ";
    cin >> play;
    while (play){
        cout << "Type 'encode' to encrypt your message or 'decode' to decrypt your message: ";
        cin >> choice1;
        getchar();
        if (choice1 == "encode"){
            message = encrypt(message);
            cout << "Your encrypted message is: " << message << endl;
        }
        else if(choice1 == "decode"){
            message = decrypt(message);
            cout << "Your decrypted message is: " << message << endl;
        }
        cout << "Type '1' to continue or '0' to quit: ";
        cin >> play;
    }
    cout << "Goodbye!" << endl;
    return 0;
}