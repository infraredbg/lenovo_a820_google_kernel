include $(srctree)/drivers/misc/mediatek/Makefile.custom


obj-y   +=  alsps.o

ifeq ($(CONFIG_MTK_APDS9930),y)
obj-y	+=  APDS9930/
endif

ifeq ($(CONFIG_MTK_APDS9930_rpr400),y)
obj-y	+=  APDS9930_rpr400/
endif
