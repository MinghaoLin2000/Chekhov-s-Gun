_CFStringTokenizerCreate
CFStringTokenizerRef __cdecl CFStringTokenizerCreate(
        CFAllocatorRef alloc,
        CFStringRef string,
        CFRange range,
        CFOptionFlags options,
        CFLocaleRef locale)
{
  return _CFStringTokenizerCreate(alloc, string, range, options, locale);
}