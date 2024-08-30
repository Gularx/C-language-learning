//
// Created by Gularx on 2024/7/12.
//

#include <stdio.h>
#include<stdlib.h>

static unsigned char CalcTimeVal(int tick, short* pTimeVal);

static unsigned char CalcTimeVal(int tick, short* pTimeVal) {
    unsigned char valid = 0;

    if(tick >= 0 && tick <= 86399) {
        valid = 1;
        *(pTimeVal +2) = tick / 3600;
        *(pTimeVal +1) = (tick % 3600) / 60;
        *(pTimeVal +0) = (tick % 3600) % 60;
    }
    return (valid);
}

int main(){
    int tick = 0;
    short arrTimeVal[3];
    unsigned char calcRighFlag = 0; //是否计算成功

    printf("Please input a tick between 0~86339\n");
    scanf_s("%d", &tick);

    calcRighFlag = CalcTimeVal(tick, arrTimeVal);   //数组名称作为指针返回值

    if(1 == calcRighFlag) {
        printf("Current time: %02d-%02d-%02d\n", arrTimeVal[2], arrTimeVal[1], arrTimeVal[0]);
    }
    else {
        printf("Invalid tick value");
    }
    return 0;
}