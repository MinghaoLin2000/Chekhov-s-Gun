+[AutofillNode folderImage]
NSImage *__cdecl +[AutofillNode folderImage](id a1, SEL a2)
{
  void *v2; // x0
  id v3; // x0
  void *v4; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = (void *)qword_1000DAA40;
  if ( !qword_1000DAA40 )
  {
    v3 = objc_retainAutoreleasedReturnValue(+[NSImage glyphImageNamed:](&OBJC_CLASS___NSImage, "glyphImageNamed:", CFSTR("folder")));
    v4 = (void *)qword_1000DAA40;
    qword_1000DAA40 = (__int64)v3;
    objc_release(v4);
    v2 = (void *)qword_1000DAA40;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSImage *)objc_retainAutoreleaseReturnValue(v2);
}