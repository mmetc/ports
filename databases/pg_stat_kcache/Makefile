# Created by: Palle Girgensohn <girgen@FreeBSD.org>

PORTNAME=	pg_stat_kcache
DISTVERSIONPREFIX=	REL
DISTVERSION=	2_2_1
CATEGORIES=	databases

MAINTAINER=	girgen@FreeBSD.org
COMMENT=	Gather statistics about PostgreSQL I/O and CPU usage

LICENSE=	PostgreSQL

USES=		gmake pgsql:9.6+
LLD_UNSAFE=	yes
WANT_PGSQL=	server contrib

USE_GITHUB=	yes
GH_ACCOUNT=	powa-team

pre-patch:
	@${MV} ${BUILD_WRKSRC}/README.rst ${BUILD_WRKSRC}/${PORTNAME}-README.rst

.include <bsd.port.mk>
