-[DeviceSettingsContactsViewController clickSyncOntoCheckBox:]
void __cdecl -[DeviceSettingsContactsViewController clickSyncOntoCheckBox:](
        DeviceSettingsContactsViewController *self,
        SEL a2,
        id a3)
{
  NSButton *v4; // x20
  NSControlStateValue v5; // x21
  AMPDeviceSyncPrefs *v6; // x20
  unsigned __int8 v7; // w21
  _QWORD v8[5]; // [xsp+8h] [xbp-48h] BYREF

  -[DeviceSettingsContactsViewController setDeleteExistingContacts:](self, "setDeleteExistingContacts:", 0LL);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  v5 = -[NSButton state](v4, "state");
  objc_release(v4);
  if ( !v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    if ( (unsigned int)-[AMPDeviceSyncPrefs syncContacts](v6, "syncContacts") )
    {
      v7 = -[DeviceSettingsContactsViewController warnedAboutShouldPromptToDeleteExistingContacts](
             self,
             "warnedAboutShouldPromptToDeleteExistingContacts");
      objc_release(v6);
      if ( (v7 & 1) == 0 )
      {
        v8[0] = _NSConcreteStackBlock;
        v8[1] = 3254779904LL;
        v8[2] = sub_100060E10;
        v8[3] = &unk_1000B8FB0;
        v8[4] = self;
        -[DeviceSettingsContactsViewController promptForRemoveWithCompletionHandler:](
          self,
          "promptForRemoveWithCompletionHandler:",
          v8);
        -[DeviceSettingsContactsViewController setWarnedAboutShouldPromptToDeleteExistingContacts:](
          self,
          "setWarnedAboutShouldPromptToDeleteExistingContacts:",
          1LL);
        goto LABEL_7;
      }
    }
    else
    {
      objc_release(v6);
    }
    -[DeviceSettingsContactsViewController setDeleteExistingContacts:](self, "setDeleteExistingContacts:", 1LL);
  }
LABEL_7:
  -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  -[DeviceSettingsContactsViewController didChangeSyncOnCheckBox](self, "didChangeSyncOnCheckBox");
}