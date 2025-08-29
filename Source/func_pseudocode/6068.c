-[PAMediaConversionServiceResourceURLCollectionAccessProvider blastDoorSourceURL]
NSURL *__cdecl -[PAMediaConversionServiceResourceURLCollectionAccessProvider blastDoorSourceURL](
        PAMediaConversionServiceResourceURLCollectionAccessProvider *self,
        SEL a2)
{
  PAMediaConversionServiceResourceURLCollectionAccessProvider *v2; // x19
  NSURL *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retain(self);
  objc_sync_enter(v2);
  v3 = objc_retain(v2->_blastDoorSourceURL);
  objc_sync_exit(v2);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}