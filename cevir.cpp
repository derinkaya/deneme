#include <stdio.h>
int main(int argc, char * argv[]) {
	int a1[]={1,5,7};
	int a2[]={2,5,6};
	int l1 = sizeof(a1)/sizeof(int);
	int l2 = sizeof(a2)/sizeof(int);

	int i1=0;
	int i2=0;
	
	while (1) {
		if ((i1==l1)&&(i2==l2)) break;
		if (i1==l1) {
			printf("%d ",a2[i2]);
			i2++;
		} else if (i2==l2) {
			printf("%d ",a1[i1]);
			i1++;
		} else if ((a1[i1]<a2[i2])) {
			printf("%d ",a1[i1]);
			i1++;
		} else {
			printf("%d ",a2[i2]);
			i2++;
		}

	}
	
	return 1;
}
