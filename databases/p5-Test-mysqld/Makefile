PORTNAME=	Test-mysqld
PORTVERSION=	1.0030
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for mysqld test runner
WWW=		https://metacpan.org/release/Test-mysqld

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor-Lite>=0:devel/p5-Class-Accessor-Lite \
		p5-DBI>=0:databases/p5-DBI \
		p5-File-Copy-Recursive>=0:devel/p5-File-Copy-Recursive
TEST_DEPENDS=	p5-Test-SharedFork>=0:devel/p5-Test-SharedFork

USES=		mysql perl5
USE_PERL5=	modbuildtiny

NO_ARCH=	yes

OPTIONS_SINGLE=	DB
OPTIONS_SINGLE_DB=	MARIADB MYSQL
OPTIONS_DEFAULT=MYSQL
MARIADB_DESC=	MariaDB database support

MARIADB_BUILD_DEPENDS=	p5-DBD-MariaDB>=0:databases/p5-DBD-MariaDB
MARIADB_RUN_DEPENDS=	p5-DBD-MariaDB>=0:databases/p5-DBD-MariaDB
MYSQL_BUILD_DEPENDS=	${DBD_MYSQL}
MYSQL_RUN_DEPENDS=	${DBD_MYSQL}

.include <bsd.port.mk>
