//
// Created by Gularx on 2024/7/26.
//
/***************************************************************
 * 4.2020年有 366天，将2020年1月1日作为计数起点，
 * 即计数1，2020年12月31日作为计数终点，即计数 366。
 * 计数1代表“2020年1月1日-星期三”,计数10代表“2020年1月10日-星期五”。
 * 参考本章实验，通过键盘输入一个1~366之间的值，包括1和366.基于函数，
 * 将其转换为年、月、日、星期，并输出到控制台窗口。
 ***************************************************************/

#include <stdio.h>

int main() {
    int days;
    int year, month, day, weekday;

    // 请求用户输入天数
    printf("请输入1到366之间的天数: ");
    scanf("%d", &days);

    // 计算年月日
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

    // 计算星期
    weekday = (days + 2) % 7;
    switch (weekday) {
        case 0:
            printf("%d年%d月%d日 星期日\n", year, month, day);
            break;
        case 1:
            printf("%d年%d月%d日 星期一\n", year, month, day);
            break;
        case 2:
            printf("%d年%d月%d日 星期二\n", year, month, day);
            break;
        case 3:
            printf("%d年%d月%d日 星期三\n", year, month, day);
            break;
        case 4:
            printf("%d年%d月%d日 星期四\n", year, month, day);
            break;
        case 5:
            printf("%d年%d月%d日 星期五\n", year, month, day);
            break;
        case 6:
            printf("%d年%d月%d日 星期六\n", year, month, day);
            break;
    }

    return 0;
}