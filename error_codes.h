#ifndef ERROR_CODES_H
#define ERROR_CODES_H

enum ERRORS {
    WRONG_ARGUMENTS_NUMBER = 1,
    INVALID_ARGUMENT,
    SIGACTION_ERROR,
    PROTOCOL_NUMBER_UNKNOWN,
    HOST_RESOLVING_ERROR,
    SOCKET_OPENING_ERROR,
    MEM_ALLOCATION_ERROR,
    SETTING_TTL_FAILED,
    SEND_ERROR,
    CLOCK_ERROR,
    POLL_ERROR,
    RECV_ERROR,
    INTERRUPTED
};

#endif
