#include <stdlib.h>

typedef enum
{
    MATH_RESULT_OK,
    MATH_RESULT_ERR,
} math_result_t;

typedef enum
{
    math_command_add,
    math_command_sub,
} math_command_t;

typedef struct
{
    math_command_t cmd;
    int arg1;
    int arg2;
    int *res;
} math_request_t;

math_result_t math_execute(math_request_t);