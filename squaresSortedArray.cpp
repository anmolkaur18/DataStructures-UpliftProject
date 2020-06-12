/*

Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.



Example:

Input: [-4,-1,0,3,10]
Output: [0,1,9,16,100]

*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void functiong(int arr[], int n)
{
    //int n= sizeof(arr)/sizeof(arr[0]);
    int i;

    for(i=0; i<n;i++)
        arr[i]= arr[i] * arr[i];

    sort(arr, arr+n);

    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";

}

int main(){
int n;
cout<<"enter the size of array\n";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
     {cin>>arr[i];}
 functiong(arr,n);
return 0;
}
