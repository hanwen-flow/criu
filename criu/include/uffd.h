#ifndef __CR_UFFD_H_
#define __CR_UFFD_H_

#define LAZY_PAGES_SOCK_NAME "lazy-pages.socket"

struct task_restore_args;

extern int uffd_open(int flags, unsigned long *features, int *err);
extern bool uffd_noncooperative(void);
extern int setup_uffd(int pid, struct task_restore_args *task_args);
extern int lazy_pages_setup_zombie(int pid);
extern int prepare_lazy_pages_socket(void);
extern int lazy_pages_finish_restore(void);

#endif /* __CR_UFFD_H_ */
