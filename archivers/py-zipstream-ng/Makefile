PORTNAME=	zipstream-ng
DISTVERSION=	1.6.0
CATEGORIES=	archivers python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	DtxdF@disroot.org
COMMENT=	Modern and easy to use streamable zip file generator
WWW=		https://github.com/pR0Ps/zipstream-ng/

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest-cov>0:devel/py-pytest-cov@${PY_FLAVOR}

USES=		python:3.5+
USE_PYTHON=	autoplist distutils pytest

.include <bsd.port.mk>
