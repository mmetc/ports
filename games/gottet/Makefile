PORTNAME=	gottet
PORTVERSION=	1.2.6
CATEGORIES=	games
MASTER_SITES=	https://gottcode.org/gottet/

MAINTAINER=	jhale@FreeBSD.org
COMMENT=	Tetris clone
WWW=		https://gottcode.org/gottet/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake compiler:c++17-lang gettext-tools gl qt:6 tar:bzip2
USE_GL=		opengl
USE_QT=		base tools:build

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} CREDITS ChangeLog README \
		${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
