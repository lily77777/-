/*
 * p21.c
 *
 *  Created on: 2020. 4. 10.
 *      Author: user
 */
/*#include<stdio.h>
#define MAX_SIZE 100

float sum(float[],int);
float input[MAX_SIZE],answer;
int i;


void main(void){
	printf("software 2016039102 sunyilin\n");
	for(i=0;i<MAX_SIZE;i++)
		input[i]=i;
	printf("address of input=%p\n",input);
	answer=sum(input,MAX_SIZE);
	printf("The sum is:%f\n",answer);
}
float sum(float list[],int n)
{
	printf("value of list=%p\n",list);
	printf("address of list=%p\n\n",&list);

	int i;
	float tempsum=0;
	for(i=0;i<n;i++)
		tempsum +=list[i];
	return tempsum;
}
/*#include<stdio.h>
#include<stdlib.h>

void main(){
    int list[5];
    int *plist[5];

    list[0]=10;
    list[1]=11;

    plist[0]=(int*)malloc(sizeof(int));//heap에서 일부분 공간을 plist[0]에게 할당
    printf("software sunyilin 2016039102\n");
    printf("list[0]\t=%d\n",list[0]);//list[0]의 값
    printf("address of list\t=%p\n",list);//list[0]의 주소
    printf("address of list[0]\t=%p\n",&list[0]);
    printf("address of list +0 \t=%p\n",list+0); //list의 주소+0*sizeof(int)  list[0]의 주소
    printf("address of list +1\t=%p\n",list+1);//list의 주소+1*sizeof(int)  list[1]의 주소
    printf("address of list +2\t=%p\n",list+2);//list의 주소+2*sizeof(int)  list[2]의 주소
    printf("address of list +3\t=%p\n",list+3);// list의 주소+3*sizeof(int)  list[3]의 주소
    printf("address of list +4\t=%p\n",list+4);// list의 주소+4*sizeof(int)  list[4]의 주소
    printf("address of list[4]\t=%p\n",&list[4]);//list[4]의 주소

    free(plist[0]);

}*/
