#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0 ;i<t;i++){
	    int n;
	    scanf("%d",&n);
	    int arr[n];
	    int odd=0;
	    for(int i=0;i<n;i++){
	        scanf("%d",&arr[i]);
	        if(arr[i]%2==1){
	            odd++;
	        }
	    }
    printf("%d
",(odd)/2);
	}
	return 0;
}