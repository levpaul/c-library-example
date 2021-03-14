#include "main.h"

int main()
{
    math_request_t mreq;
    mreq.cmd = math_command_add;
    mreq.arg1 = 23;
    mreq.arg2 = 45;
    mreq.res = malloc(sizeof(int));
    math_result_t exec_res = math_execute(mreq);

    exec_res = math_execute(mreq);
    printf("Add execute of %d + %d = %d | ERROR=%d\n", mreq.arg1, mreq.arg2, *mreq.res, exec_res);

    mreq.cmd = math_command_sub;
    exec_res = math_execute(mreq);
    printf("Sub execute of %d + %d = %d | ERROR=%d\n", mreq.arg1, mreq.arg2, *mreq.res, exec_res);

    mreq.cmd = 42;
    exec_res = math_execute(mreq);
    printf("Unknown command execute of %d + %d = %d | ERROR=%d\n", mreq.arg1, mreq.arg2, *mreq.res, exec_res);

    free(mreq.res);
    return 0;
}
