/***************************************************************************
 *   Copyright (C) 2006 by Peter Penz                                      *
 *   peter.penz@gmx.at                                                     *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA            *
 ***************************************************************************/
#ifndef BEHAVIORSETTINGSPAGE_H
#define BEHAVIORSETTINGSPAGE_H

#include "dolphin_generalsettings.h"
#include "settings/settingspagebase.h"

#include <QUrl>

class QCheckBox;
class QLabel;
class QRadioButton;

/**
 * @brief Tab page for the 'Behavior' settings of the Dolphin settings dialog.
 */
class BehaviorSettingsPage : public SettingsPageBase
{
    Q_OBJECT

public:
    BehaviorSettingsPage(const QUrl &url, QWidget* parent);
    ~BehaviorSettingsPage() override;

    /** @see SettingsPageBase::applySettings() */
    void applySettings() override;

    /** @see SettingsPageBase::restoreDefaults() */
    void restoreDefaults() override;

private:
    void loadSettings();
    void setSortingChoiceValue(GeneralSettings* settings);
    void loadSortingChoiceSettings();

private:
    QUrl m_url;

    QRadioButton* m_localViewProps;
    QRadioButton* m_globalViewProps;

    QCheckBox* m_showToolTips;
    QLabel* m_configureToolTips;
    QCheckBox* m_showSelectionToggle;

    QRadioButton* m_naturalSorting;
    QRadioButton* m_caseSensitiveSorting;
    QRadioButton* m_caseInsensitiveSorting;

    QCheckBox* m_renameInline;
    QCheckBox* m_useTabForSplitViewSwitch;
    QCheckBox* m_closeFocusedSplitView;
};

#endif
