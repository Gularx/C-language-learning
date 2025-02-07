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
#ifndef _PROC_HOST_CMD_H_
#define _PROC_HOST_CMD_H_
/*********************************************************************************************************
*                                              包含头文件
*********************************************************************************************************/
#include "DataType.h"
/*********************************************************************************************************
*                                              宏定义
*********************************************************************************************************/

/*********************************************************************************************************
*                                              枚举结构体定义
*********************************************************************************************************/
typedef enum {
    CMD_ACK_OK,
    CMD_ACK_CHECKSUM,
    CMD_ACK_LEN,
    CMD_ACK_BAD_CMD,
    CMD_ACK_PARAM_ERR,
    CMD_ACK_NOT_ACC
}EnumCmdAckType;

/*********************************************************************************************************
*                                              API函数声明
*********************************************************************************************************/
void InitProcHostCmd(void);
void ProcHostCmd(u8 recData);

#endif //_PROC_HOST_CMD_H_