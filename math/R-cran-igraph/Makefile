PORTNAME=	igraph
DISTVERSION=	1.4.3
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Network Analysis and Visualization
WWW=		https://cran.r-project.org/web/packages/igraph/

LICENSE=	GPLv2+

BROKEN_sparc64=	does not compile on sparc64: uses i386 assembler

CRAN_DEPENDS=	R-cran-cpp11>=0.2.0:devel/R-cran-cpp11 \
		R-cran-magrittr>0:devel/R-cran-magrittr \
		R-cran-pkgconfig>=2.0.0:devel/R-cran-pkgconfig \
		R-cran-rlang>0:devel/R-cran-rlang
BUILD_DEPENDS=	${CRAN_DEPENDS}
LIB_DEPENDS=	libglpk.so:math/glpk \
		libgmp.so:math/gmp
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		compiler:c++11-lang cran:auto-plist,compiles gnome
USE_GNOME=	libxml2

.include <bsd.port.mk>
