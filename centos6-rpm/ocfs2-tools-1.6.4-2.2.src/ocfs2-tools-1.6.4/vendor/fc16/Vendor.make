#
# Fedora 16
#

TOOLSARCH = $(shell $(TOPDIR)/vendor/fc16/rpmarch.guess tools $(TOPDIR))
VENDOR_EXTENSION = fc16

include $(TOPDIR)/vendor/common/Vendor.make

packages: rpm
