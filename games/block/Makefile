PORTNAME=	block
PORTVERSION=	0.6
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	SUNSITE/games/strategy

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Small text based maze game

USES=		ncurses tar:tgz

CONFLICTS_INSTALL=	py38-pycoin

WRKSRC=		${WRKDIR}/blocks
MAKEFILE=	makefile
ALL_TARGET=	block bed
MAKE_ARGS=	LL="${LDFLAGS} -lncurses" CLL="${LDFLAGS} -lncurses"

post-extract:
	@${RM} ${WRKSRC}/block
	@${RM} ${WRKSRC}/bed

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/block ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/bed ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/block.6 ${STAGEDIR}${PREFIX}/share/man/man6
	${INSTALL_MAN} ${WRKSRC}/bed.6 ${STAGEDIR}${PREFIX}/share/man/man6
	@${MKDIR} ${STAGEDIR}${DATADIR}
.for file in 1 2 3 4 5 6
	${INSTALL_DATA} ${WRKSRC}/${file}.block \
		${STAGEDIR}${DATADIR}/${file}.block
.endfor

.include <bsd.port.mk>
