/*
拷贝构造函数是一种特殊的构造函数，它在创建对象时，是使用同一类中之前创建的对象来初始化新创建的对象。拷贝构造函数通常用于：
通过使用另一个同类型的对象来初始化新创建的对象。
复制对象把它作为参数传递给函数。
复制对象，并从函数返回这个对象。
如果在类中没有定义拷贝构造函数，编译器会自行定义一个。如果类带有指针变量，并有动态内存分配，则它必须有一个拷贝构造函数。
*/
#include<iostream>

using namespace std;

class Line
{
    public:
        int getLength(void);
        void setLength(int len);
        Line(int len);
        Line(const Line &obj);
        ~Line();
    private:
        int *ptr;
};

void Line::setLength(int len)
{
    *ptr = len;
}

Line::Line(int len)
{
    cout<<"this is a line"<<endl;
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj)
{
    cout<<"copy this line"<<endl;
    ptr = new int;
    *ptr = *obj.ptr;
}

Line::~Line(void)
{
    cout<<"erase this line"<<endl;
    delete ptr;
}

int Line::getLength(void)
{
    return *ptr;
}

void display(Line obj)
{
    cout<<obj.getLength()<<endl;
    obj.setLength(9);
    cout<<obj.getLength()<<endl;
}

int main()
{
    Line line(10);//line
    cout<<1<<endl;
    display(line);//copy line,erase copy line
    cout<<2<<endl;
    Line line2 = line;//copy line
    cout<<'t'<<endl;
    cout<<line2.getLength()<<endl;
    cout<<3<<endl;
    display(line2);//
    cout<<4<<endl;

    return 0;
}

