PORTNAME=	DBIx-Connector
PORTVERSION=	0.57
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for fast, safe DBI connection management

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DBI>=1.605:databases/p5-DBI
TEST_DEPENDS=	p5-Test-MockModule>=0:devel/p5-Test-MockModule

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
