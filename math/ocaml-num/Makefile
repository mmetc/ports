# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>

PORTNAME=	num
PORTVERSION=	1.4
DISTVERSIONPREFIX=	v
CATEGORIES=	math
PKGNAMEPREFIX=	ocaml-

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Legacy library for arbitrary-precision arithmetic

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gmake
USE_GITHUB=	yes
GH_ACCOUNT=	ocaml
USE_OCAML=	yes

MAKE_ENV=	OCAMLFIND_DESTDIR="${STAGEDIR}${OCAMLFIND_DESTDIR}"
MAKE_JOBS_UNSAFE=	yes
TEST_TARGET=	test

.include <bsd.port.mk>
