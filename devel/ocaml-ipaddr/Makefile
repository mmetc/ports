PORTNAME=	ipaddr
PORTVERSION=	2.6.1
CATEGORIES=	devel
PKGNAMEPREFIX=	ocaml-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	OCaml library for manipulation of IP address representations

BUILD_DEPENDS=	${LOCALBASE}/${OCAML_SITELIBDIR}/sexplib/sexplib.a:devel/ocaml-sexplib
BUILD_DEPENDS+=	ocamlbuild:devel/ocaml-ocamlbuild
RUN_DEPENDS=	${LOCALBASE}/${OCAML_SITELIBDIR}/sexplib/sexplib.a:devel/ocaml-sexplib

USE_GITHUB=	yes
GH_ACCOUNT=	mirage
GH_PROJECT=	ocaml-ipaddr

USES=			gmake
HAS_CONFIGURE=		yes
MAKE_JOBS_UNSAFE=	yes

USE_OCAML=		yes
USE_OCAML_FINDLIB=	yes
USE_OCAML_CAMLP4=	yes
USE_OCAMLFIND_PLIST=	yes
USE_OCAML_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e '/^SETUP =/s,ocaml,& -unsafe-string,' \
		${WRKSRC}/Makefile

do-configure:
	cd ${CONFIGURE_WRKSRC} && ocaml -unsafe-string setup.ml \
		-configure ${CONFIGURE_ARGS}

.include <bsd.port.mk>
