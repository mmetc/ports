# Created by: Eric Anholt <anholt@FreeBSD.org>

PORTNAME=	xorg-vfbserver
PORTREVISION=	0
PORTEPOCH=	1

COMMENT=	X virtual framebuffer server from X.Org

LICENSE=	MIT

MASTERDIR=	${.CURDIR}/../xorg-server
DESCR=		${.CURDIR}/pkg-descr

SLAVE_PORT=	yes

CONFIGURE_ARGS+=--enable-xvfb --disable-dmx --disable-xephyr --disable-xnest \
		--disable-xwayland

PLIST_FILES=	bin/Xvfb man/man1/Xvfb.1.gz

do-install:
	cd ${WRKSRC}/hw/vfb; DESTDIR=${STAGEDIR} ${MAKE} install

.include "${MASTERDIR}/Makefile"
