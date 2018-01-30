#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");

MODULE_AUTHOR("Vivek Raj");

MODULE_DESCRIPTION("Hello World LKM");

MODULE_VERSION("0.1");

static int hello_world_start(void) 
{
	printk(KERN_INFO "Hello World\n");
	return 0;
}

static void hello_world_end(void)
{
	printk(KERN_DEBUG "Goodbye\n");
}

module_init(hello_world_start);
module_exit(hello_world_end);

