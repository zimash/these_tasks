#include <linux/init.h>
#include <linux/module.h>

static int __init task0x01_init(void) {
	printk(KERN_DEBUG "%s Hello World!\n", module_name(THIS_MODULE));
	return 0;
}

static void __exit task0x01_exit(void) {
	printk(KERN_DEBUG "%s Exit task0x01\n", module_name(THIS_MODULE));
}

module_init(task0x01_init);
module_exit(task0x01_exit);

MODULE_LICENSE("GPL");
