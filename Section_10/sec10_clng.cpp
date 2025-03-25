// A simple and very old method of sending secret messages is the substitution cipher.

// Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
// For example, every 'a' get replaced with an X, and every 'b' gets replaced with a Z, etc.

// Write a program thats ask a user to enter a secret message.
// Encrypt this message using the substitution cipher and display the encrypted message Then decryped the encrypted message back to the original message.

// You may use the 2 strings below for your subsitition
// For example, to encrypt you can replace the character at position n in alphabet
// with the character at position n in key

// To decrypt you can replace the character at position n in key
// with the character at position n in alphabet

// solution 1 -
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"MNBVCXZLKJHGFDSAPOIUYTREWQmnbvcxzlkjhgfdsapoiuytrewq"};

    string secret_msg{};
    cout << "enter your secret message : ";
    getline(cin, secret_msg);

    string encrypted_msg = secret_msg;

    cout << "Encrypting message..." << endl;

    for (size_t i{0}; i < secret_msg.length(); ++i)
    {
        char letter{};
        letter = secret_msg[i];

        size_t letter_position = alphabet.find(letter);

        if (letter_position != string::npos)
        {
            encrypted_msg[i] = key[letter_position];
        }
    }

    cout << "Encrypted message : " << encrypted_msg << endl;

    // decryption
    string decrypted_msg = encrypted_msg;

    cout << "Decrypting message ..." << endl;

    for (size_t i{0}; i < encrypted_msg.length(); ++i)
    {
        char letter;
        {
        }
        letter = encrypted_msg[i];

        size_t letter_position = key.find(letter);

        if (letter_position != string::npos)
        {
            decrypted_msg[i] = alphabet[letter_position];
        }
    }
    cout << "Decrypted message : " << decrypted_msg << endl;

    return 0;
}

// // another solution using for range loop :
// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
//     string key{"MNBVCXZLKJHGFDSAPOIUYTREWQmnbvcxzlkjhgfdsapoiuytrewq"};

//     string secret_msg{};
//     cout << "Enter your secret message: ";
//     getline(cin, secret_msg);

//     string encrypted_msg{};

//     // Encryption
//     for (char letter : secret_msg) {
//         size_t position = alphabet.find(letter);
//         if (position != string::npos) { // If character is found in alphabet
//             encrypted_msg += key[position]; // Replace with corresponding key character
//         } else {
//             encrypted_msg += letter; // Keep the character unchanged (e.g., spaces, punctuation)
//         }
//     }

//     cout << "Encrypted message: " << encrypted_msg << endl;

//     // Decryption
//     string decrypted_msg{};
//     for (char letter : encrypted_msg) {
//         size_t position = key.find(letter);
//         if (position != string::npos) {
//             decrypted_msg += alphabet[position]; // Replace with original character
//         } else {
//             decrypted_msg += letter;
//         }
//     }

//     cout << "Decrypted message: " << decrypted_msg << endl;

//     return 0;
// }
