# Created by: Jin-Sih Lin <linpct@gmail.com>

PORTNAME=	phalcon
DISTVERSIONPREFIX=	v
DISTVERSION=	5.0.0RC2
CATEGORIES=	www
PKGNAMEPREFIX=	${PHP_PKGNAMEPREFIX}

MAINTAINER=	franco@opnsense.org
COMMENT=	Phalcon PHP Framework written in C-language

LICENSE=	BSD3CLAUSE

USES=		localbase php:ext
USE_GITHUB=	yes
GH_PROJECT=	c${PORTNAME}
USE_PHP=	json:build mbstring pdo:build session:build
IGNORE_WITH_PHP=	82

CONFIGURE_ARGS=	--enable-phalcon

CONFLICTS_INSTALL=	${PKGNAMEPREFIX}phalcon4

WRKSRC_SUBDIR=	build/phalcon

.include <bsd.port.mk>
