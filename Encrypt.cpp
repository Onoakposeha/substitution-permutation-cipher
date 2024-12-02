#include <string>
using namespace std;
// FUNCTION TO ENCRYPT A STRING
void Encrypt(string &word)
{
    for (int i = 0; i <= word.length() - 1; i++)
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
    return;
}

