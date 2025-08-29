-[IsExtensionEnabled requestingAppIcon]
id __cdecl -[IsExtensionEnabled requestingAppIcon](IsExtensionEnabled *self, SEL a2)
{
  NSWorkspace *v3; // x19
  id v4; // x20
  void *v5; // x21
  NSImage *v6; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace"));
  v4 = objc_retainAutoreleasedReturnValue(-[IsExtensionEnabled requestingAppURL](self, "requestingAppURL"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "path"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSWorkspace iconForFile:](v3, "iconForFile:", v5));
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}