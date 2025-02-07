/*********************************************************************************************************
* 模块名称: 
* 摘    要: 
* 当前版本: 
* 作    者: 
* 完成日期:  
* 内    容:
* 注    意:                                                                   
**********************************************************************************************************
* 取代版本: 
* 作    者:
* 完成日期: 
* 修改内容:
* 修改文件: 
*********************************************************************************************************/

/*********************************************************************************************************
*                                              包含头文件
*********************************************************************************************************/
#include "Queue.h"
/*********************************************************************************************************
*                                              宏定义
*********************************************************************************************************/

/*********************************************************************************************************
*                                              枚举结构体定义
*********************************************************************************************************/

/*********************************************************************************************************
*                                              内部变量
*********************************************************************************************************/
 
/*********************************************************************************************************
*                                              内部函数声明
*********************************************************************************************************/

/*********************************************************************************************************
*                                              内部函数实现
*********************************************************************************************************/
/*********************************************************************************************************
* 函数名称: 
* 函数功能:  
* 输入参数: 
* 输出参数: 
* 返 回 值: 
* 创建日期: 
* 注    意:
*********************************************************************************************************/

/*********************************************************************************************************
*                                              API函数实现
*********************************************************************************************************/
/*********************************************************************************************************
* 函数名称: 
* 函数功能:  
* 输入参数: 
* 输出参数: 
* 返 回 值: 
* 创建日期: 
* 注    意:
*********************************************************************************************************/
void InitQueue(StructCirQue* pQue, DATA_TYPE* pBuf, i16 len) {
    i16 i;

    pQue->front = 0;
    pQue->rear = 0;     //将队头队尾初始化为0
    pQue->bufLen = len; //队列总长度传递设置值
    pQue->elemNum = 0;  //最初队列元素个数为0
    pQue->pBuffer = pBuf;//将队列中的指针指向传递过来的形参

    for (int i = 0; i < len; i++) {
        pQue->pBuffer[i] = 0;
    }
}

/*********************************************************************************************************
* 函数名称: ClearQueueS
* 函数功能: 清除队列
* 输入参数:
* 输出参数:
* 返 回 值:
* 创建日期:
* 注    意:
*********************************************************************************************************/
void ClearQueueS(StructCirQue* pQue) {
    pQue->front = 0;
    pQue->rear = 0;
    pQue->elemNum = 0;
}

/*********************************************************************************************************
* 函数名称: QueueEmpty
* 函数功能: 判断队列是否为空
* 输入参数:
* 输出参数:
* 返 回 值:
* 创建日期:
* 注    意:
*********************************************************************************************************/
u8 QueueEmpty(StructCirQue* pQue) {
    return (0 == pQue->elemNum);
}

/*********************************************************************************************************
* 函数名称: QueueLength
* 函数功能: 获取队列的长度
* 输入参数:
* 输出参数:
* 返 回 值:
* 创建日期:
* 注    意:
*********************************************************************************************************/
i16 QueueLength(StructCirQue* pQue) {
    return (pQue->elemNum);
}

/*********************************************************************************************************
* 函数名称: EnQueue
* 函数功能: 入列函数
* 输入参数:
* 输出参数:
* 返 回 值:
* 创建日期:
* 注    意:
*********************************************************************************************************/
i16 EnQueue(StructCirQue* pQue, DATA_TYPE* pInput, i16 len) {
    i16 wLen = 0;

    while((pQue->elemNum < pQue->bufLen) && (wLen < len)) {
        pQue->pBuffer[pQue->rear] = pInput[wLen];
        pQue->rear++;

        if(pQue->rear >= pQue->bufLen) {
            pQue->rear = 0;
        }

        wLen++;
        pQue->elemNum++;
    }
    return wLen;
}

/*********************************************************************************************************
* 函数名称: DeQueue
* 函数功能: 出队函数
* 输入参数:
* 输出参数:
* 返 回 值:
* 创建日期:
* 注    意:
*********************************************************************************************************/
i16 DeQueue(StructCirQue* pQue, DATA_TYPE* pOutput, i16 len) {
    i16 rLen = 0;

    while ((pQue->elemNum > 0) && (rLen < len)) {
        pOutput[rLen] = pQue->pBuffer[pQue->front];
        pQue->front++;

        if(pQue->front >= pQue->bufLen) {
            pQue->front = 0;
        }

        rLen++;
        pQue->elemNum--;
    }

    return rLen;
}
