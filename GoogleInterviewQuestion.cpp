#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int s,t;
	cin>>s>>t; //Input start and end time of event
	int size = t - s;
	int time[t+1]={0};
	int n;
	cin>>n;//Input number of guests
	int arr[n],leave[n];
	for(int i = 0;i<n;i++)
	    cin>>arr[i]>>leave[i];
	}
	sort(arr,arr+n);
	sort(leave,leave+n);
	for(int i=0;i<n;i++){
	    time[arr[i]]+=1;
	    time[leave[arr[i]]]-=1;
	}
	//Find maximum number between the time[s] and time[t]
	int max = time[s];
	for(int i = s+1;i<=t;i++){
	    if(time[i]>max){
	        max = time[i];
	    }
	}
	
	cout<<max;
	
	
	return 0;
}
