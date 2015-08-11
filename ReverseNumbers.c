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

/*
�Լ� �̸�: Input
��     ��: ���� ������ �Է¹޴´�.
��     ��: ����
��     ��: ��, ����
*/
void Input(Long *number, Long(*numbers)) {

	Long i;

	scanf("%d", number);

	for (i = 0; i < number; i++) {
		scanf("%d", numbers + i);
	}
}

/*
�Լ� �̸�: ReverseNumbers
��     ��: ���� ������ �Է¹޾� ������ �����´�.
��     ��: ��, ����
��     ��: ������ ����
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
�Լ� �̸�: Output
��     ��: �Ųٷ� �� ���� ����Ϳ� ����Ѵ�.
��     ��: �Ųٷ� �� ��, ������ ����
��     ��: ����
*/
void Output(Long number, Long(*numbers)) {
	Long i;

	for (i = 0; i < number; i++) {
		printf("%d", numbers + i);
	}
}
