# errors.h

## 名称

errors.h 定义错误及处理错误

## 摘要

`# include <errors.h>`

## 描述

所有函数声明如下:

void error_handle(int error_no);

在对应的c文件中，定义了`const char * const errors[]`数字，用以定义所以错误类型

## 另见

- [errors](./errors.md)

- [error_handle](./error_handle.md)
