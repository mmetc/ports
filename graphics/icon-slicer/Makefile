PORTNAME=	icon-slicer
PORTVERSION=	0.3
PORTREVISION=	11
CATEGORIES=	graphics
MASTER_SITES=	http://www.freedesktop.org/software/icon-slicer/releases/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Utility for generating icon and cursor themes
WWW=		https://www.freedesktop.org/wiki/Software/icon-slicer/

LICENSE=	MIT # in readme and sources; COPYING seem to be unrelated

LIB_DEPENDS=	libpopt.so:devel/popt

USES=		gnome localbase pkgconfig
USE_GNOME=	gdkpixbuf
GNU_CONFIGURE=	yes

PORTDOCS=	AUTHORS ChangeLog README
PLIST_FILES=	bin/${PORTNAME}

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e '/^SUBDIRS/ s|examples||' ${WRKSRC}/Makefile.in

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
