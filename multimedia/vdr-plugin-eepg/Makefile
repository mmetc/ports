PORTNAME=	vdr-plugin-eepg
PORTVERSION=	0.0.6p2011071921
PORTREVISION=	8
CATEGORIES=	multimedia
MASTER_SITES=	LOCAL/nox/
DISTNAME=	${PORTNAME}-${PORTVERSION:C/p.*/pre/}-0-g${GITHASH}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Video Disk Recorder - extended EPG plugin
WWW=		https://projects.vdr-developer.org/projects/plg-eepg

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

DEPRECATED=	Depends on abandoned fork of VDR
EXPIRATION_DATE=2023-06-30

GITHASH=	e7383ed
PATCH_STRIP=	-p1
WRKSRC=		${WRKDIR}/${PORTNAME}-${GITHASH}

PORTDOCS=	README HISTORY

OPTIONS_DEFINE=	DOCS

.include	"${.CURDIR}/../vdr/Makefile.plugins"

post-patch: post-patch-plugin

pre-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/vdr

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/vdr/plugins/${PLUGIN}
	${INSTALL_DATA} ${WRKSRC}/eepg.equiv.IT ${STAGEDIR}${PREFIX}/etc/vdr/plugins/${PLUGIN}
	${INSTALL_DATA} ${WRKSRC}/eepg.equiv.IT ${STAGEDIR}${PREFIX}/etc/vdr/plugins/${PLUGIN}/eepg.equiv.sample

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
