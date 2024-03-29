PORTNAME?=	mcollective-puppet-common
PORTVERSION=	1.14.0
CATEGORIES=	sysutils

MAINTAINER=	puppet@FreeBSD.org
COMMENT?=	MCollective common files to manage the Puppet Agent
WWW=		https://github.com/puppetlabs/mcollective-puppet-agent

LICENSE=	APACHE20

DEPRECATED=	Depends on broken sysutils/mcollective
EXPIRATION_DATE=	2023-06-30

RUN_DEPENDS?=	mcollective>=2:sysutils/mcollective

USE_GITHUB=	yes
GH_ACCOUNT=	puppetlabs
GH_PROJECT=	mcollective-puppet-agent

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES?=	share/mcollective/agent/puppet.ddl \
		share/mcollective/data/puppet_data.ddl \
		share/mcollective/data/puppet_data.rb \
		share/mcollective/data/resource_data.ddl \
		share/mcollective/data/resource_data.rb \
		share/mcollective/util/puppet_agent_mgr.rb \
		share/mcollective/util/puppet_agent_mgr/mgr_v2.rb \
		share/mcollective/util/puppet_agent_mgr/mgr_v3.rb \
		share/mcollective/util/puppet_agent_mgr/mgr_windows.rb \
		share/mcollective/util/puppet_server_address_validation.rb \
		share/mcollective/util/puppetrunner.rb \
		share/mcollective/validator/puppet_resource_validator.ddl \
		share/mcollective/validator/puppet_resource_validator.rb \
		share/mcollective/validator/puppet_server_address_validator.ddl \
		share/mcollective/validator/puppet_server_address_validator.rb \
		share/mcollective/validator/puppet_tags_validator.ddl \
		share/mcollective/validator/puppet_tags_validator.rb \
		share/mcollective/validator/puppet_variable_validator.ddl \
		share/mcollective/validator/puppet_variable_validator.rb

.if !target(do-install)
do-install:
	cd ${WRKSRC} && ${COPYTREE_SHARE} "agent/*.ddl data util validator" ${STAGEDIR}${PREFIX}/share/mcollective
.endif

.include <bsd.port.mk>
