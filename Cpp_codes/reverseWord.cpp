#include <iostream>
using namespace std;

void reverseWord(char *a, char *t)
{
    char *end = a;

    // go to the end of word
    while(*end != 0) end++;

    end--; // find last character

    char *out = t;

    while(end >= a)
    {
        // skip spaces
        while(end >= a and *end == ' ') end--;

        if(end < a) break;

        char *wordEnd = end; // find the begining of word

        while(end >= a and *end != ' ') end--;

        char *wordStart = end + 1;
        while(wordStart <= wordEnd) // copy the complete word
        {
            *out = *wordStart;
            out++;
            wordStart++;
        }

        if(end >= a) // add one space between words
        {
            *out = ' ';
            out++;
        }
    }
    *out = 0;
}
int main(){
    int n = 100;
    // cin >> n;
    // cin.ignore();

    char *a = new char[n + 1];
    char *t = new char[n + 1];

    cin.getline(a, n + 1);
    reverseWord(a, t);

    cout << "\"\u001B[32m" << t << "\u001B[0m\"";

    delete[] a;
    delete[] t;

    return 0;
}