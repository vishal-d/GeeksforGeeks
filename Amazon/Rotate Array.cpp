#include <iostream>
using namespace std;
void reverse(int arr[],int start, int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
//ref: https://www.youtube.com/watch?v=gmu0RA5_zxs 
int main() {
	//code
    int T, N, D;
    cin>>T;
    while(T--){
        cin>>N;
        cin>>D;
        int arr[N];
        for(int i=0; i<N; i++){
            cin>>arr[i];
        }
        D=D%N;
       reverse(arr,0,N-1);
       reverse(arr,0,N-D-1);
       reverse(arr,N-D,N-1);
       for(int i=0; i<N; i++){
           cout<<arr[i]<<" ";
       }
       cout<<"\n";
    }
    	return 0;
}
