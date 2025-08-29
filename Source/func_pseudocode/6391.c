-[VideoConversionTask performConversion]
void __cdecl -[VideoConversionTask performConversion](VideoConversionTask *self, SEL a2)
{
  NSDate *v3; // x20
  NSMutableDictionary *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
  v4 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask resultInformation](self, "resultInformation"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](
    v4,
    "setObject:forKeyedSubscript:",
    v3,
    CFSTR("PAMediaConversionServiceConversionStartDateKey"));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}