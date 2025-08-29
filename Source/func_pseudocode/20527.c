_CFStringCreateStringWithValidatedFormat
CFStringRef CFStringCreateStringWithValidatedFormat(
        CFAllocatorRef alloc,
        CFDictionaryRef formatOptions,
        CFStringRef validFormatSpecifiers,
        CFStringRef format,
        CFErrorRef *errorPtr,
        ...)
{
  return _CFStringCreateStringWithValidatedFormat(alloc, formatOptions, validFormatSpecifiers, format, errorPtr);
}