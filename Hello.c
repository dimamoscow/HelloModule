#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int kaf = 304;
module_param(kaf, int, 0);

static int faculty = 3;
module_param(faculty, int, 0);

static int __init hello_init(void)
{
	pr_alert("Module loaded\n");
	pr_alert("My kafedra %d and my faculty %d\n", kaf, faculty);
	return 0;
}

static void __exit hello_exit(void)
{
	pr_alert("Module remove");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Dmitriy Motsik <dimaaansc@gmail.com>");



