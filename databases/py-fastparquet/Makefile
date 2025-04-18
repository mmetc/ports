PORTNAME=	fastparquet
PORTVERSION=	2024.11.0
CATEGORIES=	databases python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python support for Parquet file format
WWW=		https://github.com/dask/fastparquet

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}numpy>=0,1:math/py-numpy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}setuptools>=0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}setuptools-scm>=0:devel/py-setuptools-scm@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR} \
		thrift:devel/thrift
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cramjam>=2.3:archivers/py-cramjam@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}fsspec>=0:filesystems/py-fsspec@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}numpy>=0,1:math/py-numpy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}packaging>=0:devel/py-packaging@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pandas>=1.5.0,1:math/py-pandas@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent cython pep517

BINARY_ALIAS=	git=false
MAKE_ENV=	SETUPTOOLS_SCM_PRETEND_VERSION=${PORTVERSION}

post-patch:
	@${RM} ${WRKSRC}/fastparquet/*.c

post-install:
	${FIND} ${STAGEDIR}${PYTHON_SITELIBDIR} -name '*.so' -exec ${STRIP_CMD} {} +

.include <bsd.port.mk>
