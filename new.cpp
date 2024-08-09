#include <iostream>
using namespace std;
int main(){
    float value_first = 0;
    float value_second = 0;
    float value = 0;
    cout << "Pick one number please"<<endl;
    cout << " 1 for addition " <<endl;
    cout << " 2 for subtraction "<<endl;
    cout << " 3 for multiplication "<<endl;
    cout << " 4 for division "<<endl;
    cout << " enter = ";
    cin >> value;
    if(value == 1){
         cout << "enter the first number for addition = ";
    cin >> value_first;
    cout << "enter the secound number = ";
    cin >> value_second;
    float ans = value_first + value_second;
    cout << "ans is = " << ans;
    }
    else if(value == 2){
         cout << "enter the first number for subtraction = ";
    cin >> value_first;
    cout << "enter the secound number = ";
    cin >> value_second;
    float ans = value_first - value_second;
    cout << "ans is = " << ans;
    }
    else if(value == 3){
         cout << "enter the first number for multiplication = ";
    cin >> value_first;
    cout << "enter the secound number = ";
    cin >> value_second;
    float ans = value_first * value_second;
    cout << "ans is = " << ans;
    }
    else if(value == 4){
         cout << "enter the first number for division = ";
    cin >> value_first;
    cout << "enter the secound number = ";
    cin >> value_second;
    float ans = value_first / value_second;
    cout << "ans is = " << ans;
    }
    else {
     cout << "you are so wrong bro";
    }
    return 0;
}