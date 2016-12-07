
include $(srctree)/drivers/misc/mediatek/Makefile.custom

# Module project related part

# Accelerometer
ifeq ($(CONFIG_MTK_BMA222E),y)
obj-y	+=  accelerometer/bma222E/
endif

# ALSPS
ifeq ($(CONFIG_MTK_APDS9930),y)
obj-y	+=  alsps/APDS9930/
endif


ifneq ($(CONFIG_ARCH_MTK_PROJECT),)
ARCH_MTK_PROJECT := $(shell echo $(CONFIG_ARCH_MTK_PROJECT))
obj-y	+= core/
obj-y	+= dct/dct/
endif

obj-y   +=  lcm/
#obj-y	+=  hdmi/
obj-y	+=  camera/camera/
obj-y	+=  imgsensor/ov8825_mipi_raw/
obj-y 	+=  flashlight/constant_flashlight/
obj-y	+=  vibrator/
obj-y	+=  leds/
obj-y	+=  keypad/
obj-y	+=  sound/
obj-y	+=  accdet/
obj-y	+=  wmt/
