//ReverseNumbers.c
/*
파일 이름: ReverseNumbers.c
기     능: 수와 수들을 입력받아 수들을 거꾸로 뒤집는다.
작  성 자: 송 용 단
작성 일자: 2015년 8월 9일
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1000	
typedef signed long int Long;

int main(int argc, char *argv[]);
void Input(Long *number, Long(*numbers));
void ReverseNumbers(Long number, Long(*numbers));
void Output(Long number, Long(*numbers));
