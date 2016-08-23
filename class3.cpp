#include<iostream>

using namespace std;

class Line
{
    public:
        void setLength(double len);
        double getLength(void);
        Line();

    private:
        double length;
};

Line::Line(void)
{
    cout<<"A line is being created"<<endl;
}

void Line::setLength(double len)
{
    length = len;
}

double Line::getLength(void)
{
    return length;
}

int main()
{
    Line line1;

    line1.setLength(24.0);
    cout<<line1.getLength()<<endl;
    return 0;
}
