-[VideoTranscodingTask performExport]
void __cdecl -[VideoTranscodingTask performExport](VideoTranscodingTask *self, SEL a2)
{
  NSString *v2; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
  +[NSException raise:format:](
    &OBJC_CLASS___NSException,
    "raise:format:",
    NSInternalInconsistencyException,
    CFSTR("Subclasses must override %@"),
    v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}