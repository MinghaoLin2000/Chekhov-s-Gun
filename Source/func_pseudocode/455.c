+[NSImage glyphImageNamed:pointSize:]
id __cdecl +[NSImage glyphImageNamed:pointSize:](id a1, SEL a2, id a3, double a4)
{
  id v5; // x19
  void *v6; // x0
  void *v7; // x20
  NSImageSymbolConfiguration *v8; // x22
  NSImage *v9; // x21
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(+[NSImage _imageWithSystemSymbolName:](&OBJC_CLASS___NSImage, "_imageWithSystemSymbolName:", v5));
  if ( !v6
    || (v7 = v6,
        v8 = objc_retainAutoreleasedReturnValue(
               +[NSImageSymbolConfiguration configurationWithPointSize:weight:scale:](
                 &OBJC_CLASS___NSImageSymbolConfiguration,
                 "configurationWithPointSize:weight:scale:",
                 2LL,
                 a4,
                 NSFontWeightMedium)),
        v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "imageWithSymbolConfiguration:", v8)),
        objc_release(v7),
        objc_release(v8),
        !v9) )
  {
    v9 = objc_retainAutoreleasedReturnValue(+[NSImage imageNamed:](&OBJC_CLASS___NSImage, "imageNamed:", v5));
  }
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}