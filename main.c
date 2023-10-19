#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 void f(void);
 
 int i; 

int main(int argc, char *argv[]) {
	for(i=0;i<5;i++){  //i의 값이 5보다 더 크기에 한번만 실행 후 종료된다.  
		f();  
	}
return 0;
} 

void f(void){
	for(i=0;i<10;i++){
		printf("#");   //여기서 전역변수 i의 값이 10으로고정  
	}
}
