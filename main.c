#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	//int temp=1; 
	
	for(i=0;i<5;i++){    //temp가 1의 값만 갖는다. temp는 블록이 끝나면 소멸. i가 다시 2로 들어가면 temp가 새로 생성.    
		int temp=1;  //static int temp=1;
		printf("temp is %d\n",temp);
		temp++;
	}  
	
	return 0;
}
