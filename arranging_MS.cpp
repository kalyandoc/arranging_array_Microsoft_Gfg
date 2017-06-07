#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)cin>>arr[i];
	    int i=0;
	    for(int j=1;j<n;){
	        if((arr[i]>=0&&arr[j]>=0) || (arr[i]<0&&arr[j]<0))
	        {
	            j++;
	        }
	        else if(arr[i]<0&&arr[j]>=0){
	            i=j;
	            j++;
	        }
	        else{
	            int key=arr[j];
	            int k=j;
	            while(k>i){
	                arr[k]=arr[k-1];
	                k--;
	            }
	            arr[k]=key;
	            i++;j++;
	            
	        }
	    }
	    for(int m=0;m<n;m++){
	        cout<<arr[m]<<" ";
	    }
	    cout<<endl;
	}
	
	return 0;
}
