PORTNAME=	switchBashZsh
PORTVERSION=	1.3
PORTREVISION=	1
CATEGORIES=	shells

MAINTAINER=	bourne.identity@hotmail.com
COMMENT=	Portable shell setup for Bash/Zsh across FreeBSD/Linux/Cygwin
WWW=		https://github.com/bourne-again/switchBashZsh

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	bourne-again

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/${PORTNAME} \
		share/man/man1/${PORTNAME}.1.gz

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${PREFIX}/share/man/man1

.include <bsd.port.mk>
