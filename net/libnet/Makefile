# Created by: shipley@dis.org

PORTNAME=	libnet
PORTVERSION=	1.1.6
PORTREVISION=	5
PORTEPOCH=	1
CATEGORIES=	net
MASTER_SITES=	SF/libnet-dev

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	C library for creating IP packets

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/doc/COPYING

USES=		cpe libtool

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_CSTD=	gnu89
USE_LDCONFIG=	yes

DOCS=		CHANGELOG CONTRIB DESIGN_NOTES MIGRATION PACKET_BUILDING PORTED RAWSOCKET_NON_SEQUITUR README TODO
PORTDOCS=	*
PORTEXAMPLES=	*

CPE_VENDOR=	libnet_project

OPTIONS_DEFINE=	BPF DOCS EXAMPLES
OPTIONS_DEFAULT=BPF
BPF_DESC=	link layer bpf

BPF_CONFIGURE_OFF=	--with-link-layer=none
BPF_CONFIGURE_ON=	--with-link-layer=bpf

post-patch:
	@${MV} ${WRKSRC}/README ${WRKSRC}/doc/
	@${REINPLACE_CMD} \
		-e 's|@LIBNET_CONFIG_LIBS@|@LIBNET_CONFIG_LIBS@ -L@prefix@/lib|' \
		-e 's|@LIBNET_CONFIG_CFLAGS@|@LIBNET_CONFIG_CFLAGS@ -I@prefix@/include|' \
			${WRKSRC}/libnet-config.in

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}/
	cd ${WRKSRC}/doc/ && ${INSTALL_DATA} ${DOCS} ${STAGEDIR}${DOCSDIR}/

post-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/
	${INSTALL_DATA} ${WRKSRC}/sample/*.c ${STAGEDIR}${EXAMPLESDIR}/

.include <bsd.port.mk>
