class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    
	    //first largest
	    int firstLargest = -1;
	    for(int i=0; i<n;i++){
	        firstLargest = max(firstLargest, arr[i]);
	    }
	    
	    //second largest
	    int secondLargest = -1;
	    for(int i =0; i<n; i++){
	        if(arr[i]!= firstLargest){
	            secondLargest = max(secondLargest, arr[i]);
	        }
	    }
	    return secondLargest;
	}
