//
// Created by Gularx on 2024/7/12.
//

#include<stdio.h>

typedef struct {
    short hour;
    short min;
    short sec;
}StructTimeVal;

static unsigned char CalcTimeVal(int tick, StructTimeVal* pTV);

static unsigned char CalcTimeVal(int tick, StructTimeVal* pTV) {
    unsigned char valid = 0;
    if(valid >=0 && valid <= 86399) {
        valid = 1;
        pTV->hour = tick / 3600;
        pTV->min = (tick % 3600) / 60;
        pTV->sec = (tick % 3600) % 60;
    }
    return (valid);
}

int main(){
    int tick = 0;
    unsigned char valid;
    StructTimeVal tv;
    printf("Please input a tick between 0~86399\n");
    scanf_s("%d", &tick);
    valid = CalcTimeVal(tick, &tv);

    if(valid >0) {
        printf("%02d-%02d-%02d\n",tv.hour,tv.min,tv.sec);
    }
    else {
        printf("Invalid tick value!!!\n");
    }

    return 0;
}