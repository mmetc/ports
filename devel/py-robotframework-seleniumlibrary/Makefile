PORTNAME=	robotframework-seleniumlibrary
PORTVERSION=	6.1.0
CATEGORIES=	devel www python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Web testing library for Robot Framework
WWW=		https://github.com/robotframework/SeleniumLibrary

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}robotframework>=4.1.3:devel/py-robotframework@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}robotframework-pythonlibcore>=3.0.0:devel/py-robotframework-pythonlibcore@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}selenium>=3.141.0:www/py-selenium@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
