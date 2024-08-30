//
// Created by Gularx on 2024/7/26.
//
/***************************************************************
 * 4.2020���� 366�죬��2020��1��1����Ϊ������㣬
 * ������1��2020��12��31����Ϊ�����յ㣬������ 366��
 * ����1����2020��1��1��-��������,����10����2020��1��10��-�����塱��
 * �ο�����ʵ�飬ͨ����������һ��1~366֮���ֵ������1��366.���ں�����
 * ����ת��Ϊ�ꡢ�¡��ա����ڣ������������̨���ڡ�
 ***************************************************************/

#include <stdio.h>

int main() {
    int days;
    int year, month, day, weekday;

    // �����û���������
    printf("������1��366֮�������: ");
    scanf("%d", &days);

    // ����������
    year = 2020;
    month = 1;
    day = days;
    while (day >= 30) {
        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                if (day > 29) {
                    day -= 29;
                    month++;
                }
            } else {
                if (day > 28) {
                    day -= 28;
                    month++;
                }
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day > 30) {
                day -= 30;
                month++;
            }
            else{
                break;
            }
        } else {
            if (day > 31) {
                day -= 31;
                month++;
            }
            else{
                break;
            }
        }
        if(month>12){
            year+=1;
            month=1;
        }
    }

    // ��������
    weekday = (days + 2) % 7;
    switch (weekday) {
        case 0:
            printf("%d��%d��%d�� ������\n", year, month, day);
            break;
        case 1:
            printf("%d��%d��%d�� ����һ\n", year, month, day);
            break;
        case 2:
            printf("%d��%d��%d�� ���ڶ�\n", year, month, day);
            break;
        case 3:
            printf("%d��%d��%d�� ������\n", year, month, day);
            break;
        case 4:
            printf("%d��%d��%d�� ������\n", year, month, day);
            break;
        case 5:
            printf("%d��%d��%d�� ������\n", year, month, day);
            break;
        case 6:
            printf("%d��%d��%d�� ������\n", year, month, day);
            break;
    }

    return 0;
}