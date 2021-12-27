#include <iostream>
#include <string>
#include <cstring>
#define CMDS 5
#define TOKENS 4
#define MAXWORDS 20
using namespace std;
int main()
{
    int cl[CMDS];
    memset(cl, 0, sizeof(cl));
    string tokens[TOKENS] = {"[N]", "[AV]", "[V]", "[AJ]"};
    string cmds[CMDS] = {"NOUNS", "ADVERBS", "VERBS", "ADJECTIVES", "END"};
    string sentence, str;
    getline(cin, sentence);

    char *lists[CMDS][MAXWORDS];
    while (true)
    {
        int j = 0;
        int i = 0;
        string input;
        cin >> input;
        if (input == "END")
            break;
        if (input == cmds[i])
        {
            i++, j = 0;
            continue;
        }
        lists[i][j] = new char[input.length()];
        input.copy(lists[i][j], sizeof(input));
        cl[i]++, j++;
    }
    int index;
    memset(cl, 0, sizeof(cl));
    for (int count = 0; count < 2; count++)
    {
        string outstr = sentence;
        for (int i = 0; i < TOKENS; i++)
        {
            while ((unsigned int)(index = outstr.find(tokens[i], 0)) != string::npos)
            {
                outstr.replace(index, tokens[i].length(), lists[i][cl[i]]);
                cl[i]++;
            }
        }
        cout << outstr << endl;
    }
    return 0;
}