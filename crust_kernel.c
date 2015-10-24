#include "include/crust_kernel.h"

#include <mini-os/os.h>
#include <mini-os/hypervisor.h>
#include <mini-os/mm.h>
#include <mini-os/events.h> // init_events()
#include <mini-os/lib.h> /* for printk, memcpy */

void start_crust(void) {
//	init_events();
//	__sti(
	printk("Do a thing????????????????????????\n");
	while(1);
}

