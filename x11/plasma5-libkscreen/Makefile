PORTNAME=	libkscreen
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11 kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 screen management library

USES=		cmake compiler:c++11-lib kde:5 pathfix pkgconfig qt:5 tar:xz \
		xorg
USE_KDE=	plasma-wayland-protocols wayland \
		ecm_build
USE_QT=		core dbus gui x11extras \
		buildtools_build qmake_build testlib_build
USE_XORG=	x11 xcb xrandr

.include <bsd.port.mk>
