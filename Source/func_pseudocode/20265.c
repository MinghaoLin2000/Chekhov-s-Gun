-[ipp_t dataRepresentation]
id __cdecl -[ipp_t dataRepresentation](ipp_t *self, SEL a2)
{
  NSMutableData *v3; // x19
  void *v4; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  -[ipp_t setState:](self, "setState:", 0LL);
  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableData dataWithCapacity:](&OBJC_CLASS___NSMutableData, "dataWithCapacity:", 0LL));
  v4 = objc_autoreleasePoolPush();
  ippWriteIO(v3, (__int64 (__fastcall *)(void *, unsigned __int8 *, unsigned __int64))sub_10003CB1C, self);
  objc_autoreleasePoolPop(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}