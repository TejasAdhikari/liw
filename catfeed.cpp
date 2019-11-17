#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T,N,X;
    long int M;
    cin>>T;
    while(T--){
        cin>>N>>M;
        int arr[N],arrm[M],arrn[N];
        
        for (int i = 0; i < M; i++)
        {
            cin>>arrm[i];
        }
        for (int j = 0; j < N; j++)
        {
            arr[j] = j+1;
        }
        if(N>M){
            int count = 0;
            for (int m = 0; m < M; m++)
            {
                count = 0;
                for (int n = m; n < M; n++)
                {
                    if(arrm[m] == arrm[n]){
                        count++;
                    }
                } 
            }
            if(count == 1){cout<<"YES";}
            else{cout<<"NO";}
        }
        else
        {
            X=N;  
            int Y = M/N; 
            int flag =0; 
        while (Y--){ 
        for (int k = 0; k < X; k++)
        {
            arrn[k] = arrm[k];
        }
        sort(arrn , arrn+(N-1));
        for (int l = 0; l < X; l++)
            if(arr[l] != arrn[l])
                flag++;
        
        if(flag = 0)
            cout<<"YES";
        else
        {
            cout<<"NO";
        }
        }
        }
    }
    return 0;
}