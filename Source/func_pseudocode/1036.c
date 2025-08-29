-[DeviceStorageManagementViewController clickDoneButton:]
void __cdecl -[DeviceStorageManagementViewController clickDoneButton:](
        DeviceStorageManagementViewController *self,
        SEL a2,
        id a3)
{
  void *v3; // x20
  void *v4; // x19
  void *v5; // x0
  void *v6; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController view](self, "view", a3));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "window"));
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "sheetParent"));
  v6 = v5;
  if ( v5 )
  {
    objc_msgSend(v5, "endSheet:returnCode:", v4, 1LL);
  }
  else
  {
    objc_msgSend(v4, "close");
    objc_msgSend(NSApp, "stopModalWithCode:", 1LL);
  }
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}