# error_handle

## 名称

error_handle 定义错误及处理错误

## 摘要

`# include <errors.h>`

`void error_handle(int error_no);`

## 描述

输入errors数组对应的下标(error_no)，将报告相应的错误，并以error_no为状态码退出程序。

对于超出数组下标的行为未定义。

## 另见

- [errors.h](./errors.h.md)

- [errors](./errors.md)
