#include <bits/stdc++.h>

using namespace std;

class Coordinate
{
public:
    Coordinate()
    {
        x=0;
        y=0;
    }
    Coordinate(int X, int Y)
    {
        x=X;
        y=Y;
    }
    Coordinate(Coordinate &other)
    {
        x=other.x;
        y=other.y;
    }

    void setX(int val)
    {
        x=val;
    }
    void setY(int val)
    {
        y=val;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    void showCoordInfo()
    {
        cout<<"("<<x<<", "<<y<<")"<<endl;
    }

private:
  int x, y;
};




int main(void)
{
    return 0;
}
