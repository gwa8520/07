#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int inc(int counter)  //prototyping
int main(int argc, char *argv[]) {
	
	int i=10;
	printf("함수 호출 전 i=%d",i);  //i=10  
	inc(i);
	printf("함수 호출 후 i=%d",i)  //i=10, counter함수는 inc함수가 끝나면 소멸하기 때문이다.  
	
	return 0;
}

int inc(int counter){
	
	counter++;
	return counter;
} 
