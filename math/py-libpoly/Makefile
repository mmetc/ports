PORTNAME=	libpoly
DISTVERSIONPREFIX=	v
DISTVERSION=	0.1.11
CATEGORIES=	math
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python binding for libpoly

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENCE

LIB_DEPENDS=	libpoly.so:math/libpoly

USES=		cmake localbase:ldflags python:3.6+
USE_GITHUB=	yes
GH_ACCOUNT=	SRI-CSL
USE_LDCONFIG=	yes
USE_PYTHON=	distutils autoplist

CFLAGS+=	-I${WRKSRC}/include
LDFLAGS+=	-lpoly

BUILD_WRKSRC=	${WRKSRC}/python
INSTALL_WRKSRC=	${WRKSRC}/python

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/polypy*.so

do-build:
	@cd ${BUILD_WRKSRC} && ${SETENV} ${MAKE_ENV} ${PYTHON_CMD} ${PYDISTUTILS_SETUP} ${PYDISTUTILS_BUILD_TARGET} ${PYDISTUTILS_BUILDARGS}

do-install:
	@cd ${INSTALL_WRKSRC} && ${SETENV} ${MAKE_ENV} ${PYTHON_CMD} ${PYDISTUTILS_SETUP} ${PYDISTUTILS_INSTALL_TARGET} ${PYDISTUTILS_INSTALLARGS}

do-test: install
	@cd ${WRKSRC}/test/python && ${PYTHON_CMD} ${WRKSRC}/test/python/check.py

.include <bsd.port.mk>
