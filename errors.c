//错误处理
//俱源懋 2016010910004

#include "errors.h"

#include <stdio.h>
#include <stdlib.h>

void error_handle(int error_no)
{
    perror(errors[error_no]);
    exit(error_no);
}
