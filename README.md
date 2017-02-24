# HelloModule
My first module for Linux Kernel. This module print "Hello" and my university info.

The source file is **hello.c**
Just run make to build the **Hello.ko** file:
	
	sudo make

Loading module with **insmod**:

	sudo insmod Hello.ko

When loading a module fails, insmod often doesn't give you
enough details!

Loading module with parameters, trough **insmod**:

	sudo insmod Hello.ko kaf="" faculty=""

When a new module is loaded, related information is available in
the kernel log. Kernel log messages are available through the dmesg.

	dmesg | tail

Module info:

	modinfo Hello.ko

Remove module:
	
	sudo rmmod Hello.ko




