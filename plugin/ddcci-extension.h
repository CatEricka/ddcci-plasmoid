#ifndef KSCREEN_LISTENER_PLUGIN_H
#define KSCREEN_LISTENER_PLUGIN_H

#include <QtQml/qqml.h>
#include <QtDBus/QtDBus>

class DdcciExtension : public QObject {
    Q_OBJECT

public:
    explicit DdcciExtension(QObject *parent = nullptr);
    ~DdcciExtension() override;

Q_SIGNALS:
    void kscreenConfigChanged();

private Q_SLOTS:
    void kscreenBackendConfigChanged(const QDBusMessage& arg);
};

#endif // DDCCI_BRIGHTNESS_PLUGIN_H