PORTNAME=	crow-translate
PORTVERSION=	2.10.5
CATEGORIES=	textproc

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Translator using Google, Yandex Bing, LibreTranslate and Lingva
WWW=		https://crow-translate.github.io/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${LOCALBASE}/share/ECM/cmake/ECMConfig.cmake:devel/kf5-extra-cmake-modules
LIB_DEPENDS=	libleptonica.so:graphics/leptonica \
		libtesseract.so:graphics/tesseract

USES=		cmake desktop-file-utils gstreamer kde:5 qt:5 xorg
USE_GITHUB=	yes
GH_TUPLE=	HatScripts:circle-flags:2225d10:circleflags/data/icons/third-party/circle-flags \
		vinceliuice:Fluent-icon-theme:2a80a5d:fluenticontheme/data/icons/third-party/fluent-icon-theme \
		crow-translate:QGitTag:3763898:qgittag/src/qgittag \
		crow-translate:QOnlineTranslator:148de2b:qonlinetranslator/src/qonlinetranslator \
		Skycoder42:QHotkey:eb7ddab:qhotkey/src/third-party/qhotkey \
		Skycoder42:QTaskbarControl:7c82d23:qtaskbarcontrol/src/third-party/qtaskbarcontrol \
		itay-grudev:SingleApplication:aede311:singleapplication/src/third-party/singleapplication
USE_KDE=	wayland
USE_QT=		concurrent core dbus gui multimedia network svg widgets \
		x11extras buildtools:build qmake:build
USE_XORG=	ice sm x11 xcb xext

.include <bsd.port.mk>
