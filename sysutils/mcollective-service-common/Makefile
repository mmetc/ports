PORTNAME?=	mcollective-service-common
PORTVERSION=	3.2.0
CATEGORIES=	sysutils

MAINTAINER=	puppet@FreeBSD.org
COMMENT?=	MCollective common files to manage the OS Services
WWW=		https://github.com/puppetlabs/mcollective-service-agent

LICENSE=	APACHE20

DEPRECATED=	Depends on broken sysutils/mcollective
EXPIRATION_DATE=	2023-06-30

RUN_DEPENDS?=	mcollective>=2:sysutils/mcollective

USE_GITHUB=	yes
GH_ACCOUNT=	puppetlabs
GH_PROJECT=	mcollective-service-agent

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES?=	share/mcollective/agent/service.ddl \
		share/mcollective/data/service_data.ddl \
		share/mcollective/data/service_data.rb \
		share/mcollective/util/service/base.rb \
		share/mcollective/util/service/serviceservice.rb \
		share/mcollective/util/service/puppetservice.rb \
		share/mcollective/validator/service_name.ddl \
		share/mcollective/validator/service_name.rb

.if !target(do-install)
do-install:
	cd ${WRKSRC} && ${COPYTREE_SHARE} "agent/*.ddl data util validator" ${STAGEDIR}${PREFIX}/share/mcollective
.endif

.include <bsd.port.mk>
