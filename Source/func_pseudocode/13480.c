-[NSString tsu_stringByAppendingSeparator:format:]
id __cdecl -[NSString tsu_stringByAppendingSeparator:format:](NSString *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  NSString *v7; // x21
  NSString *v8; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]
  __int64 v11; // [xsp+50h] [xbp+10h] BYREF

  v6 = objc_retain(a3);
  v7 = (NSString *)objc_retainAutoreleasedReturnValue(
                     +[NSString tsu_stringWithFormat:arguments:](
                       &OBJC_CLASS___NSString,
                       "tsu_stringWithFormat:arguments:",
                       a4,
                       &v11));
  if ( -[NSString length](self, "length") )
  {
    v8 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingFormat:](self, "stringByAppendingFormat:", CFSTR("%@%@"), v6, v7));
    objc_release(v7);
    v7 = v8;
  }
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}