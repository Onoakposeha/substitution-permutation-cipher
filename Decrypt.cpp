#include <string>
using namespace std;
// FUNCTION TO DECRYPT A STRING
void Decrypt(string &word)
{
    for (int i = 0; i <= word.length() - 1; i++)
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
    return;
}
