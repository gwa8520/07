#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	//int temp=1; 
	
	for(i=0;i<5;i++){    //temp�� 1�� ���� ���´�. temp�� ����� ������ �Ҹ�. i�� �ٽ� 2�� ���� temp�� ���� ����.    
		int temp=1;  //static int temp=1;
		printf("temp is %d\n",temp);
		temp++;
	}  
	
	return 0;
}
