PORTNAME=	xlaby
PORTVERSION=	2.0.1
PORTREVISION=	4
CATEGORIES=	games
MASTER_SITES=	SUNSITE/games/strategy \
		ftp://quatramaran.ens.fr/pub/madore/xlaby/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Daemonic X Labyrinth played directly with the mouse pointer
WWW=		http://www.eleves.ens.fr:8080/home/madore/programs/ #prog_xlaby

NO_WRKSUBDIR=	yes
USES=		imake tar:tgz xorg
USE_XORG=	x11
PLIST_FILES=	share/man/man6/xlaby.6.gz

post-install:
	@${ECHO_CMD} "@group games" >> ${TMPPLIST}
	@${ECHO_CMD} "@owner games" >> ${TMPPLIST}
	@${ECHO_CMD} "bin/xlaby" >> ${TMPPLIST}
	@${ECHO_CMD} "@owner" >> ${TMPPLIST}
	@${ECHO_CMD} "@group" >> ${TMPPLIST}

.include <bsd.port.mk>
