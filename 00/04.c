//
// Created by Gularx on 2024/7/12.
//
// ����1��2020���ܹ���366�죬��2020��1��1����Ϊ������㣬������1��
// 2020��12��31����Ϊ�����յ㣬������366��
// ���� 1 ����2020��1��1��-�������������� 10 ����2020��1��10��-�����塱��
// ���ձ���ʵ�飬ͨ����������һ��1��366֮���ֵ��
// ����1��366������ö�٣�����ת��Ϊ�ꡢ�¡��ա����ڣ������������̨���ڡ�
// ����2�����ձ���ʵ�飬ͨ�������������������жϴ�С����������������̨���ڡ�
// ����3�����ձ���ʵ�飬ͨ����������ʮ�������жϴ�С����������������̨���ڡ�

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
}EnumWeekDay;	//����ö������?

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
}EnumMonth;	//����ö������?

static void CalcTimeVals(i32 time);

static void CalcTimeVals(i32 time){
    EnumWeekDay workDay;	//����ö�ٱ���
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
    printf("2020��%d��%d������%d\n", workMonth, time, workDay);
}

//����ö��
typedef enum {
    TIME_VAL_HOUR = 0,
    TIME_VAL_MIN,
    TIME_VAL_SEC,
    TIME_VAL_MAX
}EnumTimeVal;

//����Сʱ�����ӣ���ֵ�ĺ�������
static short CalcTimeVal(int tick, unsigned int type);

//����Сʱ�����ӣ���ֵ�ĺ���ʵ��
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
