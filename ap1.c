/*
 * ap1.c
 *
 *  Created on: 2020. 4. 9.
 *      Author: user
 */

/*#include<stdio.h>
#include<stdlib.h>

void main(){
	int list[5];
	int *plist[5]={NULL,};

	plist[0]=(int *)malloc(sizeof(int));

	list[0]=1;
	list[1]=100;
	*plist[0]=200;

	printf("software sunyilin 2016039102\n");

	printf("value of list[0]=%d\n",list[0]);//list[0]의 값
	printf("address of list[0]              =%p\n",&list[0]);//list의 주소
	printf("value of list                   =%p\n",list);//list의 주소
	printf("address of list(&list)          =%p\n",&list);//list의 주소


	printf("-----------------------------------\n\n");
	printf("value of list[1]   =%d\n",list[1]);
	printf("address of list[1] =%p\n",&list[1]);//list[1]의 주소
	printf("value of *(list+1) =%d\n",*(list +1));//list의 주소+4byte=list[1]의 주소,list[1]의 값를 포린트
	printf("address of list+1  =%p\n",list+1);//list의 주소+4byte=list[1]의 주소,list[1]의 주소를 포린트

	printf("-----------------------------------\n\n");

	printf("value of *plist[0] =%d\n",*plist[0]);//plist[0]의 값
	printf("&plist[0]          =%p\n",&plist[0]);//plist[0]의 주소
	printf("&plist             =%p\n",&plist);//포인트이기 때문에 &plist=plist
	printf("plist              =%p\n",plist);//plist의 주소=plist[0]의 주소
	printf("plist[0]           =%p\n",plist[0]);//plist[0]안에 저장한 int형변수의 주소
	printf("plist[1]           =%p\n",plist[1]);//가리키는 변수가 없음
	printf("plist[2]           =%p\n",plist[2]);
	printf("plist[3]           =%p\n",plist[3]);
	printf("plist[4]           =%p\n",plist[4]);

	free(plist[0]);

}*/
