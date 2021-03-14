#include "math.h"

// "Private" method definitions
static math_result_t add(uint32_t, uint32_t, uint32_t *);
static math_result_t sub(uint32_t, uint32_t, uint32_t *);

math_result_t add(uint32_t a, uint32_t b, uint32_t *res)
{
    *res = a + b;
    if (*res < a)
    { // Overflow error
        return MATH_RESULT_ERR;
    }
    return MATH_RESULT_OK;
}

math_result_t sub(uint32_t a, uint32_t b, uint32_t *res)
{
    if (a < b)
    { // Underflow error
        return MATH_RESULT_ERR;
    }
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