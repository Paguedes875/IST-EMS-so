#define MAX_RESERVATION_SIZE 256
#define STATE_ACCESS_DELAY_US 500000  // 500ms
#define MAX_JOB_FILE_NAME_SIZE 256
#define MAX_SESSION_COUNT 1  // 8 --- number they had as default

// Lenghts
#define CLIENT_PIPE_MAX_LEN 40
#define OP_CODE_LEN 1

// OP codes
#define OP_CODE_SETUP_REQUEST '1'
#define OP_CODE_QUIT_REQUEST '2'
#define OP_CODE_CREATE_REQUEST '3'
#define OP_CODE_RESERVE_REQUEST '4'
#define OP_CODE_SHOW_REQUEST '5'
#define OP_CODE_LIST_REQUEST '6'
