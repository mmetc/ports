PORTNAME=	httpasyncclient
DISTVERSION=	4.1.5
CATEGORIES=	www java
MASTER_SITES=	APACHE/httpcomponents/${PORTNAME}/binary
DISTNAME=	httpcomponents-asyncclient-${DISTVERSION}-bin

MAINTAINER=	ale@FreeBSD.org
COMMENT=	Java components implementing an asynchronous HTTP client
WWW=		https://hc.apache.org/httpcomponents-asyncclient-4.1.x/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${JAVALIBDIR}/httpclient.jar:www/httpclient

USES=		cpe java
CPE_VENDOR=	apache

OPTIONS_DEFINE=	DOCS
NO_WRKSUBDIR=	yes
NO_BUILD=	yes
NO_ARCH=	yes
WRKSRC=		${WRKDIR}/httpcomponents-asyncclient-${DISTVERSION}

PLIST_FILES=	%%JAVAJARDIR%%/${PORTNAME}.jar \
		%%JAVAJARDIR%%/${PORTNAME}-cache.jar

PORTDOCS=	*

.include <bsd.port.options.mk>

do-install:
	@${ECHO_MSG} -n ">> Installing JAR file as ${JAVAJARDIR}/${PORTNAME}.jar..."
	@${INSTALL_DATA} ${WRKSRC}/lib/${PORTNAME}-${DISTVERSION}.jar \
		${STAGEDIR}/${JAVAJARDIR}/${PORTNAME}.jar
	@${ECHO_MSG} " [DONE]"
	@${ECHO_MSG} -n ">> Installing JAR file as ${JAVAJARDIR}/${PORTNAME}-cache.jar..."
	@${INSTALL_DATA} ${WRKSRC}/lib/${PORTNAME}-cache-${DISTVERSION}.jar \
		${STAGEDIR}/${JAVAJARDIR}/${PORTNAME}-cache.jar
	@${ECHO_MSG} " [DONE]"
.if ${PORT_OPTIONS:MDOCS}
	@${ECHO_MSG} -n ">> Installing documentation..."
	@${MKDIR} ${STAGEDIR}/${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/RELEASE_NOTES.txt ${STAGEDIR}/${DOCSDIR}/
	@(cd ${WRKSRC} && ${COPYTREE_SHARE} javadoc ${STAGEDIR}${DOCSDIR}/)
	@${ECHO_MSG} " [DONE]"
.endif

.include <bsd.port.mk>
