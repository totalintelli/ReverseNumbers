//ReverseNumbers.c
/*
���� �̸�: ReverseNumbers.c
��     ��: ���� ������ �Է¹޾� ������ �Ųٷ� �����´�.
��  �� ��: �� �� ��
�ۼ� ����: 2015�� 8�� 9��
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
void Input(Long *number, Long(*numbers));
void ReverseNumbers(Long number, Long(*numbers));
void Output(Long number, Long(*numbers));
