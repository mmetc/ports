PORTNAME=	pcapy
PORTVERSION=	0.11.1
PORTREVISION=	1
CATEGORIES=	net python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	anastasios@mageirias.com
COMMENT=	Python pcap extension
WWW=		http://www.coresecurity.com/corelabs-research/open-source-tools/pcapy

LICENSE=	APACHE11
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		python dos2unix
USE_PYTHON=	autoplist distutils

CFLAGS+=	--std=c++14

DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}
PORTDOCS=	README pcapy.html

OPTIONS_DEFINE=	DOCS

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/pcapy*.so

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
