#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool Compare(string wordA, string wordB)
{
    if (wordA.length() == wordB.length())
        return wordA < wordB;
    return wordA.length() < wordB.length();
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int N;
    cin >> N;

    vector<string> words;
    for (int i = 0; i < N; i++)
    {
        string temp;
        cin >> temp;
        if (find(words.begin(), words.end(), temp) == words.end())
            words.push_back(temp);
    }

    sort(words.begin(), words.end(), Compare);

    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i] << '\n';
    }
    return 0;
}