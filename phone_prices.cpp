# include<bits/stdc++.h>
using namespace std;

int good_days(int arr[], int N){
    int count = 1;
    for(int i=1; i<N; i++){
            switch(i){
                case 1: if(arr[i]<arr[i-1]){
                            count++;
                        }
                        break;
                case 2: if(arr[i]<arr[i-1]&&arr[i]<arr[i-2]){
                            count++;
                        }
                        
                        break;
                case 3: if(arr[i]<arr[i-1]&&arr[i]<arr[i-2]&&arr[i]<arr[i-3]){
                            count++;
                        }
                    
                        break;
                case 4: if(arr[i]<arr[i-1]&&arr[i]<arr[i-2]&&arr[i]<arr[i-3]&&arr[i]<arr[i-4]){
                            count++;
                        }
                        
                        break;
                default:if(arr[i]<arr[i-1]&&arr[i]<arr[i-2]&&arr[i]<arr[i-3]&&arr[i]<arr[i-4]&&arr[i]<arr[i-5]){
                            count++;
                        }
                        break;
            }
    }
    return count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T,N;
    cout<<"enter the number of test cases"<<endl;
    cin>>T;

    for(int i=1; i<=T; i++){
        int* arr = new int[N];
        cout<<"enter number of days for "<<i<<" test case"<<endl;
        cin>>N;
        cout<<"enter the price of each day"<<endl;
        for(int j=0; j<N; j++){
            cin>>arr[j];
        }

        cout<<good_days(arr,N)<<" good days for case "<<i<<endl;
    }
    return 0;
}