-[VideoConversionTask didEnqueue]
void __cdecl -[VideoConversionTask didEnqueue](VideoConversionTask *self, SEL a2)
{
  NSDate *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[VideoConversionTask setStatus:](self, "setStatus:", 5LL);
  v3 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
  -[VideoConversionTask setEnqueueTime:](self, "setEnqueueTime:", v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}