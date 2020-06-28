/*
merging two sorted arrays using c++
*/

#include<iostream>
using namespace std;

int sorting(int a[],int n, int b[], int m)
{
    int i=0,j=0,k=0;
    int c[n+m]={0};
    while(i<n && j<m)
    {
        c[k++] = ((a[i]<=b[j])? a[i++] : b[j++]);
       // cout<<c[k-1];
    }

    while(i<n) {c[k++]= a[i++];
    //cout<<c[k-1];
    }
    while(j<m) {c[k++]= b[j++];
    //cout<<c[k-1];
    }
    cout<<"***** Sorted array is *****\n";
    for(i=0;i<n+m;i++)
        cout<<c[i]<<" ";
    return 0;
}

int main()
{
    int i,j,k,s1,s2;
    cout<<"Enter the size of array 1 and 2  respectively (recommended less than 10)\n";
    cin>>s1>>s2;
    int a[s1],b[s2];
    cout<<"enter sorted array 1 \n";
    for(i=0;i<s1;i++)
        cin>>a[i];
         cout<<"enter sorted array 2 \n";
    for(i=0;i<s2;i++)
        cin>>b[i];
int x= sorting(a,s1,b,s2);
    return 0;
}
