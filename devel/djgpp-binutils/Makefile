PORTNAME=	binutils
PORTVERSION=	2.17
PORTREVISION=	2
CATEGORIES=	devel
MASTER_SITES=	SOURCEWARE/binutils/releases
PKGNAMEPREFIX=	djgpp-

MAINTAINER=	johnson.peter@gmail.com
COMMENT=	FSF binutils for DJGPP cross-development
WWW=		https://www.delorie.com/djgpp/

LICENSE=	GPLv2

TARGET=		i586-pc-msdosdjgpp

USES=		gmake makeinfo tar:bzip2
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
CONFIGURE_OUTSOURCE=	yes
CONFIGURE_ARGS=	--target=${TARGET} \
		--with-gcc --with-gnu-ld --with-gnu-as \
		--disable-nls --disable-shared --disable-werror

INFO=		as bfd binutils ld configure standards
INFO_PATH=	${TARGET}/share/info

BINARIES=	addr2line ar as c++filt ld nm objcopy objdump ranlib \
		readelf size strings strip

post-install:
.for F in ${BINARIES}
	@${LN} -f ${STAGEDIR}${PREFIX}/bin/${TARGET}-$F ${STAGEDIR}${PREFIX}/${TARGET}/bin/$F
.endfor
	@${RM} ${STAGEDIR}${PREFIX}/${INFO_PATH}/dir

.include <bsd.port.mk>
