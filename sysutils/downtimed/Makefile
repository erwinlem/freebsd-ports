PORTNAME=	downtimed
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	http://dist.epipe.com/${PORTNAME}/ \
		http://launchpadlibrarian.net/145993356/

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	System downtime monitoring and reporting tool
WWW=		https://dist.epipe.com/downtimed/

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		tar:xz
USE_RC_SUBR=	${PORTNAME}
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=	${PREFIX}/share

post-install:
	${MKDIR} ${STAGEDIR}/var/db/downtimed

.include <bsd.port.mk>
