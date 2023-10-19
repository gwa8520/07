#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int flag=1;
	int y;
	
	while(flag != 0){
		y=3;
		flag=0;
	}
	
	y=4;  //y는 while문을 벗어나 없어짐, y의 정의가 되지 않음으로 에러  
	
	return 0;
}
