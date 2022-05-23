#include <bits/stdc++.h>

using namespace std;
/*
class Convert : public string
{
public:
    int toInt()
    {

    }
    bool isNumber()
    {
        int dots;
        for(int i=0; i < this->length(); i++)
        {
            if(!(this->at(i)>='0' && this->at(i)<=9)||!(this->at(i)=='.'));
        }
        return true;
    }
private:
};
*/
int main(void)
{
    string probNum = "-4.51luis";
    float x = stof(probNum);
    int y = stoi(probNum);
    cout<< x << endl;
    cout<< y << endl;
    cout<< probNum.at(1);
    return 0;
}
