PORTNAME=	sassc
PORTVERSION=	3.6.2
CATEGORIES=	textproc

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Wrapper around libsass
WWW=		https://libsass.org/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libsass.so:textproc/libsass

USES=		autoreconf compiler:c++11-lib gmake libtool localbase

GH_ACCOUNT=	sass
GNU_CONFIGURE=	yes

MAKEFILE=	GNUmakefile

PLIST_FILES=	bin/sassc

USE_GITHUB=	yes

post-patch:
	@${ECHO_CMD} "${ECHO_CMD} \"${PORTVERSION}\"" > ${WRKSRC}/version.sh

.include <bsd.port.mk>
