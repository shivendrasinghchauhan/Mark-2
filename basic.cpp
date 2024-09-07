#include <iostream>
using namespace std;
int main()
{
    int year = 0;
    cout << "Enter your birth year";
    cin >> year;
    int sign = year % 12;
    
    switch(sign){
        case 1:
        cout << "you are dog";
        break;
        default:
        cout << "sorry";
    }
    return 0;
}
