#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 void f(void);
 
 int i; 

int main(int argc, char *argv[]) {
	for(i=0;i<5;i++){  //i�� ���� 5���� �� ũ�⿡ �ѹ��� ���� �� ����ȴ�.  
		f();  
	}
return 0;
} 

void f(void){
	for(i=0;i<10;i++){
		printf("#");   //���⼭ �������� i�� ���� 10���ΰ���  
	}
}
