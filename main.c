#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int inc(int counter)  //prototyping
int main(int argc, char *argv[]) {
	
	int i=10;
	printf("�Լ� ȣ�� �� i=%d",i);  //i=10  
	inc(i);
	printf("�Լ� ȣ�� �� i=%d",i)  //i=10, counter�Լ��� inc�Լ��� ������ �Ҹ��ϱ� �����̴�.  
	
	return 0;
}

int inc(int counter){
	
	counter++;
	return counter;
} 
