PORTNAME=	PGP
PORTVERSION=	0.3a
PORTREVISION=	2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl5 module to work with PGP messages
WWW=		https://metacpan.org/release/PGP

ONLY_FOR_ARCHS=		amd64 i386 powerpc64 powerpc64le

RUN_DEPENDS=	pgpin:security/pgpin

PORTSCOUT=	skipv:1.0

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e 's|WriteMakefile;|WriteMakefile( 'NAME' => "PGP::Pipe" );|' \
		${WRKSRC}/Makefile.PL
	@${REINPLACE_CMD} -e '/^=over 4/d' ${WRKSRC}/PGP/Pipe.pm

pre-configure:
	@${CP} ${WRKSRC}/PGP/Pipe.pm ${WRKSRC}

.include <bsd.port.mk>
