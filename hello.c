#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/moduleparam.h>
#include <linux/fs.h>
#include <linux/kdev_t.h>

#define DRIVER_AUTHOR "Greg Russell <greg@greg.com>";
#define DRIVER_DESC "A sample Driver";


//static int scull_major;

#define DEVICE_NAME "chardev";

static int __init hello3_init(void)
{

    dev_t dev = MKDEV(248, 1);
    return 0;
}

static void __exit hello3_exit(void)
{
    printk(KERN_INFO "Goodbye World\n");
}

module_init(hello3_init);
module_exit(hello3_exit);

MODULE_LICENSE("GPL");

MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);

MODULE_SUPPORTED_DEVICE("testdevice");