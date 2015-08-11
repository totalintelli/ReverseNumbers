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

int main(int argc, char *argv[]) {
	Long number;
	Long numbers[MAX];

	Input(&number, numbers);
	ReverseNumbers(number, numbers);
	Output(number, numbers);

	return 0;
}

/*
함수 이름: Input
기     능: 수와 수들을 입력받는다.
입     력: 없음
출     력: 수, 수들
*/
void Input(Long *number, Long(*numbers)) {

	Long i;

	scanf("%d", number);

	for (i = 0; i < number; i++) {
		scanf("%d", numbers + i);
	}
}

/*
함수 이름: ReverseNumbers
기     능: 수와 수들을 입력받아 수들을 뒤집는다.
입     력: 수, 수들
출     력: 뒤집힌 수들
*/
void ReverseNumbers(Long number, Long(*numbers)) {
	Long temp;
	Long i = 0;
	Long j;

	j = number - 1;

	while (i < j) {
		temp = numbers[i];
		numbers[i] = numbers[j];
		numbers[j] = temp;
		j--;
		i++;
	}
}

/*
함수 이름: Output
기     능: 거꾸로 된 수를 모니터에 출력한다.
입     력: 거꾸로 된 수, 수들의 개수
출     력: 없음
*/
void Output(Long number, Long(*numbers)) {
	Long i;

	for (i = 0; i < number; i++) {
		printf("%d", numbers + i);
	}
}
