#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int T,input;
    cin>>T;
    while(T--){
    vector <int> v;
    long long int N;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    cout<<v[0]<<endl;
    }
    return 0;
}