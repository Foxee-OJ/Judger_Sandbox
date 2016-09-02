#ifndef JUDGER_CHILD_H
#define JUDGER_CHILD_H

#include "runner.h"

#define CHILD_ERROR_EXIT(error_code)\
    {\
        LOG_ERROR(error_code);  \
        raise(SIGUSR1);  \
        return -1; \
    }


int child_process(void *config);

#endif //JUDGER_CHILD_H