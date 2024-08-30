//
// Created by Gularx on 2024/7/12.
//
// 任务1：2020年总共有366天，将2020年1月1日作为计数起点，即计数1，
// 2020年12月31日作为计数终点，即计数366。
// 计数 1 代表“2020年1月1日-星期三”，计数 10 代表“2020年1月10日-星期五”。
// 参照本章实验，通过键盘输入一个1～366之间的值，
// 包括1和366，基于枚举，将其转换为年、月、日、星期，并输出到控制台窗口。
// 任务2：参照本章实验，通过键盘输入两个数，判断大小，并输出结果到控制台窗口。
// 任务3：参照本章实验，通过键盘输入十个数，判断大小，并输出结果到控制台窗口。

#include <stdio.h>

typedef unsigned int i32;
typedef enum{
    MON = 1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
}EnumWeekDay;	//声明枚举类型?

typedef enum{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
}EnumMonth;	//声明枚举类型?

static void CalcTimeVals(i32 time);

static void CalcTimeVals(i32 time){
    EnumWeekDay workDay;	//定义枚举变量
    EnumMonth workMonth;
    i32 timeDay = time % 7 + 2;
    switch (timeDay) {
        case MON:
            workDay = MON;
            break;
        case TUE:
            workDay = TUE;
            break;
        case WED:
            workDay = WED;
            break;
        case THU:
            workDay = THU;
            break;
        case FRI:
            workDay = FRI;
            break;
        case SAT:
            workDay = SAT;
            break;
        case SUN:
            workDay = SUN;
            break;
        default:
            break;
    }
    switch (time) {
        case 1 ... 31:
            workMonth=JAN;
            break;
        case 32 ... 60:
            time-=31;
            workMonth=FEB;
            break;
        case 61 ... 91:
            time-=60;
            workMonth=MAR;
            break;
        case 92 ... 121:
            time-=91;
            workMonth=APR;
            break;
        case 122 ... 152:
            time-=121;
            workMonth=MAY;
            break;
        case 153 ... 182:
            time-=152;
            workMonth=JUN;
            break;
        case 183 ... 213:
            time-=182;
            workMonth=JUL;
            break;
        case 214 ... 244:
            time-=213;
            workMonth=AUG;
            break;
        case 245 ... 274:
            time-=244;
            workMonth=SEP;
            break;
        case 275 ... 305:
            time-=274;
            workMonth=OCT;
            break;
        case 306 ... 335:
            time-=305;
            workMonth=NOV;
            break;
        case 336 ... 366:
            time-=336;
            workMonth=DEC;
            break;
        default:
            break;
    }
    printf("2020年%d月%d日星期%d\n", workMonth, time, workDay);
}

//定义枚举
typedef enum {
    TIME_VAL_HOUR = 0,
    TIME_VAL_MIN,
    TIME_VAL_SEC,
    TIME_VAL_MAX
}EnumTimeVal;

//计算小时，分钟，秒值的函数声明
static short CalcTimeVal(int tick, unsigned int type);

//计算小时，分钟，秒值的函数实现
static short CalcTimeVal(int tick, unsigned int type) {
    short timeVal;

    switch (type) {
        case TIME_VAL_HOUR:
            timeVal = tick / 3600;
            break;
        case TIME_VAL_MIN:
            timeVal = (tick % 3600) / 60;
            break;
        case TIME_VAL_SEC:
            timeVal = (tick % 3600) % 60;
            break;
        default:
            break;
    }

    return (timeVal);
}

int main(){
    i32 time = 0;
    scanf_s("%d", &time);
    CalcTimeVals(time);

    int tick = 0;

    short hour;
    short min;
    short sec;

    printf("Please input a tick between 0-86339\n");
    scanf_s("%d", &tick);

    hour = CalcTimeVal(tick, TIME_VAL_HOUR);
    min = CalcTimeVal(tick, TIME_VAL_MIN);
    sec = CalcTimeVal(tick, TIME_VAL_SEC);

    printf("Current time: %02d:%02d:%02d\n", hour, min, sec);

    return 0;
}
