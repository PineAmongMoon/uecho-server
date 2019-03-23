//错误处理
//俱源懋 2016010910004

#ifndef ERRORS_H
#define ERRORS_H

// 定义所有错误类型
const char * errors[] = {
    "",                                 // 0 保留
    "UDP scoket creation error",        // 1 UDP创建错误
    "bind error"                        // 2 绑定错误
};

// 错误处理
void error_handle(int error_no);

#endif /* ERROR_H */
