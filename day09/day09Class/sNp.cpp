#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int slno;
	int id_01, id_02, id_03, id_04, id_05;
	float m1_01 = 45, m2_01 = 46, m3_01 = 54, m4_01 = 23;
	float m1_02 = 45, m2_02 = 58, m3_02 = 25, m4_02 = 93;
	float m1_03 = 56, m2_03 = 54, m3_03 = 31, m4_03 = 67;
	float m1_04 = 23, m2_04 = 78, m3_04 = 31, m4_04 = 53;
	float m1_05 = 87, m2_05 = 80, m3_05 = 89, m5_05 = 12;
	float avg_01, avg_02, avg_03, avg_04, avg_05;
	char name[20];
	char name2[20];
	char name3[20];
	char name4[40];
	char name5[20];
	avg_01 = (m1_01 + m2_01 + m3_01 + m4_01) / 4.0;
	scanf("%d%f%f%f%f%f", &slno, &id_01, &m1_01, &m2_01, &m3_01, &m4_01, &avg_01);
	scanf(" ");
	scanf("%c", &name);
	printf("\n%d\n%d\n%d\n%d\n%d\n%d\n%lf\n%s");
	printf("==========================");
}
