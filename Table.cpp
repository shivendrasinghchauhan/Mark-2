#include <iostream>
using namespace std;
int main ()
{
    int table = 0;
    cout << "Enter the number =";
    cin >> table;
    for (int i = 1; i <= 10 ; i++){
        int out = table * i;
        cout<<table<<"*"<<i<<"="<<out<<endl;
    }
}
