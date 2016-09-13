#-------------------------------------------------
#
# Project created by QtCreator 2016-09-04T23:47:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CrudeMini
TEMPLATE = app


SOURCES += main.cpp\
    Core/Skeleton.cpp \
    Core/Bone.cpp \
    Core/SpriteSlot.cpp \
    Core/Sprite.cpp \
    Core/Mesh.cpp \
    Core/Skin.cpp \
    Core/Animation.cpp \
    Core/BridgeSheet.cpp \
    Core/CurveGraph.cpp \
    Core/Timelines/Timeline.cpp \
    Core/Timelines/ScaleXTimeline.cpp \
    Core/Timelines/ScaleYTimeline.cpp \
    Core/Timelines/RotateTimeline.cpp \
    Core/Timelines/TranslateXTimeline.cpp \
    Core/Timelines/TranslateYTimeline.cpp \
    Core/Timelines/TranslateXVertexTimeline.cpp \
    Core/Timelines/TranslateYVertexTimeline.cpp \
    Core/Timelines/DrawOrderTimeline.cpp \
    Core/Timelines/TintTimeline.cpp \
    Core/Timelines/SwapTimeline.cpp \
    Core/Timelines/Key.cpp \
    Core/Timelines/ScaleXKey.cpp \
    Core/Timelines/ScaleYKey.cpp \
    Core/Timelines/RotateKey.cpp \
    Core/Timelines/TranslateXKey.cpp \
    Core/Timelines/TranslateYKey.cpp \
    Core/Timelines/TranslateXVertexKey.cpp \
    Core/Timelines/TranslateYVertexKey.cpp \
    Core/Timelines/DrawOrderKey.cpp \
    Core/Timelines/TintKey.cpp \
    Core/Timelines/SwapKey.cpp \
    Core/Timelines/SubLoop.cpp \
    Core/Timelines/ShearXTimeline.cpp \
    Core/Timelines/ShearYTimeline.cpp \
    Core/Timelines/ShearXKey.cpp \
    Core/Timelines/ShearYKey.cpp \
    GUI/MainWindow.cpp

HEADERS  += \
    Core/Skeleton.h \
    Core/Bone.h \
    Core/SpriteSlot.h \
    Core/Sprite.h \
    Core/Mesh.h \
    Core/Skin.h \
    Core/Animation.h \
    Core/BridgeSheet.h \
    Core/CurveGraph.h \
    Core/Timelines/Timeline.h \
    Core/Timelines/ScaleXTimeline.h \
    Core/Timelines/ScaleYTimeline.h \
    Core/Timelines/RotateTimeline.h \
    Core/Timelines/TranslateXTimeline.h \
    Core/Timelines/TranslateYTimeline.h \
    Core/Timelines/TranslateXVertexTimeline.h \
    Core/Timelines/TranslateYVertexTimeline.h \
    Core/Timelines/DrawOrderTimeline.h \
    Core/Timelines/TintTimeline.h \
    Core/Timelines/SwapTimeline.h \
    Core/Timelines/Key.h \
    Core/Timelines/ScaleXKey.h \
    Core/Timelines/ScaleYKey.h \
    Core/Timelines/RotateKey.h \
    Core/Timelines/TranslateXKey.h \
    Core/Timelines/TranslateYKey.h \
    Core/Timelines/TranslateXVertexKey.h \
    Core/Timelines/TranslateYVertexKey.h \
    Core/Timelines/DrawOrderKey.h \
    Core/Timelines/TintKey.h \
    Core/Timelines/SwapKey.h \
    Core/Timelines/SubLoop.h \
    Core/Timelines/ShearXTimeline.h \
    Core/Timelines/ShearYTimeline.h \
    Core/Timelines/ShearXKey.h \
    Core/Timelines/ShearYKey.h \
    GUI/MainWindow.h

FORMS    += GUI/MainWindow.ui
