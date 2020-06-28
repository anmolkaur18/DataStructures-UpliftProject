/*
Given a fixed length array arr of integers, duplicate each occurrence of zero, shifting the remaining elements to the right.
Note that elements beyond the length of the original array are not written.
Do the above modifications to the input array in place, do not return anything from your function.
Example 1:

Input: [1,0,2,3,0,4,5,0]
Output: null
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
Example 2:

Input: [1,2,3]
Output: null
Explanation: After calling your function, the input array is modified to: [1,2,3]

*/

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the size of array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements\n";
    for(i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n; i++)
    {
        if(arr[i]== 0)
            {
                for(int j=n-1; j>=i+1; j--)
                    arr[j] = arr[j-1];
            arr[i+1]= 0;
            i++;
        }
     }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;

}
