#include <iostream>
#include <fstream>

using namespace std;

// FUNCTION TO SWAP CONSECUTIVE PAIRS OF CHARACTERS
void SwapPairs(string &word);

// FUNCTION TO REVERSE THE ORDER OF A STRING
void Reverse(string &word);

// FUNCTION TO ENCRYPT A STRING USING A SUBSTITUION CIPHER
void Encrypt(string &word);

// FUNCTION TO DECRYPT A STRING USING A SUBSTITUION CIPHER
void Decrypt(string &word);


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
        cout<<"Create the input file, \"cipher_in.txt\" and run the program again\n";
        return 1;
    }

    if (!outfile)
    {
        cerr << "Sorry, the output file, \"cipher_out.txt\", could not be found\n";
        cout<<"Create the output file, \"cipher_out.txt\" and run the program again\n";
        return 1;
    }

    cout<<"This program uses a sustitution Cipher together with some permuataion to encrypt text files\n";
    cout<<"Create a file named \"cipher_in.txt\" and place the input text inside\n";
    cout<<"NOTE: When Choosing a key, choose a large prime number \n\n";

    cout << "ENTER E TO ENCRYPT OR D TO DECRYPT: ";
    cin >> mode;
    cout << "INPUT KEY(NUMBER): ";
    cin >> setting;

    if ((mode=='E') || (mode=='e')) // Encrypt
    {
        do
        {
            infile >> word;
            delimiter=' ';
            if (word.length()-1 == 0 && word[0] == ';')
                delimiter='\n'; // ; is the line terminator

            if (word.length()== 2) // length=2, simply swap
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
            outfile << word <<delimiter;

        } while (!infile.eof());

        cout<<"ENCRYPTION COMPLETE\n CHECK THE OUTPUT FILE, \"cipher_out.txt\"";
    }
    else if ((mode=='D') || (mode=='d')) // Decrypt
    {
        do
        {
            infile >> word;
            delimiter=' ';
            if (word.length() == 1 && word[0] == ';')
                delimiter='\n'; // ; is the line terminator
            // decrypt all
            for (int j=1;j<=setting;j++)  Decrypt(word);

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

            outfile << word <<delimiter;
        } while (!(infile.eof()));
         cout<<"DECRYPTION COMPLETE CHECK THE OUTPUT FILE, \"cipher_out.txt\"";
    }
    
    return 0;
}
/////////////////////////////////////////////////////////
///////////////// FUNCTION DECLARATIONS /////////////////
/////////////////////////////////////////////////////////



// FUNCTION TO SWAP CONSECUTIVE PAIRS OF CHARACTERS
void SwapPairs(string &word)
{
    for (int i = 0; i <= word.length()-3; i += 2)
    {
        char temp = word[i];
        word[i] = word[i + 1];
        word[i + 1] = temp;
    }
}


// FUNCTION TO REVERSE THE ORDER OF A STRING
void Reverse(string &word)
{
    for (int i = 0; i <= (word.length()-1) / 2; i++)
    {
        char temp = word[i];
        word[i] = word[word.length()-1 - i];
        word[word.length()-1 - i] = temp;
    }
}

// FUNCTION TO ENCRYPT A STRING
void Encrypt(string &word)
{
    for (int i = 0; i <= word.length()-1; i++)
    {
        switch (word[i])
        {
        case 'A':
        case 'a':
            word[i] = 'k';
            break;
        case 'B':
        case 'b':
            word[i] = 'y';
            break;
        case 'C':
        case 'c':
            word[i] = 'l';
            break;
        case 'D':
        case 'd':
            word[i] = 'p';
            break;
        case 'E':
        case 'e':
            word[i] = 's';
            break;
        case 'F':
        case 'f':
            word[i] = 'r';
            break;
        case 'G':
        case 'g':
            word[i] = 'v';
            break;
        case 'H':
        case 'h':
            word[i] = 'a';
            break;
        case 'I':
        case 'i':
            word[i] = 'u';
            break;
        case 'J':
        case 'j':
            word[i] = 'b';
            break;
        case 'K':
        case 'k':
            word[i] = 't';
            break;
        case 'L':
        case 'l':
            word[i] = 'd';
            break;
        case 'M':
        case 'm':
            word[i] = 'x';
            break;
        case 'N':
        case 'n':
            word[i] = 'g';
            break;
        case 'O':
        case 'o':
            word[i] = 'c';
            break;
        case 'P':
        case 'p':
            word[i] = 'z';
            break;
        case 'Q':
        case 'q':
            word[i] = 'i';
            break;
        case 'R':
        case 'r':
            word[i] = 'w';
            break;
        case 'S':
        case 's':
            word[i] = 'o';
            break;
        case 'T':
        case 't':
            word[i] = 'm';
            break;
        case 'U':
        case 'u':
            word[i] = 'e';
            break;
        case 'V':
        case 'v':
            word[i] = 'j';
            break;
        case 'W':
        case 'w':
            word[i] = 'h';
            break;
        case 'X':
        case 'x':
            word[i] = 'f';
            break;
        case 'Y':
        case 'y':
            word[i] = 'n';
            break;
        case 'Z':
        case 'z':
            word[i] = 'q';
            break;
        // ENCRYPTING THE DIGITS
        case '0':
            word[i] = '7';
            break;
        case '1':
            word[i] = '5';
            break;
        case '2':
            word[i] = '6';
            break;
        case '3':
            word[i] = '8';
            break;
        case '4':
            word[i] = '9';
            break;
        case '5':
            word[i] = '4';
            break;
        case '6':
            word[i] = '3';
            break;
        case '7':
            word[i] = '2';
            break;
        case '8':
            word[i] = '0';
            break;
        case '9':
            word[i] = '1';
            break;
        }
    }
}


// FUNCTION TO DECRYPT A STRING
void Decrypt(string &word)
{
    for (int i = 0; i <= word.length()-1; i++)
    {
        switch (word[i])
        {
        case 'K':
        case 'k':
            word[i] = 'a';
            break;
        case 'Y':
        case 'y':
            word[i] = 'b';
            break;
        case 'L':
        case 'l':
            word[i] = 'c';
            break;
        case 'P':
        case 'p':
            word[i] = 'd';
            break;
        case 'S':
        case 's':
            word[i] = 'e';
            break;
        case 'R':
        case 'r':
            word[i] = 'f';
            break;
        case 'V':
        case 'v':
            word[i] = 'g';
            break;
        case 'A':
        case 'a':
            word[i] = 'h';
            break;
        case 'U':
        case 'u':
            word[i] = 'i';
            break;
        case 'B':
        case 'b':
            word[i] = 'j';
            break;
        case 'T':
        case 't':
            word[i] = 'k';
            break;
        case 'D':
        case 'd':
            word[i] = 'l';
            break;
        case 'X':
        case 'x':
            word[i] = 'm';
            break;
        case 'G':
        case 'g':
            word[i] = 'n';
            break;
        case 'C':
        case 'c':
            word[i] = 'o';
            break;
        case 'Z':
        case 'z':
            word[i] = 'p';
            break;
        case 'I':
        case 'i':
            word[i] = 'q';
            break;
        case 'W':
        case 'w':
            word[i] = 'r';
            break;
        case 'O':
        case 'o':
            word[i] = 's';
            break;
        case 'M':
        case 'm':
            word[i] = 't';
            break;
        case 'E':
        case 'e':
            word[i] = 'u';
            break;
        case 'J':
        case 'j':
            word[i] = 'v';
            break;
        case 'H':
        case 'h':
            word[i] = 'w';
            break;
        case 'F':
        case 'f':
            word[i] = 'x';
            break;
        case 'N':
        case 'n':
            word[i] = 'y';
            break;
        case 'Q':
        case 'q':
            word[i] = 'z';
            break;
        // DECRYPTING THE DIGITS
        case '7':
            word[i] = '0';
            break;
        case '5':
            word[i] = '1';
            break;
        case '6':
            word[i] = '2';
            break;
        case '8':
            word[i] = '3';
            break;
        case '9':
            word[i] = '4';
            break;
        case '4':
            word[i] = '5';
            break;
        case '3':
            word[i] = '6';
            break;
        case '2':
            word[i] = '7';
            break;
        case '0':
            word[i] = '8';
            break;
        case '1':
            word[i] = '9';
            break;
        }
    }
}



