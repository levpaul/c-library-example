#include <stdint.h>

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
    uint32_t arg1;
    uint32_t arg2;
    uint32_t *res;
} math_request_t;

math_result_t math_execute(math_request_t);