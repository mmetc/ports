PORTNAME=	b612
PORTVERSION=	1.008
CATEGORIES=	x11-fonts

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Highly legible font family for aircraft cockpit screens
WWW=		https://github.com/polarsys/b612

LICENSE=	EDL EPL OFL11
LICENSE_COMB=	dual
LICENSE_NAME_EDL=	Eclipse Distribution License
LICENSE_FILE_EDL=	${WRKSRC}/edl-v10.html
LICENSE_FILE_EPL=	${WRKSRC}/EPL-2.0.html
LICENSE_PERMS_EDL=	auto-accept dist-mirror dist-sell pkg-mirror pkg-sell

USES=		fonts

NO_ARCH=	yes
NO_BUILD=	yes

FONTNAME=	b612

GH_ACCOUNT=	polarsys
USE_GITHUB=	yes

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}/
	${INSTALL_DATA} ${WRKSRC}/fonts/ttf/*.ttf ${STAGEDIR}${FONTSDIR}/

.include <bsd.port.mk>
