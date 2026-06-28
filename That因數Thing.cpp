#include <stdio.h>

int main(void) {
	int n;
	printf("Enter integer: ");
  scanf("%d",&n);
	for(int i=n;i>0;i--){
		if (n%i==0){
			int c=n/i;
			printf("%d\t",c);
		}else{
			continue;
		}
				
	}
  return 0;
}
