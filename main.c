#include "main.h"

int main()
{
    math_request_t mreq;
    mreq.cmd = math_command_add;
    mreq.arg1 = 230;
    mreq.arg2 = 45;
    mreq.res = malloc(sizeof(uint32_t));
    math_result_t exec_res = math_execute(mreq);

    exec_res = math_execute(mreq);
    printf("Add execute of %u + %u = %u | ERROR=%u\n", mreq.arg1, mreq.arg2, *mreq.res, exec_res);

    mreq.cmd = math_command_sub;
    exec_res = math_execute(mreq);
    printf("Sub execute of %u - %u = %u | ERROR=%u\n", mreq.arg1, mreq.arg2, *mreq.res, exec_res);

    mreq.cmd = 42;
    exec_res = math_execute(mreq);
    printf("Unknown command execute of %u, %u = %u | ERROR=%u\n", mreq.arg1, mreq.arg2, *mreq.res, exec_res);

    mreq.cmd = math_command_sub;
    mreq.arg1 = 1;
    mreq.arg2 = 2;
    exec_res = math_execute(mreq);
    printf("Sub execute of %u - %u = %u | ERROR=%u\n", mreq.arg1, mreq.arg2, *mreq.res, exec_res);

    mreq.cmd = math_command_add;
    mreq.arg1 = ~0;
    mreq.arg2 = 1;
    exec_res = math_execute(mreq);
    printf("Add execute of %u + %u = %u | ERROR=%u\n", mreq.arg1, mreq.arg2, *mreq.res, exec_res);

    free(mreq.res);
    return 0;
}
