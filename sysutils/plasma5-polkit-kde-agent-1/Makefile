PORTNAME=	polkit-kde-agent-1
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	sysutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 daemon providing a polkit authentication UI
WWW=		https://www.kde.org/plasma-desktop

LIB_DEPENDS=	libpolkit-qt5-core-1.so:sysutils/polkit-qt-1@qt5

USES=		cmake compiler:c++11-lib gettext kde:5 qt:5 tar:xz xorg
USE_KDE=	config coreaddons crash dbusaddons i18n iconthemes \
		notifications widgetsaddons windowsystem \
		ecm:build
USE_QT=		core dbus gui widgets \
		buildtools:build qmake:build
USE_XORG=	x11

.include <bsd.port.mk>
