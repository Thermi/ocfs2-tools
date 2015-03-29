#
# Spec file for ocfs-tools
#

# Macros
# This one is hardcoded because, well, it belongs there
%define _prefix /usr
# Because RPM is dumb
%define _unpackaged_files_terminate_build 1

%define compile_py 1

Summary: Tools for managing the Oracle Cluster Filesystem 2
Name: ocfs2-tools
Version: 1.6.4
Release: 2.2
License: GPL
Group: System Environment/Kernel
Source: ocfs2-tools-1.6.4.tar.gz
URL: http://oss.oracle.com/projects/ocfs2-tools/
Distribution: Oracle
Vendor: Oracle
Packager: nobody <nobody@oracle.com>
Exclusiveos: Linux
Requires: bash, which, coreutils, net-tools, modutils, e2fsprogs, chkconfig, glib2 >= 2.2.3, util-linux >= 2.12j, gettext, at, file, mailx, time, libuuid, readline
BuildRequires: e2fsprogs-devel, glib2-devel >= 2.2.3, pygtk2 >= 1.99.16, python-devel >= 2.6, util-linux >= 2.12j, libuuid-devel, readline-devel, gcc
#AutoReqProv: No

BuildRoot: %{_tmppath}/ocfs2-tools-%{PACKAGE_VERSION}-%{PACKAGE_RELEASE}-root

%description
Tools to manage Oracle Cluster Filesystem 2 volumes.


%package -n ocfs2console
Summary: GUI frontend for OCFS2 management
Group: System Environment/Kernel
Requires: e2fsprogs glib2 >= 2.2.3 vte >= 0.11.10 pygtk2 >= 1.99.16 python >= 2.6 ocfs2-tools = %{version} redhat-rpm-config
AutoReqProv: No


%description -n ocfs2console
GUI frontend for management and debugging of Oracle Cluster Filesystem 2
volumes.


%package -n ocfs2-tools-devel
Summary: Headers and static archives for ocfs2-tools
Group: Development/Libraries
Requires: e2fsprogs-devel, glib2-devel >= 2.2.3, ocfs2-tools = %{version}
AutoReqProv: No

%description -n ocfs2-tools-devel
ocfs2-tools-devel contains the libraries and header files needed to
develop ocfs2 filesystem-specific programs.


%prep
%setup -n ocfs2-tools-%{version}


%build
%configure --disable-debug --prefix=/usr --mandir=/usr/share/man --libdir=%{_libdir}
make


%install

mkdir -p $RPM_BUILD_ROOT/etc/init.d
cp -f vendor/common/o2cb.init $RPM_BUILD_ROOT/etc/init.d/o2cb
cp -f vendor/common/ocfs2.init $RPM_BUILD_ROOT/etc/init.d/ocfs2
if [ -f /etc/redhat-release ]
then
    # Red Hat chkconfig is completely and utterly broken
    perl -p -i -e 'BEGIN() { $k=0;}  if (/^###/) { $k++ } elsif ($k == 1) { printf "#"};' $RPM_BUILD_ROOT/etc/init.d/o2cb
    perl -p -i -e 'BEGIN() { $k=0;}  if (/^###/) { $k++ } elsif ($k == 1) { printf "#"};' $RPM_BUILD_ROOT/etc/init.d/ocfs2
fi
mkdir -p $RPM_BUILD_ROOT/etc/sysconfig
cp -f vendor/common/o2cb.sysconfig $RPM_BUILD_ROOT/etc/sysconfig/o2cb

make DESTDIR="$RPM_BUILD_ROOT" install

%if %{compile_py}
%{__python} -c "import compileall; compileall.compile_dir('$RPM_BUILD_ROOT/%python2_sitelib/ocfs2interface', ddir='%python2_sitelib/ocfs2interface')"
%endif


%clean
rm -rf "$RPM_BUILD_ROOT"


%post
/sbin/chkconfig --add o2cb >/dev/null
/sbin/chkconfig --add ocfs2 >/dev/null

%preun
if [ $1 = 0 ]; then     # execute this only if we are NOT doing an upgrade
	/sbin/chkconfig --del ocfs2 >/dev/null
	/sbin/chkconfig --del o2cb >/dev/null
fi

%files
%defattr(-,root,root)
%doc README.O2CB COPYING CREDITS MAINTAINERS
%doc documentation/users_guide.txt
/sbin/fsck.ocfs2
/sbin/mkfs.ocfs2
/sbin/mounted.ocfs2
/sbin/tunefs.ocfs2
/sbin/debugfs.ocfs2
/sbin/o2cb_ctl
/sbin/mount.ocfs2
/sbin/o2image
/sbin/ocfs2_hb_ctl
/usr/bin/o2info
/usr/sbin/o2hbmonitor
/etc/init.d/o2cb
/etc/init.d/ocfs2
%config(noreplace) /etc/sysconfig/o2cb
/usr/share/man/man8/debugfs.ocfs2.8.gz
/usr/share/man/man8/fsck.ocfs2.8.gz
/usr/share/man/man8/fsck.ocfs2.checks.8.gz
/usr/share/man/man8/mkfs.ocfs2.8.gz
/usr/share/man/man8/tunefs.ocfs2.8.gz
/usr/share/man/man8/mount.ocfs2.8.gz
/usr/share/man/man8/mounted.ocfs2.8.gz
/usr/share/man/man8/o2cb_ctl.8.gz
/usr/share/man/man8/ocfs2_hb_ctl.8.gz
/usr/share/man/man8/o2image.8.gz
/usr/share/man/man7/o2cb.7.gz
/usr/share/man/man1/o2info.1.gz


%files -n ocfs2console
%defattr(-,root,root)
%{_libdir}/python2.*/site-packages/ocfs2interface
/usr/sbin/ocfs2console
/usr/share/man/man8/ocfs2console.8.gz

%files -n ocfs2-tools-devel
%defattr(-,root,root)
%{_libdir}/*.a
%{_libdir}/pkgconfig/*.pc
%{_includedir}/ocfs2-kernel
%{_includedir}/o2cb
%{_includedir}/o2dlm
%{_includedir}/ocfs2



%changelog
* Thu Jan 27 2005 Manish Singh <manish.singh@oracle.com>
- Add ocfs2console

* Fri Jan 21 2005 Manish Singh <manish.singh@oracle.com>
- Initial rpm spec