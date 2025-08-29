-[NSString tsu_allFilenameExtensionIdentifiersForTag]
id __cdecl -[NSString tsu_allFilenameExtensionIdentifiersForTag](NSString *self, SEL a2)
{
  CFArrayRef AllIdentifiersForTag; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  AllIdentifiersForTag = UTTypeCreateAllIdentifiersForTag(
                           (CFStringRef)UTTagClassFilenameExtension,
                           (CFStringRef)self,
                           0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(AllIdentifiersForTag);
}