PORTNAME=	yder
DISTVERSIONPREFIX=	v
DISTVERSION=	1.4.18
CATEGORIES=	devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Logging library for C applications
WWW=		https://github.com/babelouest/yder

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	babelouest

LIB_DEPENDS=	libjansson.so:devel/jansson \
		liborcania.so:devel/orcania

BUILD_DEPENDS=	orcania>=2.3.0:devel/orcania

RUN_DEPENDS=	jansson>=2.4:devel/jansson

CMAKE_ARGS=	-DWITH_JOURNALD=off \
		-DDOWNLOAD_DEPENDENCIES=off

PLIST_SUB=	PORTVERSION=${PORTVERSION}

.include <bsd.port.mk>
