#include "ddcci-extension.h"

DdcciExtension::DdcciExtension(QObject *parent)
    : QObject(parent)
{
    QDBusConnection dbusSession = QDBusConnection::sessionBus();
    dbusSession.connect(
        "org.kde.KScreen",
        "/backend",
        "org.kde.kscreen.Backend",
        "configChanged",
        this,
        SLOT(kscreenBackendConfigChanged(QDBusMessage)));
}

DdcciExtension::~DdcciExtension() = default;

void DdcciExtension::kscreenBackendConfigChanged(const QDBusMessage& _arg)
{
    emit kscreenConfigChanged();
}