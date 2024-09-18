// finding max and min element from array

#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
for (int i = 0; i < n; i++){
    cin>>array[i];
}
int maxNo = INT_MIN;
int minNo = INT_MAX;
for (int i = 0; i < n; i++)
{
    if (array[i]>maxNo)
    {
        maxNo = array[i];
    }
    if (array[i]<minNo)
    {
        minNo = array[i];
    }    
}
        // if (arr[i]>maxNo){
        //     maxNo = arr[i];     for space complexity we use below condition 
        // }
        // if (arr[i]<minNo){
        //     minNo = arr[i];
        // }
cout<<minNo<<" "<<maxNo<<endl;
    return 0;
} 