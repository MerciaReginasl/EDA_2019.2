#include<stdio.h>

int main(){
	int N;
	int t1, t2, t3, t4;
	
	scanf("%d", &N);
	
	t1 = N/3600;
	t2 = N%3600;
	t3 = t2/60;
	t4 = t2%60;
	
	printf("%d:%d:%d\n", t1, t3, t4);
	
	return 0;
}
