PORTNAME=	oxygen
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11-themes kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 Oxygen style

LICENSE=	GPLv2 LGPL21
LICENSE_COMB=	multi

USES=		cmake compiler:c++11-lib gettext kde:5 pkgconfig qt:5 tar:xz \
		xorg
USE_LDCONFIG=	yes
USE_KDE=	auth codecs completion config configwidgets coreaddons \
		decoration ecm frameworkintegration guiaddons i18n kcmutils \
		service wayland widgetsaddons windowsystem
USE_QT=		core dbus declarative gui network widgets x11extras xml \
		buildtools_build qmake_build
USE_XORG=	xcb

.include <bsd.port.mk>
