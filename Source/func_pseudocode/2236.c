-[DeviceSettingsCalendarsViewController clickSyncOntoCheckBox:]
void __cdecl -[DeviceSettingsCalendarsViewController clickSyncOntoCheckBox:](
        DeviceSettingsCalendarsViewController *self,
        SEL a2,
        id a3)
{
  NSButton *v4; // x20
  NSControlStateValue v5; // x21
  AMPDeviceSyncPrefs *v6; // x20
  unsigned __int8 v7; // w21
  _QWORD v8[5]; // [xsp+8h] [xbp-48h] BYREF

  -[DeviceSettingsCalendarsViewController setDeleteExistingCalendars:](self, "setDeleteExistingCalendars:", 0LL);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  v5 = -[NSButton state](v4, "state");
  objc_release(v4);
  if ( !v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    if ( (unsigned int)-[AMPDeviceSyncPrefs syncCalendars](v6, "syncCalendars") )
    {
      v7 = -[DeviceSettingsCalendarsViewController warnedAboutShouldPromptToDeleteExistingCalendars](
             self,
             "warnedAboutShouldPromptToDeleteExistingCalendars");
      objc_release(v6);
      if ( (v7 & 1) == 0 )
      {
        v8[0] = _NSConcreteStackBlock;
        v8[1] = 3254779904LL;
        v8[2] = sub_1000512B0;
        v8[3] = &unk_1000B8FB0;
        v8[4] = self;
        -[DeviceSettingsCalendarsViewController promptForRemoveWithCompletionHandler:](
          self,
          "promptForRemoveWithCompletionHandler:",
          v8);
        -[DeviceSettingsCalendarsViewController setWarnedAboutShouldPromptToDeleteExistingCalendars:](
          self,
          "setWarnedAboutShouldPromptToDeleteExistingCalendars:",
          1LL);
        goto LABEL_7;
      }
    }
    else
    {
      objc_release(v6);
    }
    -[DeviceSettingsCalendarsViewController setDeleteExistingCalendars:](self, "setDeleteExistingCalendars:", 1LL);
  }
LABEL_7:
  -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  -[DeviceSettingsCalendarsViewController didChangeSyncOnCheckBox](self, "didChangeSyncOnCheckBox");
}