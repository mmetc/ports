PORTNAME=	mcollective
PORTVERSION=	2.12.5
CATEGORIES=	sysutils
MASTER_SITES=	https://downloads.puppetlabs.com/${PORTNAME}/

MAINTAINER=	puppet@FreeBSD.org
COMMENT=	Modern scalable datacenter orchestration framework
WWW=		http://docs.puppetlabs.com/mcollective/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

DEPRECATED=	Broken with all supported Ruby versions
EXPIRATION_DATE=	2023-06-30
BROKEN_RUBY30=	yes
BROKEN_RUBY31=	yes
BROKEN_RUBY32=	yes
BROKEN_RUBY33=	yes

RUN_DEPENDS=	rubygem-stomp>=0:devel/rubygem-stomp

USES=		cpe ruby shebangfix
CPE_VENDOR=	puppet
NO_BUILD=	yes
USE_RC_SUBR=	mcollectived

SHEBANG_FILES=	bin/mcollectived bin/mco
CFG_FILES=	client.cfg data-help.erb discovery-help.erb facts.yaml \
		metadata-help.erb rpc-help.erb server.cfg

# don't make .bak files
REINPLACE_ARGS=	-i ""

SCRIPTS=	mco

SUB_LIST+=	RUBY=${RUBY}

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e "s|/etc/mcollective|${ETCDIR}|" \
	    ${WRKSRC}/bin/mcollectived \
		${WRKSRC}/etc/server.cfg.dist \
		${WRKSRC}/etc/client.cfg.dist \
		${WRKSRC}/lib/mcollective/config.rb \
		${WRKSRC}/lib/mcollective/util.rb \
		${WRKSRC}/lib/mcollective/rpc.rb
	@${REINPLACE_CMD} -e "s|/usr/libexec/mcollective|${PREFIX}/share|" \
	    ${WRKSRC}/etc/server.cfg.dist \
	    ${WRKSRC}/etc/client.cfg.dist

do-install:
	cd ${WRKSRC} ; ${RUBY} install.rb --destdir=${STAGEDIR} --configdir=${ETCDIR} --plugindir=${DATADIR}
.for cfg in ${CFG_FILES}
	${MV} ${STAGEDIR}${ETCDIR}/${cfg} ${STAGEDIR}${ETCDIR}/${cfg}.sample
.endfor

.include <bsd.port.mk>
