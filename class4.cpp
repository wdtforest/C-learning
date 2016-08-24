/*
�������캯����һ������Ĺ��캯�������ڴ�������ʱ����ʹ��ͬһ����֮ǰ�����Ķ�������ʼ���´����Ķ��󡣿������캯��ͨ�����ڣ�
ͨ��ʹ����һ��ͬ���͵Ķ�������ʼ���´����Ķ���
���ƶ��������Ϊ�������ݸ�������
���ƶ��󣬲��Ӻ��������������
���������û�ж��忽�����캯���������������ж���һ������������ָ����������ж�̬�ڴ���䣬����������һ���������캯����
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

