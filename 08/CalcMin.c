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
#include "CalcMin.h"
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
* 函数名称: InitCalcMin
* 函数功能:  
* 输入参数: 
* 输出参数: 
* 返 回 值: 
* 创建日期: 
* 注    意:
*********************************************************************************************************/
void InitCalcMin(void) {

}
/*********************************************************************************************************
* 函数名称: CalcMin
* 函数功能:
* 输入参数:
* 输出参数:
* 返 回 值:
* 创建日期:
* 注    意:
*********************************************************************************************************/
short CalcMin(int tick) {
    short min;

    min = (tick % 3600) / 60;

    return (min);
}