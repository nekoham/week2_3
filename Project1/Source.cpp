#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double w, h;
	printf("Please enter your weight(Kilogram) : ");
	scanf("%lf", &w);
	printf("Please enter your height(Metre) : ");
	scanf("%lf", &h);
	double bmi = w / (h * h);
	printf("Your bmi is %.1lf\n", bmi);

	if (bmi >= 30.0) {
		printf("��ǹ�Թ�");
	}
	else if (bmi <= 29.9 && bmi >= 25.0) {
		printf("�٧�����ҵðҹ");
	}
	else if (bmi <= 24.9 && bmi >= 18.5) {
		printf("����");
	}
	else {
		printf("���˹ѡ��ӡ���ࡳ��");
	}

	return 0;
}
