#include <iostream>

using namespace std;

class wangyiliang
{
    public:
        double chang;
        double kuan;
        double gao;
        double getVolume(void);
        void setchang(double len);
        void setkuan(double bre);
        void setgao(double hight);

};

double wangyiliang::getVolume(void)
{
    return chang * kuan * gao ;
}

void wangyiliang::setchang(double len)
{
    chang = len;
}

void wangyiliang::setkuan(double bre)
{
    kuan = bre;
}

void wangyiliang::setgao(double hight)
{
    gao = hight;
}

int main()
{
    wangyiliang xiaoshuai;
    double volume;

    xiaoshuai.setchang(10.0);
    xiaoshuai.setkuan(2.3);
    xiaoshuai.setgao(9.3);
    volume = xiaoshuai.getVolume();
    cout<<volume<<endl;
    return 0 ;
}
