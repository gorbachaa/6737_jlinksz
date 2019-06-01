#
# Makefile for the touchscreen drivers.
#

# Each configuration option enables a list of files.
obj-$(CONFIG_MESON_INPUT_TOUCHSCREEN) 				+= common.o
obj-$(CONFIG_GSLX680_CAPACITIVE_TOUCHSCREEN)			+= gslx680.o aml_gsl_common.o
obj-$(CONFIG_GSLX680B_CAPACITIVE_TOUCHSCREEN)			+= gslx680B.o
obj-$(CONFIG_TOUCHSCREEN_MTK)        	+= gslx680_compatible.o aml_gsl_common.o

#obj-m += gsl_point_id.o
#gsl_point_id-objs += gsl_point_id_z.o aml_gsl_module.o

obj-y += gslx680/

