-[NSString tsu_preferredIdentifierForTagClass:conformingToUTI:]
id __cdecl -[NSString tsu_preferredIdentifierForTagClass:conformingToUTI:](NSString *self, SEL a2, id a3, id a4)
{
  __CFString *PreferredIdentifierForTag; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  PreferredIdentifierForTag = (__CFString *)UTTypeCreatePreferredIdentifierForTag(
                                              (CFStringRef)a3,
                                              (CFStringRef)self,
                                              (CFStringRef)a4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(PreferredIdentifierForTag);
}