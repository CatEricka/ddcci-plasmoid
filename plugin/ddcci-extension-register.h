#ifndef DDCCI_BRIGHTNESS_PLUGIN_H
#define DDCCI_BRIGHTNESS_PLUGIN_H

#include <QtQml/QQmlExtensionPlugin>

class DdcctExtensionRegister : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlEngineExtensionInterface_iid)

public:
    void registerTypes(const char *uri) override;
};

#endif // DDCCI_BRIGHTNESS_PLUGIN_H
