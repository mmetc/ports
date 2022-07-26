PORTNAME=	mirtk
DISTVERSIONPREFIX=	v
DISTVERSION=	2.0.0-122
PORTREVISION=	3
DISTVERSIONSUFFIX=	-g38210fa
CATEGORIES=	graphics

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Medical Image Registration ToolKit (MIRTK)

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	boost-libs>0:devel/boost-libs \
		nifticlib>0:science/nifticlib

USES=		cmake compiler:c++11-lang eigen:3 perl5 python
USE_GITHUB=	yes
GH_ACCOUNT=	BioMedIA
GH_PROJECT=	${PORTNAME:tu}
USE_LDCONFIG=	yes

OPTIONS_DEFINE=		TBB VTK
OPTIONS_DEFAULT=	VTK # TBB is OFF by default until the project is oneTBB-compatible, see https://github.com/BioMedIA/MIRTK/issues/760

TBB_DESC=		Build with TBB
TBB_CMAKE_BOOL=		WITH_TBB
TBB_LIB_DEPENDS=	libtbb.so:devel/tbb
TBB_BROKEN=		Not oneTBB-compatible,see https://github.com/BioMedIA/MIRTK/issues/760

VTK_DESC=		Build with the VTK toolkit
VTK_CMAKE_BOOL=		WITH_VTK
VTK_LIB_DEPENDS=	libvtkCommonCore-9.1.so:math/vtk9 \
			libexpat.so:textproc/expat2

.include <bsd.port.mk>
