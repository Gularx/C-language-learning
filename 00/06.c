//
// Created by Gularx on 2024/7/12.
//

#include<stdio.h>
#include<stdlib.h>

typedef struct {
    short hour;
    short min;
    short sec;
}StructTimeVal;

static StructTimeVal CalcTimeVal(int tick);
static StructTimeVal CalcTimeVal(int tick) {
    StructTimeVal tv;
    tv.hour = tick/3600;
    tv.min = (tick%3600)/60;
    tv.sec = (tick%3600)%60;
    return (tv);
}
int main(){
    int tick = 0;
    StructTimeVal tv;
    printf("Please input a tick between 0~86399\n");
    scanf_s("%d", &tick);
    tv = CalcTimeVal(tick);
    printf("%02d-%02d-%02d\n",tv.hour,tv.min,tv.sec);
    return 0;
}