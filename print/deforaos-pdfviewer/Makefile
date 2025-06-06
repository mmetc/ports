PORTNAME=	pdfviewer
PORTVERSION=	0.0.2
PORTREVISION=	50
CATEGORIES=	print
MASTER_SITES=	http://www.defora.org/os/download/download/4431/
PKGNAMEPREFIX=	deforaos-
DISTNAME=	PDFViewer-${PORTVERSION}

MAINTAINER=	khorben@defora.org
COMMENT=	DeforaOS desktop PDF viewer
WWW=		https://www.defora.org/

LICENSE=	GPLv3

LIB_DEPENDS=	libSystem.so:devel/deforaos-libsystem \
		libDesktop.so:x11/deforaos-libdesktop \
		libpoppler-glib.so:graphics/poppler-glib \
		libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

MAKE_ARGS+=	PREFIX=${PREFIX}
USES=		desktop-file-utils gnome pkgconfig
USE_GNOME=	gtk20 gdkpixbuf cairo
MAKE_ENV+=	MANDIR=${STAGEDIR}${PREFIX}/share/man

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes
NLS_USES=	gettext
DOCS_BUILD_DEPENDS=	xsltproc:textproc/libxslt \
	${LOCALBASE}/share/xsl/docbook/manpages/docbook.xsl:textproc/docbook-xsl

post-patch-DOCS-off:
	${REINPLACE_CMD} 's|data doc po|data po|' \
		${WRKSRC}/Makefile

post-patch-NLS-off:
	${REINPLACE_CMD} 's|po src tools|src tools|' \
		${WRKSRC}/Makefile

post-patch:
	@${REINPLACE_CMD} 's|-Wl,-pie||g' \
		${WRKSRC}/tools/Makefile \
		${WRKSRC}/src/Makefile

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/pdfviewer

.include <bsd.port.mk>
