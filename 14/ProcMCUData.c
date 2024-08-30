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
#include "ProcMCUData.h"
#include "PackUnpack.h"
#include "SendCmdToMCU.h"

#include <stdio.h>
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
static u8 OnRecWave1(u8* pMsg);
static u8 OnRecWave2(u8* pMsg);

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
static u8 OnRecWave1(u8* pMsg) {
    printf("Print rec wave1 data:0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x \n", pMsg[0], pMsg[1],
           pMsg[2], pMsg[3], pMsg[4], pMsg[5]);

    return (CMD_ACK_OK);
}

/*********************************************************************************************************
* 函数名称:
* 函数功能:
* 输入参数:
* 输出参数:
* 返 回 值:
* 创建日期:
* 注    意:
*********************************************************************************************************/
static u8 OnRecWave2(u8* pMsg) {
    printf("Print rec wave2 data:0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x \n", pMsg[0], pMsg[1],
           pMsg[2], pMsg[3], pMsg[4], pMsg[5]);

    return (CMD_ACK_OK);
}

/*********************************************************************************************************
*                                              API函数实现
*********************************************************************************************************/
/*********************************************************************************************************
* 函数名称: InitProcMCUData
* 函数功能:  
* 输入参数: 
* 输出参数: 
* 返 回 值: 
* 创建日期: 
* 注    意:
*********************************************************************************************************/
void InitProcMCUData(void) {
    
}

/*********************************************************************************************************
* 函数名称: ProcMCUData
* 函数功能:  
* 输入参数: 
* 输出参数: 
* 返 回 值: 
* 创建日期: 
* 注    意:
*********************************************************************************************************/
void ProcMCUData(u8 recData) {
    StructPackType pack;
    
    while(UnPackData(recData)) {
        pack = GetUnPackRslt();
        switch (pack.packModuleId) {
            case MODULE_WAVE1:
                if(DAT_WAVE1_WDATA == pack.packSecondId) {
                    OnRecWave1(pack.arrData);
                }
                break;
            case MODULE_WAVE2:
                if(DAT_WAVE2_WDATA == pack.packSecondId) {
                    OnRecWave2(pack.arrData);
                }
                break;
            default:
                break;
        }
    }
}