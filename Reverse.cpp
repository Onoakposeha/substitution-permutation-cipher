#include <string>
using namespace std;

// FUNCTION TO REVERSE THE ORDER OF A STRING
void Reverse(string &word)
{
    for (int i = 0; i <= (word.length()-1) / 2; i++)
    {
        char temp = word[i];
        word[i] = word[word.length()-1 - i];
        word[word.length()-1 - i] = temp;
    }
    return;
}
