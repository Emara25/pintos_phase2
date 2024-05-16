#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

// added headers
#include "threads/interrupt.h"
#include "threads/thread.h"
#include "stdbool.h"
// end of added headers

void syscall_init(void);
// added methods
/* lock required for functions */
struct lock required_lock;

// system calls _____________________________________________________________________________
void sys_halt();
void sys_exit(int status);
tid_t  sys_wait(tid_t tid);
int sys_create(const char *file, unsigned initial_size);
int sys_remove(const char* file);
int sys_open(const char* file);
struct open_file* sys_file(int fd);
int sys_read(int fd, void* buffer, unsigned size);
int sys_write(int fd, const void* buffer, unsigned size);
void sys_seek(struct intr_frame *f);
void sys_tell(struct intr_frame *f);
int close(int fd);
// end of added methods  ___________________________________________________________________________

#endif /* userprog/syscall.h */