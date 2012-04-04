/****************************************************************************
**
** Copyright (C) 2012 Digia Plc
** All rights reserved.
** For any questions to Digia, please use contact form at http://qt.digia.com
**
** This file is part of the Qt Commercial Charts Add-on.
**
** $QT_BEGIN_LICENSE$
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.
**
** If you have questions regarding the use of this file, please use
** contact form at http://qt.digia.com
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef DRILLDOWNSLICE_H
#define DRILLDOWNSLICE_H

#include <QPieSlice>

QTCOMMERCIALCHART_BEGIN_NAMESPACE
class QSeries;
QTCOMMERCIALCHART_END_NAMESPACE

QTCOMMERCIALCHART_USE_NAMESPACE

class DrilldownSlice : public QPieSlice
{
    Q_OBJECT

public:
    DrilldownSlice(qreal value, QString prefix, QSeries* drilldownSeries);
    virtual ~DrilldownSlice();
    QSeries* drilldownSeries() const;

public Q_SLOTS:
    void updateLabel();
    void showHighlight();
    void hideHighlight();

private:
    QSeries* m_drilldownSeries;
    QString m_prefix;
};

#endif // DRILLDOWNSLICE_H