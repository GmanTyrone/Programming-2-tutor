#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string word;
    getline(cin,word);
    for(int i=word.length()-2;i>=0;i--)
        cout<<word[i];
    return 0;
}
