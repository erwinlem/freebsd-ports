PORTNAME=	robotframework-seleniumlibrary
PORTVERSION=	6.3.0
CATEGORIES=	devel www python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Web testing library for Robot Framework
WWW=		https://robotframework.org/SeleniumLibrary/ \
		https://github.com/robotframework/SeleniumLibrary

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>=0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}robotframework>=4.1.3:devel/py-robotframework@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}robotframework-pythonlibcore>=3.0.0:devel/py-robotframework-pythonlibcore@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}selenium>=4.3.0:www/py-selenium@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent pep517

NO_ARCH=	yes

.include <bsd.port.mk>
