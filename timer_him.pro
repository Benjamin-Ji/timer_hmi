#-------------------------------------------------
#
# Project created by QtCreator 2019-06-06T14:48:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = timer_him
TEMPLATE = app


SOURCES += main.cpp\
        main_widget.cpp \
    indicator_light_widget.cpp \
    title_panel_widget.cpp \
    center_widget.cpp \
    sysinfo_all_ui/sysinfo_ac_power.cpp \
    sysinfo_all_ui/sysinfo_battery_status.cpp \
    sysinfo_all_ui/sysinfo_dc_power.cpp \
    sysinfo_all_ui/sysinfo_init_status.cpp \
    sysinfo_all_ui/sysinfo_ref_src.cpp \
    ext_src_all_ui/ext_src_satellit.cpp \
    ext_src_all_ui/ext_src_bcode.cpp \
    ext_src_all_ui/ext_src_swave.cpp \
    ext_src_all_ui/ext_src_lnet.cpp


HEADERS  += main_widget.h \
    indicator_light_widget.h \
    title_panel_widget.h \
    center_widget.h \
    sysinfo_all_ui/sysinfo_ac_power.h \
    sysinfo_all_ui/sysinfo_battery_status.h \
    sysinfo_all_ui/sysinfo_dc_power.h \
    sysinfo_all_ui/sysinfo_init_status.h \
    sysinfo_all_ui/sysinfo_ref_src.h \
    ext_src_all_ui/ext_src_satellit.h \
    ext_src_all_ui/ext_src_bcode.h \
    ext_src_all_ui/ext_src_swave.h \
    ext_src_all_ui/ext_src_lnet.h


FORMS    += main_widget.ui \
    indicator_light_widget.ui \
    title_panel_widget.ui \
    center_widget.ui \
    sysinfo_all_ui/sysinfo_ac_power.ui \
    sysinfo_all_ui/sysinfo_battery_status.ui \
    sysinfo_all_ui/sysinfo_dc_power.ui \
    sysinfo_all_ui/sysinfo_init_status.ui \
    sysinfo_all_ui/sysinfo_ref_src.ui \
    ext_src_all_ui/ext_src_satellit.ui \
    ext_src_all_ui/ext_src_bcode.ui \
    ext_src_all_ui/ext_src_swave.ui \
    ext_src_all_ui/ext_src_lnet.ui


INCLUDEPATH +=  sysinfo_all_ui

RESOURCES += \
    indicator_light_pix.qrc

target.path = /work
INSTALLS += target

QMAKE_CXXFLAGS +=  -Wno-unused-parameter



if(contains(Platform,arm)){ # { must here
    message("compile for arm")
    INCLUDEPATH += /usr/local/qwt-6.1.4-arm/include
    LIBS += -L"/usr/local/qwt-6.1.4-arm/lib/" -lqwt

}


if(contains(Platform,x64)){  # { must here
    message("compile for x64")
    INCLUDEPATH += /usr/local/qwt-6.1.4/include
    LIBS += -L"/usr/local/qwt-6.1.4/lib/" -lqwt

}





