//CODECHEF PROBLEM URL: https://www.codechef.com/JULY19B/problems/CHFM/
//CODECHEF PROBLEM CODE:CHFM
#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        bool flag = false;
        long long sum = 0;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum += arr[i];
        }
        double avg = (double) sum/n;
        for(int i = 0;i<n;i++){
            if(avg == arr[i]){
                cout<<i+1<<endl;
                flag = true;
                break;
            }
        }
        if (flag == false)
            cout<<"Impossible"<<endl;
    }
    return 0;
}