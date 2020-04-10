/*
 * padding.c
 *
 *  Created on: 2020. 4. 10.
 *      Author: user
 */
#include<stdio.h>

struct student{
	char lastName[13];
	int studentID;
	short grade;
};
int main(){
	struct student pst;
	printf("software sunyilin software \n");
	printf("size of student=%ld\n",sizeof(struct student));
	printf("size of int = %ld\n",sizeof(int));
	printf("size of short= %ld\n",sizeof(short));
	return 0;
}
