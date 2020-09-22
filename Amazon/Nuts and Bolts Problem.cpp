class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    map<char,int> umap;// code here
	    umap['@']=0;
	    umap['#']=0;
	    umap['$']=0;
	    umap['%']=0;
	    umap['^']=0;
	    umap['&']=0;
	    umap['~']=0;
	    umap['*']=0;
	    umap['!']=0;
	    for(int i=0; i<n; i++){
	        umap[nuts[i]]++;
	    }
	    int i=0;
	    for(auto x: umap){
	            if(x.second>0){
	                nuts[i]=x.first;
	                bolts[i]=x.first;
	                i++;
	            }      
	    }
	    
	}

};
