PORTNAME=	datatest
PORTVERSION=	0.11.1
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Testing tools for data validation and analysis
WWW=		https://github.com/shawnbrown/datatest

LICENSE=	APACHE20

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>=0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent pep517

NO_ARCH=	yes

OPTIONS_DEFINE=	OPTIONAL
OPTIONAL_DESC=	Optional dependencies

OPTIONAL_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dbfread>=0:textproc/py-dbfread@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}numpy>=0,1:math/py-numpy@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}pandas>=0,1:math/py-pandas@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}squint>=0:databases/py-squint@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}xlrd>=0:textproc/py-xlrd@${PY_FLAVOR}

.include <bsd.port.mk>
