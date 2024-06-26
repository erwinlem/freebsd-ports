PORTNAME=	stardict-dictd_mova
PORTVERSION=	2.4.2
PORTREVISION=	9
CATEGORIES=	textproc
MASTER_SITES=	http://download.huzheng.org/mova.org/
DIST_SUBDIR=	stardict

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Dictionaries from www.mova.org for StarDict
WWW=		https://stardict.sourceforge.net/

BROKEN=		Unfetchable

NO_BUILD=	yes
NO_ARCH=	yes
USES=		tar:bzip2

DATADIR=	${PREFIX}/share/stardict
DICTDIR=	${DATADIR}/dic
PORTDATA=	*

DICTIONARIES=	1000pbio \
		aviation \
		beslov \
		biology \
		brok_and_efr \
		compbe \
		deutsch \
		engcom \
		ethnographic \
		findict \
		geology_enru \
		geology_ruen \
		idioms \
		korolew_enru \
		korolew_ruen \
		mech \
		ozhegov \
		religion \
		sc-abbr \
		sinyagin_abbrev \
		sinyagin_alexeymavrin \
		sinyagin_business \
		sinyagin_computer \
		sinyagin_general_er \
		sinyagin_general_re \
		sinyagin_unsorted \
		slovnyk_be-en \
		slovnyk_be-pl \
		slovnyk_be-ru \
		slovnyk_be-uk \
		slovnyk_en-be \
		slovnyk_en-pl \
		slovnyk_en-ru \
		slovnyk_en-uk \
		slovnyk_pl-be \
		slovnyk_pl-en \
		slovnyk_pl-ru \
		slovnyk_pl-uk \
		slovnyk_ru-be \
		slovnyk_ru-en \
		slovnyk_ru-pl \
		slovnyk_ru-uk \
		slovnyk_uk-be \
		slovnyk_uk-en \
		slovnyk_uk-pl \
		slovnyk_uk-ru \
		smiley \
		sokrat_enru \
		sokrat_ruen \
		swedish \
		teo \
		ushakov \
		zhelezyaki_abbr \
		zhelezyaki_analogs

OPTIONS_DEFINE=	ALL
OPTIONS_DEFAULT=	ALL
NO_OPTIONS_SORT=	yes
ALL_DESC=	All dictionaries
.for dict in ${DICTIONARIES}
OPTIONS_DEFINE+=	${dict:tu:S|-|_|g}
${dict:tu:S|-|_|g}_DESC=	${dict} dictionary
${dict}_DISTNAME=	stardict-dictd_www.mova.org_${dict}-${PORTVERSION}
.endfor

.include <bsd.port.options.mk>

.for dict in ${DICTIONARIES}
.if ${PORT_OPTIONS:MALL} || ${PORT_OPTIONS:M${dict:tu:S|-|_|g}}
INSTALL_DICTIONARIES+=	${dict}
DISTFILES+=	${${dict}_DISTNAME}${EXTRACT_SUFX}
.endif
.endfor

do-install:
	${MKDIR} ${STAGEDIR}${DICTDIR}
.for dict in ${INSTALL_DICTIONARIES}
	${INSTALL_DATA} ${WRKDIR}/${${dict}_DISTNAME}/* \
		${STAGEDIR}${DICTDIR}
.endfor

.include <bsd.port.mk>
