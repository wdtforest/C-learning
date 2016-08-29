#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    char data[100];

    ofstream outfile;
    outfile.open("outfile.dat");

    cout<<"write file"<<endl;
    cout<<"Enter something:";
    cin.getline(data,100);
    outfile<<data<<endl;
    cout<<"ignore";
    cin>>data;
    cin.ignore();
    outfile<<data<<endl;

    outfile<<"game over"<<endl;
    return 0;
}
