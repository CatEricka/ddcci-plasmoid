#include "ddcci-extension-register.h"
#include "ddcci-extension.h"

void DdcctExtensionRegister::registerTypes(const char *uri)
{
    qmlRegisterType<DdcciExtension>("de.davidhi.ddcci_brightness", 1, 0, "DdcciExtension");
}
