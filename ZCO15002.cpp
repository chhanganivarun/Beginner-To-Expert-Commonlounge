#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    long long k;
    cin>>n>>k;
    std::vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    long long cnt=0;
    int start=0;
    int end_in=start+1;
    while(end_in<n)
    {
        if(a[start]+k>a[end_in])
            end_in++;
        else
        {
            cnt+=(n-end_in);
            start++;
            if(end_in==start)end_in++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
