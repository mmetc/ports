PORTNAME=	choqok
DISTVERSION=	1.7.0
PORTREVISION=	0
CATEGORIES=	www kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${PORTVERSION:R}/src
DIST_SUBDIR=	KDE/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE micro-blogging client

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libqjson-qt5.so:devel/qjson \
		libqoauth-qt5.so:net/qoauth-qt5 \
		libtelepathy-qt5.so:net-im/telepathy-qt

USES=		cmake compiler:c++11-lib gettext kde:5 pkgconfig qca qt:5 tar:xz
USE_KDE=	attica auth bookmarks codecs completion config configwidgets \
		coreaddons doctools ecm emoticons globalaccel guiaddons i18n \
		itemviews jobwidgets kcmutils kdewebkit kio notifications \
		notifyconfig parts purpose service solid sonnet textwidgets \
		wallet widgetsaddons xmlgui \
		kded_run
USE_QT=		concurrent core dbus gui network networkauth webkit widgets xml \
		buildtools_build qmake_build

USE_LDCONFIG=	yes

.include <bsd.port.mk>
