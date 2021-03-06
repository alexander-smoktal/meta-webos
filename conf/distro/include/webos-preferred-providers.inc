# Copyright (c) 2012-2013 LG Electronics, Inc.

# Place distro-wide PREFERRED_PROVIDER settings here; place MACHINE-specific
# settings in <MACHINE>.conf .

# Prefer libjpeg-turbo from meta-oe as it provides SIMD optimizations
PREFERRED_PROVIDER_jpeg = "libjpeg-turbo"
PREFERRED_PROVIDER_jpeg-native = "libjpeg-turbo-native"

# Just for documentation; these values are the defaults set in the recipes that
# use them.
VIRTUAL-RUNTIME_cpushareholder = "cpushareholder-stub"
VIRTUAL-RUNTIME_rdx-utils = "rdx-utils-stub"

# Fonts used by the browser
VIRTUAL-RUNTIME_browser_fonts = "isis-fonts"

# TODO: find what is needed from initscripts and merge that to webos-initscripts
VIRTUAL-RUNTIME_initscripts = "initscripts webos-initscripts webos-shutdownscripts"

# Other alternatives are sysvinit, systemd
VIRTUAL-RUNTIME_init_manager = "upstart"

# With upstart we don't need update-rc.d, as bonus fixes following avahi issue for us:
# http://lists.openembedded.org/pipermail/openembedded-core/2013-November/086901.html
BAD_RECOMMENDATIONS += "update-rc.d"
UPDATERCD_class-target = ""
