// #include<iostream>
// #include <math.h>
// using namespace std;

// bool isPrime(int num){
//     for (int i = 2; i <=sqrt(num); i++)
//     {
//         if(num%i==0){
//             return false;
//             }
//     }
    
//     return true;

// }


// int main(){

//     int a,b;
//     cin>>a>>b;
//     for (int  i = a; i < b; i++)
//     {
//         if(isPrime(i)){
//             cout<<i<<endl;
//         }
//     }
//     return 0;

    
// }

// ## function fibonacci
// #include<iostream>
// using namespace std;

// void fib(int n){
//     int t1=0;
//     int t2=1;
//     int nextTerm = t1+t2;

//     for (int  i = 0; i <= n; i++)
//     {
//         cout<<t1<<endl;
//         nextTerm=t1+t2;
//         t1=t2;
//         t2=nextTerm;

//     }
//         return;
    
// }

// int main(){

//     int n;
//     cin>>n;

//     fib(n);

//     return 0;
// }

// ## factorial of number
// #include<iostream>
// using namespace std;


// int fact(int n){
//     int factorial=1;
//     for(int i=1; i<=n; i++){
//         factorial=factorial*i;
//     }
//     return factorial;
// }

// int main(){
//     int n;
//     cin>>n;

//     int ans = fact(n);
//     cout<<ans<<endl;
//     return 0;

// }

//## Calculate nCr

// #include<iostream>
// using namespace std;

// int fact(int n){
//     int factorial=1;
//     for(int i=2; i<=n; i++){
//         factorial=factorial*i;
// }
// return factorial;
// }

// int main(){
// int n,r;
// cin>>n>>r;
// int ans = fact(n)/(fact(r)*fact(n-r));
// cout<<ans<<endl;


//     return 0;
// }

// ## pascal triangle

#include<iostream>
using namespace std;


int fact(int n){
    int factorial=1;
    for(int i=2; i<=n; i++){
        factorial=factorial*i;
    }
    return factorial;
}

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j <= i; j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";

        }
        cout<<endl;
    }
    return 0;
    
}