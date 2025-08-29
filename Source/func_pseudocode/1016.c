-[DeviceManageBackupsViewController appendToToolTipString:backupValue:withPrefixString:]
void __cdecl -[DeviceManageBackupsViewController appendToToolTipString:backupValue:withPrefixString:](
        DeviceManageBackupsViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x19
  id v8; // x20
  id v9; // x21
  NSBundle *v10; // x22
  NSString *v11; // x23
  NSString *v12; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = objc_retain(a5);
  if ( v8 && ((unsigned int)objc_msgSend(v8, "isEqualToString:", &stru_1000BA220) & 1) == 0 )
  {
    if ( ((unsigned int)objc_msgSend(v7, "isEqualToString:", &stru_1000BA220) & 1) == 0 )
      objc_msgSend(v7, "appendString:", CFSTR("\n"));
    v10 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v11 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v10,
              "localizedStringForKey:value:table:",
              v9,
              &stru_1000BA220,
              0LL));
    objc_release(v10);
    v12 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v11, v8));
    objc_msgSend(v7, "appendString:", v12);
    objc_release(v12);
    objc_release(v11);
  }
  objc_release(v9);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}