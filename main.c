#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a;
	int b;
	
	printf("���ڸ� �Է��ϼ���:\n");
	scanf("%d",&a);
	
	printf("�и� �Է��ϼ���:\n");
	scanf("%d",&b);
	
	printf("�������� ����� %f �Դϴ�\n",(float)a/b);	 
	
	return 0;
}
