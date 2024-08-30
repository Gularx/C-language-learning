//
// Created by Gularx on 2024/7/12.
//
// 通过键盘输入一个0～86399之间的值，包括0和86399，将其转换为小时值、分钟值和秒值，
// 而小时值、分钟值和秒值为数组arrTimeVal的元素，
// 即arrTimeVal[2]为小时值、arrTimeVal[1]为分钟值、arrTimeVal[0]为秒值，并输出到控制台窗口。

#include<stdio.h>

int main(){
    int tick = 0;   //0-86399

    short arrTimeVal[3];    //存放小时值，分钟值，秒值

    printf("Please input a tick between 0-86339\n");
    scanf_s("%d", &tick);

    arrTimeVal[2] = tick / 3600;
    arrTimeVal[1] = (tick % 3600) / 60;
    arrTimeVal[0] = (tick % 3600) / 60;

    printf("Current time: %02d:%02d:%02d\n", arrTimeVal[2], arrTimeVal[1], arrTimeVal[0]);

    return 0;
}