PORTNAME=	Cookie-Baker
PORTVERSION=	0.12
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Cookie string generator/parser
WWW=		https://metacpan.org/release/Cookie-Baker

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-URI>=0:net/p5-URI
TEST_DEPENDS=	p5-Test-Time>=0:devel/p5-Test-Time

USES=		perl5
USE_PERL5=	modbuildtiny

NO_ARCH=	yes

.include <bsd.port.mk>
