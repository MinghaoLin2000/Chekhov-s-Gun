-[XPCSignpostReader getBundleIDFromInterval:]
id __cdecl -[XPCSignpostReader getBundleIDFromInterval:](XPCSignpostReader *self, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x20
  void *v5; // x21
  unsigned int v6; // w22
  void *v7; // x21
  void *v8; // x22
  NSString *v9; // x20
  void *v10; // x20
  void *v11; // x21
  void *v12; // x22
  NSBundle *v13; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "beginEvent"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
  v6 = (unsigned int)objc_msgSend(v5, "isEqualToString:", CFSTR("HangInterval"));
  objc_release(v5);
  objc_release(v4);
  if ( !v6
    || (v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "beginEvent")),
        v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "attributes")),
        v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectForKey:", CFSTR("BundleIdOverride"))),
        objc_release(v8),
        objc_release(v7),
        !v9) )
  {
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "endEvent"));
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "processImagePath"));
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "stringByDeletingLastPathComponent"));
    objc_release(v11);
    objc_release(v10);
    v13 = objc_retainAutoreleasedReturnValue(+[NSBundle bundleWithPath:](&OBJC_CLASS___NSBundle, "bundleWithPath:", v12));
    v9 = objc_retainAutoreleasedReturnValue(-[NSBundle bundleIdentifier](v13, "bundleIdentifier"));
    objc_release(v13);
    objc_release(v12);
  }
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}