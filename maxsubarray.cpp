//HackerRank URL: https://www.hackerrank.com/challenges/maxsubarray/problem
#include <iostream>

using namespace std;
//Calculating Maximum SubArray
//Also known as Kadane's algorithm

int subarray(int arr[],int n){
    int f[n];
    f[0] = arr[0];
    int ans = f[0];
    for (int i = 1;i < n;i++){
        f[i] = max(arr[i],f[i-1]+arr[i]);
        ans = max(f[i],ans);
    }
    return ans;
}

int subsequence(int arr[],int n){
    int maxi = arr[0];
    int s = 0;
    for(int i=0;i<n;i++){
        maxi = std::max(maxi,arr[i]);
        if(arr[i]>=0)
            s+=arr[i];
            //cout<<maxi<<" "<<s<<endl;
    }
    if (maxi>=0)
        return s;
    else 
        return maxi;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        int arr[s];
        for(int i=0;i<s;i++)
            cin>>arr[i];
        cout<<subarray(arr,s)<<" "<<subsequence(arr,s)<<endl;
    }
    return 0;
}