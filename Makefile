GCC=gcc
obj-m += hello.o
#obj-m += hello-5.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

.PHONY: clean
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

.PHONY: test
test: test.o
	$(GCC)  $< -o test
	


