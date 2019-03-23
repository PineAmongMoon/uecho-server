//日志功能
//俱源懋

#include <stdio.h>
#include <time.h>

#include "log.h"
#include "errors.h"

void write_log(const char * format, ... )
{
    static time_t t;
    static FILE * log_file;
    va_list args;

    log_file = fopen("uecho.log", "a");
    if (log_file == NULL)
        error_handle(3);
    time(&t);
    fprintf(log_file, "UTC: %s", asctime(gmtime(&t)));
    va_start(args, format);
    vfprintf(log_file, format, args);
    fclose(log_file);
}