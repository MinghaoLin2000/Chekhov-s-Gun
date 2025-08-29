+[NSImage glyphImageNamed:]
id __cdecl +[NSImage glyphImageNamed:](id a1, SEL a2, id a3)
{
  id v3; // x19
  NSImage *v4; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSImage _imageWithSystemSymbolName:](&OBJC_CLASS___NSImage, "_imageWithSystemSymbolName:", v3));
  if ( !v4 )
    v4 = objc_retainAutoreleasedReturnValue(+[NSImage imageNamed:](&OBJC_CLASS___NSImage, "imageNamed:", v3));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}