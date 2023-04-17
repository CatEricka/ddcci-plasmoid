add_definitions(-DTRANSLATION_DOMAIN=\"plasma_applet_org.kde.plasma.ddcci-brightness\")

add_library(ddccibrightnessextension SHARED ddcci-extension-register.cpp ddcci-extension.cpp)

target_link_libraries(ddccibrightnessextension
    KF5::I18n
    Qt5::Gui
    Qt5::Qml
    Qt5::DBus
)
