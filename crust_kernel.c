#include "include/crust_kernel.h"

#include <mini-os/os.h>
#include <mini-os/hypervisor.h>
#include <mini-os/events.h> // init_events()
#include <mini-os/lib.h> /* for printk, memcpy */

void start_crust(void) {
//	init_events();
//	__sti(
	printk("Do a thing????????????????????????\n");
	while(1);
}

/*
 * do_exit: This is called whenever an IRET fails in entry.S.
 * This will generally be because an application has got itself into
 * a really bad state (probably a bad CS or SS). It must be killed.
 * Of course, minimal OS doesn't have applications :-)
 */

void do_exit(void)
{
    printk("Do_exit called!\n");
    arch_do_exit();
    for( ;; )
    {
        struct sched_shutdown sched_shutdown = { .reason = SHUTDOWN_crash };
        HYPERVISOR_sched_op(SCHEDOP_shutdown, &sched_shutdown);
    }
}

void exit_thread(void)
{
	return;
}

