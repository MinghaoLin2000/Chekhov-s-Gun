__Z12getNamedAttrIU8__strongP7NSArrayIP8NSNumberEET_P5ipp_tP8NSString
id __fastcall getNamedAttr<NSArray<NSNumber *> * {__strong}>(int a1, int a2)
{
  id v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue((id)sub_100032324(a1, a2, &stru_10009E4A8));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}