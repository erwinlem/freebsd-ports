PORTNAME=	texi2html
PORTVERSION=	5.0
PORTREVISION=	5
PORTEPOCH=	1
CATEGORIES=	textproc
MASTER_SITES=	SAVANNAH

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Texinfo to HTML converter
WWW=		https://www.nongnu.org/texi2html/

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
NO_ARCH=	yes
CONFIGURE_ENV=	PERL=${PERL}
CONFIGURE_ARGS=	--disable-multiplatform
USES=		gettext-tools:build gmake perl5 shebangfix tar:bzip2
SHEBANG_FILES=	*.pl

OPTIONS_DEFINE=	NLS DOCS
OPTIONS_SUB=	yes
NLS_CONFIGURE_ENABLE=nls translations

PROGRAM_PREFIX?=
PLIST_SUB=	PROGRAM_PREFIX=${PROGRAM_PREFIX} \
		TEXINFODIR=share/texinfo

.if !empty(PROGRAM_PREFIX)
CONFIGURE_ARGS=	--program-prefix="${PROGRAM_PREFIX}"
.endif

INFO=		texi2html

pre-everything::
	@${ECHO} ""
	@${ECHO} "You can define the PROGRAM_PREFIX variable to change the name that"
	@${ECHO} "the texi2html program is installed as."
	@${ECHO} ""

post-patch:
	@${REINPLACE_CMD} -e 's/^translations.pl/_&/' \
		-e '/^install-data/s|i18n|&/en.thl|' ${WRKSRC}/Makefile.in
	@${CHMOD} +x ${WRKSRC}/install-sh

.include <bsd.port.mk>
