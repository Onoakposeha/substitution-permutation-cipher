#include <string>
using namespace std;
// FUNCTION TO SWAP CONSECUTIVE PAIRS OF CHARACTERS
void SwapPairs(string &word)
{
    for (int i = 0; i <= word.length()-3; i += 2)
    {
        char temp = word[i];
        word[i] = word[i + 1];
        word[i + 1] = temp;
    }
    return;
}
