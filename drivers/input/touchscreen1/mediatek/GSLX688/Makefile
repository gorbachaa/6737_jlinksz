# Linux driver folder
ccflags-y += -I$(srctree)/drivers/input/touchscreen/mediatek/GSLX688/include/
ccflags-y += -I$(srctree)/drivers/input/touchscreen/mediatek/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat/$(MTK_PLATFORM)/include/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/sensors-1.0/hwmon/include/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/sensors-1.0/alsps/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/power/mt6735/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat/$(MTK_PLATFORM)/include/mach/

#ccflags-y += -DGSL_DEBUG
#ccflags-y += -DTPD_PROC_DEBUG
#ccflags-y += -DGSL_MONITOR


obj-y	+= obj/
obj-y	+=  gslx680.o
obj-y	+=  tpd_gsl.o

