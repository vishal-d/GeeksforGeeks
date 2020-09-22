void rotate(vector<vector<int> >& matrix)
{
    //first transpose the matrix and the swap the elements coming inwards
    //ref:https://www.youtube.com/watch?v=SA867FvqHrM (for clockwise rotation)
    int n=matrix.size();
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }//Transpose complete
    for(int i=0; i<n/2; i++){
        for(int j=0; j<n; j++){
            int temp=matrix[n-1-i][j];
            matrix[n-1-i][j]=matrix[i][j];
            matrix[i][j]=temp;
        }
    }
}
