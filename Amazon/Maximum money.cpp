class Solution {
  public:
    int maximizeMoney(int N , int K) {
        // code here
        if(N%2==0){
            return (N/2)*K;
        }
        else{
            return ((N+1)/2)*K;
        }
    }
};
