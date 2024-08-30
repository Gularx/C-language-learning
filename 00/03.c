//
// Created by Gularx on 2024/7/12.
//
// 通过键盘输入一个0～86399之间的值，包括0和86399，使用 CalcHour 函数计算小时值，
// CalcMin 函数计算分钟值，CalcSec 函数计算秒值，在主函数中通过调用上述三个函数实现秒值-时间值转换，
// 并输出到控制台窗口。

#include<stdio.h>

static short CalcHour(int tick);
static short CalcMin(int tick);
static short CalcSec(int tick);

int main(){
    int tick = 0;

    short hour;
    short min;
    short sec;

    printf("Please input a tick between 0-86339\n");
    scanf_s("%d", &tick);

    hour = CalcHour(tick);
    min = CalcMin(tick);
    sec = CalcSec(tick);

    printf("Current time: %02d:%02d:%02d\n", hour, min, sec);

    return 0;
}

static short CalcHour(int tick){
    short hour;

    hour = tick / 3600;
    return hour;
}

static short CalcMin(int tick){
    short min;

    min = (tick % 3600) / 60;
    return min;
}

static short CalcSec(int tick){
    short sec;

    sec = (tick % 3600) % 60;
    return sec;
}