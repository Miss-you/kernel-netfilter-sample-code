KERNEL_VER = $(shell uname -r)

# the file to compile
obj-m += helloworld.o

# specify flags for the module compilation
EXTRA_CFLAGS = -g -O0

build: kernel_modules

kernel_modules:
	 #make -C /lib/modules/`uname -r`/build M=$(PWD) modules
	make -C /lib/modules/$(KERNEL_VER)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(KERNEL_VER)/build M=$(PWD) clean

