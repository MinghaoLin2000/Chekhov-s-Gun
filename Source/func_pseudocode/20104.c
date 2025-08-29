__Z12getNamedAttrIU8__strongP5NSURLET_P5ipp_tP8NSString
NSURL *__fastcall getNamedAttr<NSURL * {__strong}>(int a1, int a2)
{
  id v2; // x19
  NSURL *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(getNamedAttr<NSString * {__strong}>(a1, a2));
  if ( v2 )
    v3 = objc_retainAutoreleasedReturnValue(+[NSURL URLWithString:](&OBJC_CLASS___NSURL, "URLWithString:", v2));
  else
    v3 = 0LL;
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}