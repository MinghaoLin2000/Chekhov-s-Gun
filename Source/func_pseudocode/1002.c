-[DeviceManageBackupsViewController returnCode:]
void __cdecl -[DeviceManageBackupsViewController returnCode:](
        DeviceManageBackupsViewController *self,
        SEL a2,
        signed __int64 a3)
{
  void *v4; // x21
  void *v5; // x19
  void *v6; // x0
  void *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController view](self, "view"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "window"));
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "sheetParent"));
  v7 = v6;
  if ( v6 )
  {
    objc_msgSend(v6, "endSheet:returnCode:", v5, a3);
  }
  else
  {
    objc_msgSend(v5, "close");
    objc_msgSend(NSApp, "stopModalWithCode:", a3);
  }
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}