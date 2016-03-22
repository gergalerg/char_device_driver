obj-m += hello.o

SHELL_VER:=$(shell uname -r)

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

test:
	M=$(PWD)

	@echo $(SHELL_VER)
	@ls /lib/modules/$(shell uname -r)/build

