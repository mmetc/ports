PORTNAME=	peg-e
PORTVERSION=	1.3.0
CATEGORIES=	games
MASTER_SITES=	https://gottcode.org/peg-e/ \
		https://mirror.amdmi3.ru/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Peg elimination game

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		compiler:c++17-lang gl gnome qmake qt:5 tar:bzip2
USE_QT=		core gui widgets qmake_build buildtools_build linguisttools_build
USE_GL=		gl

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

.include <bsd.port.mk>
