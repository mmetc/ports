PORTNAME=	vera++
PORTVERSION=	1.3.0
PORTREVISION=	21
CATEGORIES=	devel
MASTER_SITES=	https://bitbucket.org/verateam/vera/downloads/
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} \
		${DISTNAME}-doc${EXTRACT_SUFX}

MAINTAINER=	cristianorolim@outlook.com
COMMENT=	Tool for verification of C++ source code
WWW=		https://bitbucket.org/verateam/vera/wiki/Home

LICENSE=	BSL
LICENSE_FILE=	${WRKSRC}/LICENSE_1_0.txt

BROKEN=		fails to build with boost-1.85+

BUILD_DEPENDS=	boost-libs>=0:devel/boost-libs

USES=		compiler:c++11-lang cmake tk
USE_CXXSTD=	c++14

CMAKE_ARGS+=	-DTCL_INCLUDE_PATH=${TCL_INCLUDEDIR} \
		-DTK_INCLUDE_PATH=${TK_INCLUDEDIR} \
		-DVERA_USE_SYSTEM_BOOST:BOOL=ON \
		-DVERA_PYTHON:BOOL=OFF

DATADIR=	${PREFIX}/lib/${PORTNAME}

PLIST_FILES=	bin/vera++ share/man/man1/vera++.1.gz
PORTDATA=	*
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS LUA
OPTIONS_DEFAULT=	LUA

LUA_LIB_DEPENDS=	libluabind.so:devel/luabind
LUA_CMAKE_ON=	-DVERA_LUA:BOOL=ON
LUA_CMAKE_OFF=	-DVERA_LUA:BOOL=OFF

post-patch:
	@${REINPLACE_CMD} -e '/^add_subdirectory(doc/d' \
		${WRKSRC}/CMakeLists.txt

post-install:
	${INSTALL_MAN} ${WRKDIR}/vera++.1 ${STAGEDIR}${PREFIX}/share/man/man1
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKDIR}/vera++.html ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
