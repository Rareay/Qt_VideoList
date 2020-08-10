#include "videolist.h"
#include "videolistplugin.h"

#include <QtPlugin>

VideoListPlugin::VideoListPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void VideoListPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool VideoListPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *VideoListPlugin::createWidget(QWidget *parent)
{
    return new VideoList(parent);
}

QString VideoListPlugin::name() const
{
    return QLatin1String("VideoList");
}

QString VideoListPlugin::group() const
{
    return QLatin1String("");
}

QIcon VideoListPlugin::icon() const
{
    return QIcon();
}

QString VideoListPlugin::toolTip() const
{
    return QLatin1String("");
}

QString VideoListPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool VideoListPlugin::isContainer() const
{
    return false;
}

QString VideoListPlugin::domXml() const
{
    return QLatin1String("<widget class=\"VideoList\" name=\"videoList\">\n</widget>\n");
}

QString VideoListPlugin::includeFile() const
{
    return QLatin1String("videolist.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(videolistplugin, VideoListPlugin)
#endif // QT_VERSION < 0x050000
