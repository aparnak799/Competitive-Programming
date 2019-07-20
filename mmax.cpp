//CODECHEF PROBLEM URL:https://www.codechef.com/problems/MMAX
//PROBLEM CODE: MMAX
#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int ans = 0;
        int n,s1;
        int cnt1,cnt0;
        string k;
        cin>>n>>k;
        int now = 0;
        for(int i = 0;i<k.size();i++){
            now = (now*10)%n;
            now = (now + k[i] - '0')%n;
        }
        if(now == 0)
            s1 = 0;
        else
            s1 = 1;

        // if(s1 == 0){
        //     cout<<0;
        //     continue;
        // }
        // else{
            cnt1 = now;
            cnt0 = n - cnt1;
        //}
        if(cnt1<cnt0)
            ans = 2*cnt1;
        else if(cnt1>cnt0)
            ans = 2*cnt0;
        else
        {
                ans = 2*cnt1 - 1;
        }
        cout<<ans<<endl;
    }
    return 0;

}