/* ## rectangle pattern ##

#include<iostream>
using namespace std;

int main(){

    int i,j;

    for( int i=1; i<=4;i++){
        for( int j=1; j<=5;j++){
            cout<<"*";
    }
    cout<<endl;

}
    return 0;

}
*/

/* ## hollow rectangle ## 
#include<iostream>
using namespace std;

int main(){

    int i,j;

    for( int i=1; i<=5;i++){
        for( int j=1; j<=4;j++){
            if (i==1 || i==5){
                cout<<"*";
            }
            else if(j==1 || j==4){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
    }
    cout<<endl;

}
    return 0;

}
*/

/* ## inverted half pyramid ##
#include<iostream>
using namespace std;

int main(){

    int i,j;

    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
    }

    cout<<endl;

}

return 0;
}
*/

//##reverse half triangle
// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j<=5-i){
//                 cout<<"  ";
//             }
//             else{

//             cout<<"* ";
//             }
//     }

//     cout<<endl;

// }

// return 0;
// }

//company pattern problem

#include <iostream>
using namespace std;

void Pattern(int n)
{
    int row = 5;

    for (int i = 1; i <= row; i++)
    {
        int num =i;
        for (int j = 0; j < i; j++)
        {
            cout << num << " ";
            num+=(row-j);
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;

    Pattern(n);

    return 0;
}

// #include <iostream>
// using namespace std;

// void printPattern(int n) {
//     int num = 1;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 0; j < i; j++) {
//             cout << num << " ";
//             num += (i-j); // increment num by i
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     printPattern(n);
//     return 0;
// }