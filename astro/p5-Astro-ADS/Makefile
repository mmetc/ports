PORTNAME=	Astro-ADS
PORTVERSION=	1.90
CATEGORIES=	astro perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl library to connect with the Harvard Astrophysical Data Service
WWW=		https://metacpan.org/dist/Astro-ADS

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Data-Dumper-Concise>=0:devel/p5-Data-Dumper-Concise \
		p5-Feature-Compat-Try>=0:devel/p5-Feature-Compat-Try \
		p5-Mojolicious>=0:www/p5-Mojolicious \
		p5-Moo>=0:devel/p5-Moo \
		p5-PerlX-Maybe>=0:devel/p5-PerlX-Maybe \
		p5-Type-Tiny>=0:devel/p5-Type-Tiny \
		p5-libwww>=0:www/p5-libwww \
		p5-strictures>=0:devel/p5-strictures
TEST_DEPENDS=	p5-Mojo-UserAgent-Mockable>=0:www/p5-Mojo-UserAgent-Mockable \
		p5-Test-Simple>=1.302200:devel/p5-Test-Simple

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
