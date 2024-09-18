#include<iostream>
using namespace std;

int main(){

    int savings;
    cin>>savings;

    if (savings>500) {
        if (savings>1000){
            cout<<"road trip\n";
        }
        else
        {
            cout<<"cafe\n";
        }
    }
    else if (savings>200)
    {
        cout<<"Rashmi\n";
    }
    else
    {
        cout<<"friends\n";
    }
    return 0;
}
// #include<iostream>
// using namespace std;

// int main(){

//     int num1 = 10;
//     int num2 = 20;
//     int sum =num1+num2;
//     cout<<sum;
//     return 0;
// }