PORTNAME=	MathMod
PORTVERSION=	12.1
CATEGORIES=	math graphics

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Mathematical modeling software
WWW=		https://sourceforge.net/projects/mathmod/

LICENSE=	GPLv2

USE_GITHUB=	yes
GH_ACCOUNT=	parisolab
GH_PROJECT=	${PORTNAME:tl}

USES=		compiler:c++11-lang dos2unix gl qmake qt:5
USE_GL=		gl
USE_QT=		buildtools:build core gui opengl qmake:build widgets

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
