#include <iostream>
#include <fstream>
#include <string>
#include "SwapPairs.cpp" // FUNCTION TO SWAP CONSECUTIVE PAIRS OF CHARACTERS
#include "Reverse.cpp" // FUNCTION TO REVERSE THE ORDER OF A STRING
#include "Encrypt.cpp" // FUNCTION TO ENCRYPT A STRING USING A SUBSTITUION CIPHER
#include "Decrypt.cpp" // FUNCTION TO DECRYPT A STRING USING A SUBSTITUION CIPHER

using namespace std;

/////////////////////////////////////////////////////////
///////////////// FUNCTION PROTTYPE DECLARATIONS ////////
/////////////////////////////////////////////////////////
// FUNCTION TO SWAP CONSECUTIVE PAIRS OF CHARACTERS
void SwapPairs(string &);

// FUNCTION TO REVERSE THE ORDER OF A STRING
void Reverse(string &);

// FUNCTION TO ENCRYPT A STRING USING A SUBSTITUION CIPHER
void Encrypt(string &);

// FUNCTION TO DECRYPT A STRING USING A SUBSTITUION CIPHER
void Decrypt(string &);

int main()
{
    string word;
    char mode;
    int setting;
    char delimiter;

    ofstream outfile{"cipher_out.txt"};
    ifstream infile{"cipher_in.txt"};

    // CHECK FILE STATUS
    if (!infile)
    {
        cerr << "Sorry, the input file, \"cipher_in.txt\", could not be found\n";
        cout << "Create the input file, \"cipher_in.txt\" and run the program again\n";
        return 1;
    }

    if (!outfile)
    {
        cerr << "Sorry, the output file, \"cipher_out.txt\", could not be found\n";
        cout << "Create the output file, \"cipher_out.txt\" and run the program again\n";
        return 1;
    }

    cout << "This program uses a sustitution Cipher together with some permuataion to encrypt text files\n";
    cout << "Create a file named \"cipher_in.txt\" and place the input text inside\n";
    cout << "NOTE: When Choosing a key, choose a large prime number \n\n";

    cout << "ENTER E TO ENCRYPT OR D TO DECRYPT: ";
    cin >> mode;
    cout << "INPUT KEY(NUMBER): ";
    cin >> setting;

    if ((mode == 'E') || (mode == 'e')) // Encrypt
    {
        do
        {
            infile >> word;
            delimiter = ' ';
            if (word.length() - 1 == 0 && word[0] == ';')
                delimiter = '\n'; // ; is the line terminator

            if (word.length() == 2) // length=2, simply swap
            {
                char temp = word[0];
                word[0] = word[1];
                word[1] = temp;
            }

            else if (word.length() >= 3) // length >= 3
            {
                SwapPairs(word);
                Reverse(word);
            }

            // encrypt all
            for (int j = 1; j <= setting; j++)
                Encrypt(word);
            outfile << word << delimiter;

        } while (!infile.eof());

        cout << "ENCRYPTION COMPLETE\n CHECK THE OUTPUT FILE, \"cipher_out.txt\"";
    }
    else if ((mode == 'D') || (mode == 'd')) // Decrypt
    {
        do
        {
            infile >> word;
            delimiter = ' ';
            if (word.length() == 1 && word[0] == ';')
                delimiter = '\n'; // ; is the line terminator
            // decrypt all
            for (int j = 1; j <= setting; j++)
                Decrypt(word);

            if (word.length() == 2) // length=2, simply swap
            {
                char temp = word[0];
                word[0] = word[1];
                word[1] = temp;
            }

            else if (word.length() >= 3) // length >= 3
            {
                Reverse(word);
                SwapPairs(word);
            }

            outfile << word << delimiter;
        } while (!(infile.eof()));
        cout << "DECRYPTION COMPLETE CHECK THE OUTPUT FILE, \"cipher_out.txt\"";
    }

    return 0;
}
