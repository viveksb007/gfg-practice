 	
	void rotateClockwise90degrees(int input[][100], int n) {
		
	/* Don't write main().
     	* the input string is already passed as function argument.
     	* Taking input and printing output is handled automatically.
     	*/
     	
     	
     	int i;
     	int l = 0,r = n-1,t = 0,b = n-1;
     	while(l<r && t<b){
     	    n--;
     	    int x = n;
     	    n--;
     	    while(x--){
         	    int lt = input[t][l],rt = input[t][r],lb = input[b][l],rb = input[b][r];
         	    //cout<<lt<<" "<<rt<<" "<<lb<<" "<<rb<<endl;
         	        for(i=r;i>l;i--){
         	            input[t][i] = input[t][i-1];
         	        }
         	        for(i=b;i>t;i--){
         	            input[i][r] = input[i-1][r];
         	        }
         	        for(i=l;i<r;i++){
         	            input[b][i] = input[b][i+1];
         	        }
         	        for(i=t;i<b;i++){
         	            input[i][l] = input[i+1][l];
         	        }
         	        input[t][l+1] = lt;
         	        input[t+1][r] = rt;
         	        input[b][r-1] = rb;
         	        input[b-1][l] = lb;
     	    }
     	    l++; r--; t++; b--;
         }
 	}


