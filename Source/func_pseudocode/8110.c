-[XPCSignpostReader getBundleIDFromEvent:]
id __cdecl -[XPCSignpostReader getBundleIDFromEvent:](XPCSignpostReader *self, SEL a2, id a3)
{
  void *v3; // x19
  void *v4; // x20
  NSBundle *v5; // x19
  NSString *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "processImagePath"));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "stringByDeletingLastPathComponent"));
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSBundle bundleWithPath:](&OBJC_CLASS___NSBundle, "bundleWithPath:", v4));
  v6 = objc_retainAutoreleasedReturnValue(-[NSBundle bundleIdentifier](v5, "bundleIdentifier"));
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}