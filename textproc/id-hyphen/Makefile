PORTNAME=	hyphen
PORTVERSION=	2004.08.12
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	LOCAL/sunpoet/${PORTNAME}/
PKGNAMEPREFIX=	id-
DISTNAME=	hyph_id_ID-${PORTVERSION:C/\.//g}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Indonesian hyphenation rules

LICENSE=	LGPL21

USES=		zip
NO_ARCH=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	${DATADIR}/hyph_id_ID.dic

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/hyph_id_ID.dic ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
