CURRENT = $(shell uname -r)
KDIR = /lib/modules/$(CURRENT)/build
PWD = $(shell pwd)
DEST = /lib/modules/$(CURRENT)/misc

TARGET = task0x01
obj-m := $(TARGET).o

default:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	@rm -f *.o .*.cmd .*.flags *.mod.c *.mod *.order
	@rm -f .*.*.cmd *.symvers *~ *.*~ TODO.* *.ko
	@rm -fR .tmp*
	@rm -rf .*tmp_versions
