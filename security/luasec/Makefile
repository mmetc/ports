# Created by: Andrew Lewis <freeghb@gmail.com>

PORTNAME=	luasec
PORTVERSION=	1.1.0
DISTVERSIONPREFIX=	v
CATEGORIES=	security
PKGNAMEPREFIX=	${LUA_PKGNAMEPREFIX}

MAINTAINER=	thomas@beingboiled.info
COMMENT=	Lua binding for the OpenSSL library to provide TLS/SSL communication

LICENSE=	MIT

USES=		lua:module ssl

USE_GITHUB=	yes
GH_ACCOUNT=	brunoos

ALL_TARGET=	bsd
MAKE_ENV+=	LUAPATH=${LUA_MODSHAREDIR} LUACPATH=${LUA_MODLIBDIR} \
		INC_PATH=-I${LUA_INCDIR} LIB_PATH=-L${LUA_LIBDIR} \
		DESTDIR=${STAGEDIR}
CFLAGS+=	-I${OPENSSLINC} -DOPENSSL_NO_SSL3
LDFLAGS+=	-L${OPENSSLLIB}

post-install:
	${STRIP_CMD} ${STAGEDIR}${LUA_MODLIBDIR}/ssl.so

.include <bsd.port.mk>
