-[TSUTemporaryDirectory URL]
id __cdecl -[TSUTemporaryDirectory URL](TSUTemporaryDirectory *self, SEL a2)
{
  id v2; // x20
  NSURL *v3; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[TSUTemporaryDirectory path](self, "path"));
  v3 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:isDirectory:](&OBJC_CLASS___NSURL, "fileURLWithPath:isDirectory:", v2, 1LL));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}