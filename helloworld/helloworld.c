#include <linux/init.h>
#include <linux/module.h>

static int helloworld_init(void) {
    printk(KERN_INFO "hello world!\n");

    return 0;
}

static int helloworld_exit(void) {
    printk(KERN_INFO "see you.\n");

    return 0;
}

module_init(helloworld_init);
module_exit(helloworld_exit);
