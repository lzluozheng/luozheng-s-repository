#include<stdio.h>
int JUGE (int x);
int main () {
	int n,sum=0,max,i,a,b,c;
	for(i=100; i<1000; i++) {
		a=i/100;
		b=(i-a*100)/10;
		c=i-100*a-10*b;
		if(JUGE(i) && JUGE(a+b+c) && JUGE(a*b*c) && JUGE(a*a+b*b+c*c)) {
			n++;
			sum+=i;
			max=i;
		}
	}
	printf("the number of SP is :%d\nthe total of all the SPs is :%d\nthe max of all the SPs is:%d\n",n,sum,max);
	return 0;
}
int JUGE (int x) {
	int i,m=1;
	if(x==0)
		return 0;
	else {
		for(i=x-1; i>1; i--) {
			if(x%i==0) {
				m=0;
				break;
			}
		}
		return m;
	}
}
