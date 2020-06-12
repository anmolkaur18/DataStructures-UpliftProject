/*
Given an array nums of integers, return how many of them contain an even number of digits.

Input: nums = [12,345,2,6,7896]
Output: 2
Explanation:
12 contains 2 digits (even number of digits).
345 contains 3 digits (odd number of digits).
2 contains 1 digit (odd number of digits).
6 contains 1 digit (odd number of digits).
7896 contains 4 digits (even number of digits).
Therefore only 12 and 7896 contain an even number of digits.

Example 2:

Input: nums = [555,901,482,1771]
Output: 1
Explanation:
Only 1771 contains an even number of digits.

*/
#include<iostream>
using namespace std;
int evenNum(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++)
        {
           int dig=0;
             while(arr[i]!=0)
              {
                  dig++;
                  arr[i]/=10;
              }
              if(dig%2 == 0)
                   count++;
        }
    return count;
}

int main(){

cout<<"Enter the size of array (less than 20)"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
         int num;
        num = evenNum(arr,n);
        cout<<endl<<num;
        return 0;
}
