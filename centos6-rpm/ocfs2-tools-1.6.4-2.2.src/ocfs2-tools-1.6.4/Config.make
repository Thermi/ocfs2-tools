PACKAGE = ocfs2-tools
VERSION = 1.6.4

DIST_VERSION = 1.6.4

MAJOR_VERSION = 1
MINOR_VERSION = 6
MICRO_VERSION = 4
EXTRA_VERSION = 

SHELL = /bin/sh

prefix = /usr
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
sbindir = /usr/bib
includedir = ${prefix}/include
libdir = ${exec_prefix}/lib
datadir = ${prefix}/share
sysconfdir = /etc
mandir = ${prefix}/man

root_prefix = 
root_bindir = ${root_prefix}/bin
root_sbindir = ${root_prefix}/sbin
root_sysconfdir = ${root_prefix}/etc

pyexecdir = ${exec_prefix}/lib/python2.7/site-packages

top_builddir = .

INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_LIBRARY = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_HEADER = ${INSTALL} -m 644

LN_S = ln -s

CC = gcc
CPP = gcc -E
AR = /usr/bin/ar
RANLIB = ranlib

WARNINGS = -Wall -Wstrict-prototypes -Wmissing-prototypes \
	   -Wmissing-declarations

CFLAGS = -O2
CFLAGS += $(WARNINGS)
CPPFLAGS = 
LDFLAGS =  

VENDOR = 

COM_ERR_CFLAGS = -I/usr/include/et 
COM_ERR_LIBS = -lcom_err 
UUID_LIBS = -luuid
READLINE_LIBS = -lreadline
NCURSES_LIBS = -lncurses

GLIB_CFLAGS = -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include 
GLIB_LIBS = -lglib-2.0 

PYTHON = /usr/bin/python2
PYTHON_INCLUDES = -I/usr/include/python2.7

BLKID_CFLAGS = -I/usr/include/blkid -I/usr/include/uuid 
BLKID_LIBS = -lblkid 

HAVE_BLKID = yes

LIBDLM_FOUND = 

BUILD_OCFS2CONSOLE = yes

BUILD_DEBUGOCFS2 = yes

HAVE_COROSYNC = 
BUILD_OCFS2_CONTROLD = 
BUILD_PCMK_SUPPORT = 
BUILD_CMAN_SUPPORT = 
BUILD_FSDLM_SUPPORT = 
CPG_LDFLAGS = 
AIS_LDFLAGS = 
DL_LIBS = 

OCFS2_DEBUG = 

OCFS2_DEBUG_EXE = 

OCFS2_DYNAMIC_FSCK = yes
OCFS2_DYNAMIC_CTL = yes
