#ifndef _ZHOU_CHAT_CLI_H_
#define _ZHOU_CHAT_CLI_H_

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/*
 *进行数据交换，实现聊天功能：
 *1.从键盘(stdin)读取信息发送到服务器
 *2.时刻从套接字接受字符并且打印到屏幕上
 */
int zhou_chat_cli(FILE *fp, const int connfd);
#endif

