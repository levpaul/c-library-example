#include "math.h"

// "Private" method definitions
static math_result_t add(int, int, int *);
static math_result_t sub(int, int, int *);

math_result_t add(int a, int b, int *res)
{
    *res = a + b;
    return MATH_RESULT_OK;
}

math_result_t sub(int a, int b, int *res)
{
    *res = a - b;
    return MATH_RESULT_OK;
}

math_result_t math_execute(math_request_t mreq)
{
    if (mreq.cmd == math_command_add)
    {
        return add(mreq.arg1, mreq.arg2, mreq.res);
    }
    else if (mreq.cmd == math_command_sub)
    {
        return sub(mreq.arg1, mreq.arg2, mreq.res);
    }
    else
    {
        return MATH_RESULT_ERR;
    }

    return MATH_RESULT_OK;
}