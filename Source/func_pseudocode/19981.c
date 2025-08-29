_PKURLWithUTF8String
NSURL *__fastcall PKURLWithUTF8String(__int64 a1)
{
  NSString *v1; // x19
  NSURL *v2; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( a1 )
  {
    v1 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", a1));
    v2 = objc_retainAutoreleasedReturnValue(PKURLWithString(v1));
    objc_release(v1);
  }
  else
  {
    v2 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}