#include<stdio.h>
int main() {
         int a=8,b=7,temp;
	 temp=a;
	 a=b;
	 b=temp;
	 printf("Swapped numbers a=%d, b=%d",a,b);
	 return 0;
}