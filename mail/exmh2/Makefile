# "+=" and "?=" lines are for sharing this Makefile with japanese/exmh2.

PORTNAME=	exmh
PORTVERSION=	2.9.0
PORTREVISION=	8
CATEGORIES+=	mail tk
# XXX: Standard SF fails with a hung download
MASTER_SITES=	https://sourceforge.net/projects/${PORTNAME}/files/${PORTNAME}/${PORTVERSION}/

MAINTAINER?=	cy@FreeBSD.org
COMMENT?=	X11/TK based mail reader front end to MH
WWW=		http://www.beedub.com/exmh/

.if defined(JAPANESE_EXMH)
RUN_DEPENDS=	wish8.0jp:japanese/tk80
BUILD_DEPENDS=	tclsh8.0jp:japanese/tcl80
WISH=		wish8.0jp
TCLSH=		tclsh8.0jp
.else
USES=		cpe tk:86
.endif

# exmh is pretty useless without this, but it's not needed to build it.
.if defined(JAPANESE_EXMH)
RUN_DEPENDS+=	repl:japanese/mh
.else
RUN_DEPENDS+=	repl:mail/nmh
SCRIPTS_ENV+=	USE_NMH=YES
.endif

# full mime support needs mmencode/mmdecode from metamail
RUN_DEPENDS+=	mmencode:mail/metamail

# Additionally, exmh will use the following ports if present:
# lang/expect
# textproc/glimpse
# security/gnupg
# security/pgp
# security/pgp5
# mail/faces
# audio/rplay

PLIST_SUB=	EXMH_VERSION=${PORTVERSION}

NO_ARCH=	yes

.if defined(JAPANESE_EXMH)
do-build:
	@cd ${WRKSRC} && ${SETENV} PREFIX=${PREFIX} TCLSH=${TCLSH} \
		WISH=${PREFIX}/bin/${WISH} WRKSRC=${WRKSRC} \
		${SCRIPTS_ENV} ${SH} ${SCRIPTDIR}/build
.else
do-build:
	@cd ${WRKSRC} && ${SETENV} PREFIX=${PREFIX} TCLSH=${TCLSH} \
		WISH=${WISH} WRKSRC=${WRKSRC} \
		${SCRIPTS_ENV} ${SH} ${SCRIPTDIR}/build
.endif

do-install:
	@cd ${WRKSRC} && ${SETENV} PREFIX=${STAGEDIR}${PREFIX} \
		WRKSRC=${WRKSRC} ${SH} ${SCRIPTDIR}/install

.include <bsd.port.mk>
