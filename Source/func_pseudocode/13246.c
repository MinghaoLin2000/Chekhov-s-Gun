-[SFUZipArchive readFilenameFromBuffer:size:]
id __cdecl -[SFUZipArchive readFilenameFromBuffer:size:](
        SFUZipArchive *self,
        SEL a2,
        const char *a3,
        unsigned __int64 a4)
{
  id result; // x0
  CFStringEncoding SystemEncoding; // w0

  result = objc_autorelease(objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithBytes:length:encoding:", a3, a4, 4LL));
  if ( !result )
  {
    SystemEncoding = CFStringGetSystemEncoding();
    result = objc_autorelease(
               objc_msgSend(
                 objc_alloc((Class)&OBJC_CLASS___NSString),
                 "initWithBytes:length:encoding:",
                 a3,
                 a4,
                 CFStringConvertEncodingToNSStringEncoding(SystemEncoding)));
    if ( !result )
    {
      +[SFUZipException raise:format:](
        &OBJC_CLASS___SFUZipException,
        "raise:format:",
        CFSTR("SFUZipFilenameError"),
        CFSTR("Could not read filename."));
      return 0LL;
    }
  }
  return result;
}