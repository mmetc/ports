PORTNAME=	haiti-hash
DISTVERSION=	1.3.0
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	salvadore@FreeBSD.org
COMMENT=	Hash type identifier (CLI tool and library)

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-docopt>=0.6<1:devel/rubygem-docopt \
		rubygem-paint>=2.2<3:devel/rubygem-paint

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/haiti \
		bin/haiti_console

.include <bsd.port.mk>
