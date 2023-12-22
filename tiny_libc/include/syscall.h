#ifndef __SYSCALL_H__
#define __SYSCALL_H__

// <<<<<<< HEAD
// #define SYSCALL_SLEEP 2
// #define SYSCALL_YIELD 7
// #define SYSCALL_WRITE 20
// #define SYSCALL_CURSOR 22
// #define SYSCALL_REFLUSH 23
// #define SYSCALL_GET_TIMEBASE 30
// #define SYSCALL_GET_TICK 31
// #define SYSCALL_LOCK_INIT 40
// #define SYSCALL_LOCK_ACQ 41
// #define SYSCALL_LOCK_RELEASE 42
// #define SYSCALL_THREAD_CREATE 43
// #define SYSCALL_THREAD_YIELD 44
// =======
#define SYSCALL_EXEC 0
#define SYSCALL_EXIT 1
#define SYSCALL_SLEEP 2
#define SYSCALL_KILL 3
#define SYSCALL_WAITPID 4
#define SYSCALL_PS 5
#define SYSCALL_GETPID 6
#define SYSCALL_YIELD 7
#define SYSCALL_WRITE 20
#define SYSCALL_READCH 21
#define SYSCALL_CURSOR 22
#define SYSCALL_REFLUSH 23
#define SYSCALL_CLEAR 24
#define SYSCALL_GET_TIMEBASE 30
#define SYSCALL_GET_TICK 31
#define SYSCALL_SEMA_INIT 36
#define SYSCALL_SEMA_UP 37
#define SYSCALL_SEMA_DOWN 38
#define SYSCALL_SEMA_DESTROY 39
#define SYSCALL_LOCK_INIT 40
#define SYSCALL_LOCK_ACQ 41
#define SYSCALL_LOCK_RELEASE 42
#define SYSCALL_SHOW_TASK 43
#define SYSCALL_BARR_INIT 44
#define SYSCALL_BARR_WAIT 45
#define SYSCALL_BARR_DESTROY 46
#define SYSCALL_COND_INIT 47
#define SYSCALL_COND_WAIT 48
#define SYSCALL_COND_SIGNAL 49
#define SYSCALL_COND_BROADCAST 50
#define SYSCALL_COND_DESTROY 51
#define SYSCALL_MBOX_OPEN 52
#define SYSCALL_MBOX_CLOSE 53
#define SYSCALL_MBOX_SEND 54
#define SYSCALL_MBOX_RECV 55
#define SYSCALL_SHM_GET 56
#define SYSCALL_SHM_DT 57
#define SYSCALL_NET_SEND 63
#define SYSCALL_NET_RECV 64

#define SYSCALL_TASK_SET 8
#define SYSCALL_TASK_SETP 9
#define SYSCALL_THREAD_CREATE 10
#define SYSCALL_FORK 11
#define SYSCALL_NET_RECV_STREAM 12

#define SYSCALL_MKFS 65
#define SYSCALL_STATFS 66
#define SYSCALL_CD 67
#define SYSCALL_MKDIR 68
#define SYSCALL_LS 69
#define SYSCALL_RMDIR 70
#define SYSCALL_GETPWDNAME 71

#endif