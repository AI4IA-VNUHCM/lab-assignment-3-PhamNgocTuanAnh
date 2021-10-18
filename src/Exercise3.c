/*
3.	Input an array of n integers. Find the largest sorted sub array
(sorted array increasing/decreasing and has the largest number of elements)
Ex:
 _____________________________________________
| Input: 2 5 3 4 8 9 7 6 10                   |
| Output: Increasing 3 4 8 9 Decreasing 9 7 6 |
|_____________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex3(int in_arr[], int n){
	//Your codes here
	int i,count=0;
 		for( i=0;i<n;i++)
 	{
 		while(in_arr[i]<in_arr[i+1])
 	{
 		if(in_arr[i]<in_arr[i+1]) 
		 	printf("%d %d ",in_arr[i],in_arr[i+1]);
 		else 
			printf("%d",in_arr[i+1]);
 			count++; 
			i++; 
	}
	}
}
int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex3(testcase, argc);
	
	return 0;
}
