PORTNAME=	mcollective-nrpe-agent
PORTEPOCH=	1

COMMENT=	MCollective agent to interact with the NRPE monitoring system

# See MASTERDIR for MAINTAINER.

DEPRECATED=	Depends on broken sysutils/mcollective
EXPIRATION_DATE=	2023-06-30

RUN_DEPENDS=	mcollective-nrpe-common>=${PORTVERSION}:sysutils/mcollective-nrpe-common

MASTERDIR=	${.CURDIR}/../mcollective-nrpe-common

PLIST_FILES=	share/mcollective/agent/nrpe.rb

do-install:
	cd ${WRKSRC} && ${COPYTREE_SHARE} "agent/*.rb" ${STAGEDIR}${PREFIX}/share/mcollective

.include "${MASTERDIR}/Makefile"
