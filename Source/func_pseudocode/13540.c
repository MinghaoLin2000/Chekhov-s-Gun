-[NSString tsu_uncommentedAddressRespectingGroups]
id __cdecl -[NSString tsu_uncommentedAddressRespectingGroups](NSString *self, SEL a2)
{
  void *v3; // x20
  void *v4; // x0
  NSString *v6; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = -[NSString rangeOfString:](self, "rangeOfString:", CFSTR("@"));
  v4 = -[NSString rangeOfString:](self, "rangeOfString:", CFSTR("<"));
  if ( v3 == (void *)0x7FFFFFFFFFFFFFFFLL && v4 == (void *)0x7FFFFFFFFFFFFFFFLL )
    v6 = objc_retain(self);
  else
    v6 = (NSString *)objc_retainAutoreleasedReturnValue(-[NSString tsu_uncommentedAddress](self, "tsu_uncommentedAddress"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}