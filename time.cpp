#include<windows.h>
#include<iostream>
using namespace std;

int main()
{
    SYSTEMTIME SysTime;
    //SYSTIME SysTime;
    GetLocalTime(&SysTime);
    cout<<SysTime.wYear<<SysTime.wMonth<<SysTime.wDay<<SysTime.wHour<<SysTime.wMinute<<SysTime.wSecond<<SysTime.wMilliseconds<<endl;
    return 0;
}
