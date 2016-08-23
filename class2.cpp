#include<iostream>

using namespace std;

class base
{
    public:
        double num1;
        void setnum1(double num);
        void setnum2(double num);
        double getnum1(void);
        double getnum2(void);

    private:
        double num2;

    protected:
        double num3;
};

void base::setnum1(double num)
{
    num1 = num;
}

void  base::setnum2(double num)
{
    num2 = num;
}

double base::getnum1(void)
{
    return num1;
}

double base::getnum2(void)
{
    return num2;
}

class top: public base
{
    public:
        void setnum3(double num);
        double getnum3(void);
};
double top::getnum3(void)
{
    return num3;
}
void top::setnum3(double num)
{
    num3 = num;
}

int main()
{
    base new_base;
    new_base.num1 =  5.0;    //public
    cout<<new_base.num1<<endl;
    new_base.setnum1(12.0);
    new_base.setnum2(10.0);//pravite
    cout<<new_base.num1*new_base.getnum2()<<endl;//prove

    top new_top;//protect
    new_top.setnum1(12.0);

    new_top.setnum3(14.0);
    double c = new_top.getnum3();
    cout<< new_top.num1*c<<endl;
    return 0;

}
