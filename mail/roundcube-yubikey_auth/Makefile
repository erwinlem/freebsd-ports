PORTNAME=	yubikey_auth
PORTVERSION=	g20180404
CATEGORIES=	mail
PKGNAMEPREFIX=	roundcube-
PKGNAMESUFFIX=	${PHP_PKGNAMESUFFIX}

MAINTAINER=	vidar@karlsen.tech
COMMENT=	Roundcube yubikey auth plugin
WWW=		https://github.com/northox/roundcube-yubikey-plugin

LICENSE=	GPLv2

BUILD_DEPENDS=	roundcube${PHP_PKGNAMESUFFIX}>=1.0:mail/roundcube@${PHP_FLAVOR}
RUN_DEPENDS=	roundcube${PHP_PKGNAMESUFFIX}>=1.0:mail/roundcube@${PHP_FLAVOR}

USES=		php:flavors
USE_GITHUB=	yes
GH_ACCOUNT=	northox
GH_PROJECT=	roundcube-yubikey-plugin
GH_TAGNAME=	383bbb3
USE_PHP=	curl

WWWDIR=		${PREFIX}/www/roundcube/plugins/roundcube_yubikey_authentication
NO_ARCH=	yes
NO_BUILD=	yes

post-patch:
	${REINPLACE_CMD} -e 's/roundcube_yubikey_plugin/YubiKey OTP/g' \
		${WRKSRC}/yubikey.js
	${REINPLACE_CMD} \
		-e "s/array('yubikey_authentication')/array('roundcube_yubikey_authentication')/g" \
		-e 's,plugins/yubikey_authentication,plugins/roundcube_yubikey_authentication,g' \
		${WRKSRC}/README.md

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC} && ${PAX} -r -w . ${STAGEDIR}${WWWDIR}
	cd ${STAGEDIR}${WWWDIR} && \
		${MV} config.inc.php config.inc.php.sample

.include <bsd.port.mk>
