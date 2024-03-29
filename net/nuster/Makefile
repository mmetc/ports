PORTNAME=	nuster
PORTVERSION=	5.0.4.21
DISTVERSIONPREFIX=	v
CATEGORIES=	net www

MAINTAINER=	felix@userspace.com.au
COMMENT=	Web caching proxy server based on haproxy
WWW=		https://github.com/jiangwenyuan/nuster

LICENSE=	GPLv2 LGPL21
LICENSE_COMB=	multi

DEPRECATED=	Do not support OpenSSL 3 and upstream last release was in 2020
EXPIRATION_DATE=	2023-07-08
BROKEN_SSL=	openssl30 openssl31
BROKEN_SSL_REASON=	Requires deprecated OpenSSL routines

USES=		compiler:c++11-lang gmake
USE_RC_SUBR=	nuster
USE_GITHUB=	yes
GH_ACCOUNT=	jiangwenyuan

MAKE_ARGS=	TARGET=freebsd DEFINE=-DFREEBSD_PORTS USE_GETADDRINFO=1 \
		USE_ZLIB=1 USE_CPU_AFFINITY=1 USE_ACCEPT4=1 \
		CC="${CC}" DEBUG_CFLAGS="" CPU_CFLAGS="${CFLAGS}"

PLIST_FILES=	sbin/nuster \
		sbin/nusterlog \
		man/man1/nuster.1.gz

OPTIONS_DEFINE=		DOCS EXAMPLES LUA OPENSSL DEVICEATLAS PROMEX
OPTIONS_RADIO=		PCRE
OPTIONS_RADIO_PCRE=	DPCRE SPCRE
DPCRE_DESC=		Link dynamically
SPCRE_DESC=		Link statically
DEVICEATLAS_DESC=	DeviceAtlas Device Detection support
PROMEX_DESC=		Enable Prometheus exporter
OPTIONS_DEFAULT=	SPCRE OPENSSL

DPCRE_LIB_DEPENDS=	libpcre.so:devel/pcre
DPCRE_MAKE_ARGS=	USE_PCRE=1 USE_PCRE_JIT=1
SPCRE_LIB_DEPENDS=	libpcre.so:devel/pcre
SPCRE_MAKE_ARGS=	USE_PCRE=1 USE_STATIC_PCRE=1 USE_PCRE_JIT=1
DEVICEATLAS_LIB_DEPENDS=	libda.so:net/deviceatlas-enterprise-c
DEVICEATLAS_MAKE_ARGS=		USE_DEVICEATLAS=1 DEVICEATLAS_LIB=${LOCALBASE}/lib DEVICEATLAS_INC=${LOCALBASE}/include
PROMEX_MAKE_ARGS=	EXTRA_OBJS="contrib/prometheus-exporter/service-prometheus.o"
OPENSSL_USES=		ssl
OPENSSL_MAKE_ARGS=	USE_OPENSSL=1 SSL_LIB=${OPENSSLLIB} SSL_INC=${OPENSSLINC}
OPENSSL_VARS=	BROKEN_SSL="openssl30 openssl31" \
		BROKEN_SSL_REASON="error: token is not a valid binary operator in a preprocessor subexpression"
LUA_USES=		lua:53
LUA_MAKE_ARGS=		USE_LUA=1 LUA_INC=${LUA_INCDIR} LUA_LIB=${LUA_LIBDIR} LUA_LIB_NAME=lua-${LUA_VER}

PORTDOCS=	*
PORTEXAMPLES=	*

.include <bsd.port.pre.mk>

.if ${ARCH} == "amd64" || ${ARCH} == "i386"
MAKE_ARGS+=	USE_REGPARM=1
.endif

post-build:
	cd ${WRKSRC}/contrib/halog && ${MAKE_CMD} ${MAKE_ENV}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/haproxy ${STAGEDIR}${PREFIX}/sbin/nuster
	${INSTALL_PROGRAM} ${WRKSRC}/contrib/halog/halog ${STAGEDIR}${PREFIX}/sbin/nusterlog
	${INSTALL_MAN} ${WRKSRC}/doc/haproxy.1 ${STAGEDIR}${MAN1PREFIX}/man/man1/nuster.1
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC}/doc/ && ${COPYTREE_SHARE} \* ${STAGEDIR}${DOCSDIR})
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	(cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} \* ${STAGEDIR}${EXAMPLESDIR})

.include <bsd.port.post.mk>
