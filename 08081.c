//�˶δ��뽫��ӡ��3��3��3
#include <stdio.h>
#include <stdlib.h>

int main(){
	unsigned int a = 0xFFFFFFF7;
	unsigned char i = (unsigned char)a;
	char *b = (char*)&a;
	printf("%08x,%08x", i, *b);
	system("pause");
	return 0;
}

//int main(){
//	int c[] = { 1, 3, 5 };
//	int *k = c + 1;
//	printf("%d", *++k);
//	system("pause");
//	return 0;
//}

//int main(void){
//	int a = 2, *p1, **p2;
//	p2 = &p1;
//	p1 = &a;
//	a++;   //a��ֵ���ı�
//	printf("%d %d %d\n", a, *p1, **p2);//��ת��һ��ʱ��a��ֵ��+1
//	system("pause");
//	return 0;
//}