PORTNAME=	vdr-plugin-vnsiserver
PORTVERSION=	14.0.20150330
PORTREVISION=	3
CATEGORIES=	multimedia

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Video Disk Recorder - VNSI server plugin
WWW=		https://www.vdr-portal.de/board/thread.php?threadid=95292

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

DEPRECATED=	Depends on abandoned fork of VDR
EXPIRATION_DATE=2023-06-30

USE_GITHUB=	yes
GH_ACCOUNT=	FernetMenta
GH_TAGNAME=	36e2b61

USES=		pkgconfig
PATCH_STRIP=	-p1

MAKE_ARGS=	LIBDIR=${WRKDIR}/lib \
		LOCDIR=${PREFIX}/share/locale \
		VDRSRC=${LOCALBASE}/include/vdr \
		INCLUDES=-I${LOCALBASE}/include

PORTDOCS=	README HISTORY

OPTIONS_DEFINE=	DOCS

.include	"${.CURDIR}/../vdr/Makefile.plugins"

post-patch: post-patch-plugin

pre-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/vdr
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/locale/de_DE/LC_MESSAGES \
		${STAGEDIR}${PREFIX}/share/locale/lt_LT/LC_MESSAGES

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/vdr/plugins/${PLUGIN}
	${INSTALL_DATA} ${WRKSRC}/${PLUGIN}/allowed_hosts.conf \
		${STAGEDIR}${PREFIX}/etc/vdr/plugins/${PLUGIN}/allowed_hosts.conf.sample

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
