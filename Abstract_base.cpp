#include <iostream>
using namespace std;
class shape
{
protected:
    int width;
    int height;

public:
    virtual int getarea() = 0;
    void setwidth(int w)
    {
        width = w;
    }
    void setheight(int h)
    {
        height = h;
    }
};
class rectangle : public shape
{
public:
    int getarea()
    {
        return (width * height);
    }
};
class triangle : public shape
{
public:
    int getarea()
    {
        return (width * height) / 2;
    }
};
int main()
{
    rectangle Rect;
    triangle trg;
    Rect.setwidth(5);
    Rect.setheight(10);
    cout<<"Rectangle area "<<Rect.getarea()<<endl;
    trg.setwidth(5);
    trg.setheight(10);
    cout<<"Triangle area "<<trg.getarea()<<endl;
    return 0;
}