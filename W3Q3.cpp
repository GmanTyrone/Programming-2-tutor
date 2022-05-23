#include <bits/stdc++.h>

using namespace std;

class Player
{
public:
    Player()
    {
        number=0;
        name="";
    }
    Player(int x, string test)
    {
        if(x<=0||x>=5)
            cerr<<"out of range\n";
        else
            number=x;
        for(int i=0;i<test.length();i++)
        if(!(test[i]>='A'&&test[i]<='Z')||!(test[i]>='a'&&test[i]<='z')||test.length()>=20){
            cerr<<"your name is illegal\n";
        }
        else
            name=test;
    }
    int getPlayerNum()
    {
        return number;
    }
    string getPlayerName()
    {
        return name;
    }
    bool setPlayerNum(int x)
    {
        if(x<=0||x>=5) return false;
        number=x;
        return true;
    }
    bool setPlayerName(string test)
    {
        for(int i=0;i<test.length();i++)
        if(!(test[i]>='A'&&test[i]<='Z')||!(test[i]>='a'&&test[i]<='z')||test.length()>=20) return false;
        name=test;
        return true;
    }

private:
    int number;
    string name;
};

int main(void)
{
    return 0;
}
