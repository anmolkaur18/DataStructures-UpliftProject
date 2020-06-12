/*

Find the maximum number of consecutive one's in an array

*/

#include<iostream>
using namespace std;
int maxOnes(int arr[],int n ){
		int count = 0;
		int max = 0;
		for( int i = 0; i <n; i++){
			if(arr[i] == 0)
				count = 0;
			else
				count++;
			max = count > max ? count : max;
		}
		return max;
	}

int main(){
    cout<<"Enter the size of array (less than 20)"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int max= maxOnes(arr,n);
    cout<<max;
}
