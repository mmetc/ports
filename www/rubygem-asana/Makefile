PORTNAME=	asana
PORTVERSION=	0.10.3
PORTREVISION=	2
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby wrapper for the Asana REST API

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-faraday1>=1.0<2:www/rubygem-faraday1 \
		rubygem-faraday_middleware>=1.0<2:www/rubygem-faraday_middleware \
		rubygem-faraday_middleware-multi_json>=0.0<1:devel/rubygem-faraday_middleware-multi_json \
		rubygem-oauth21>=1.4<2:net/rubygem-oauth21

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
