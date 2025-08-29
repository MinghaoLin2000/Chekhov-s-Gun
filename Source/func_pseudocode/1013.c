-[DeviceManageBackupsViewController tableView:viewForTableColumn:row:]
id __cdecl -[DeviceManageBackupsViewController tableView:viewForTableColumn:row:](
        DeviceManageBackupsViewController *self,
        SEL a2,
        id a3,
        id a4,
        signed __int64 a5)
{
  id v8; // x21
  id v9; // x23
  void *v10; // x19
  NSArray *v11; // x24
  id v12; // x20
  void *v13; // x24
  void *v14; // x21
  void *v15; // x23
  void *v16; // x24
  void *v17; // x24
  unsigned int v18; // w25
  __int64 v19; // x24
  void *v20; // x25
  id v21; // x24
  void *v22; // x25
  id v23; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v8 = objc_retain(a4);
  v9 = objc_retain(a3);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "identifier"));
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController backups](self, "backups"));
  v12 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v11, "objectAtIndexedSubscript:", a5));
  objc_release(v11);
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "identifier"));
  objc_release(v8);
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "makeViewWithIdentifier:owner:", v13, self));
  objc_release(v9);
  objc_release(v13);
  if ( (unsigned int)objc_msgSend(v10, "isEqualToString:", CFSTR("name")) )
  {
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "objectForKeyedSubscript:", AMPDeviceBackupDisplayNameKey));
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "textField"));
    objc_msgSend(v16, "setStringValue:", v15);
    objc_release(v16);
    v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "objectForKeyedSubscript:", AMPDeviceBackupIsEncryptedKey));
    v18 = (unsigned int)objc_msgSend(v17, "boolValue");
    objc_release(v17);
    v19 = v18 ^ 1;
    v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "imageView"));
    objc_msgSend(v20, "setHidden:", v19);
    objc_release(v20);
    v21 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController toolTipForBackup:](self, "toolTipForBackup:", v12));
    objc_msgSend(v14, "setToolTip:", v21);
  }
  else
  {
    if ( !(unsigned int)objc_msgSend(v10, "isEqualToString:", CFSTR("date")) )
      goto LABEL_6;
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "objectForKeyedSubscript:", AMPDeviceBackupLastBackupDateKey));
    v21 = objc_retainAutoreleasedReturnValue(+[NSString displayStringForDate:](&OBJC_CLASS___NSString, "displayStringForDate:", v15));
    v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "textField"));
    objc_msgSend(v22, "setStringValue:", v21);
    objc_release(v22);
    v23 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController toolTipForBackup:](self, "toolTipForBackup:", v12));
    objc_msgSend(v14, "setToolTip:", v23);
    objc_release(v23);
  }
  objc_release(v21);
  objc_release(v15);
LABEL_6:
  objc_release(v12);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v14);
}