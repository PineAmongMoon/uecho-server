//错误处理
//俱源懋 2016010910004

#include "errors.h"

#include <stdio.h>
#include <stdlib.h>

// 定义所有错误类型
const char * const errors[] = {
    "",                                 // 0 保留
    "UDP scoket creation error",        // 1 UDP创建错误
    "bind error",                       // 2 绑定错误
    "log file error",                   // 3 日志文件错误
};

void error_handle(int error_no)
{
    perror(errors[error_no]);
    exit(error_no);
}
