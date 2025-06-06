PORTNAME=	xfce4-systemload-plugin
PORTVERSION=	1.3.3
CATEGORIES=	sysutils xfce
MASTER_SITES=	XFCE/panel-plugins
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	System Load plugin for Xfce4 panel
WWW=		https://docs.xfce.org/panel-plugins/xfce4-systemload-plugin/start

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libharfbuzz.so:print/harfbuzz \
		libpolkit-gobject-1.so:sysutils/polkit

USES=		compiler:c11 gettext-tools gmake gnome libtool pkgconfig \
		tar:bzip2 xfce
USE_GNOME=	cairo gdkpixbuf gtk30
USE_XFCE=	libmenu panel xfconf

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-libgtop
INSTALL_TARGET=	install-strip
SSP_UNSAFE=	yes

OPTIONS_DEFINE=		NLS UPOWER # LIBGTOP
OPTIONS_DEFAULT=	UPOWER
OPTIONS_SUB=		yes

# Enabling libgtop causes crashes, needs investigation
#LIBGTOP_DESC=	Use libgtop for network utilization monitoring
UPOWER_DESC=	Use upower for adapting update interval to power state

#LIBGTOP_LIB_DEPENDS=		libgtop-2.0.so:devel/libgtop
#LIBGTOP_CONFIGURE_ENABLE=	libgtop

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

UPOWER_LIB_DEPENDS=		libupower-glib.so:sysutils/upower
UPOWER_CONFIGURE_ENABLE=	upower

.include <bsd.port.mk>
