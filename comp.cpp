
#include "iostream"
#include "comparator.cpp"
using namespace std;

int main()
{
    add(4, 3);
    cout << "C++ Compiler Version : " << __cplusplus;
    cout << "\nDate : " << __DATE__;
    cout << "\nTime : " << __TIME__;
    cout << "\nFile Name : " << __FILE__;
    cout << "\nLine Number : " << __LINE__;
    cout << "\nSTDC : " << __STDC__;
    cout << "\nSTDC_HOSTED : " << __STDC_HOSTED__;
    return 0;
}
