-[SFUZipEntry data]
id __cdecl -[SFUZipEntry data](SFUZipEntry *self, SEL a2)
{
  signed __int64 v3; // x19
  NSMutableData *v4; // x20
  void *v5; // x22

  v3 = -[SFUZipEntry dataLength](self, "dataLength");
  if ( v3 < 0 )
    +[SFUZipException raise:format:](
      &OBJC_CLASS___SFUZipException,
      "raise:format:",
      CFSTR("SFUZipEntryError"),
      CFSTR("Couldn't allocate NSMutableData with size: %qu"),
      v3);
  v4 = +[NSMutableData dataWithLength:](&OBJC_CLASS___NSMutableData, "dataWithLength:", v3);
  if ( !v4 )
    +[SFUZipException raise:format:](
      &OBJC_CLASS___SFUZipException,
      "raise:format:",
      CFSTR("SFUZipEntryError"),
      CFSTR("Couldn't allocate NSMutableData with size: %qu"),
      v3);
  v5 = objc_autoreleasePoolPush();
  if ( objc_msgSend(
         -[SFUZipEntry inputStream](self, "inputStream"),
         "readToBuffer:size:",
         -[NSMutableData mutableBytes](v4, "mutableBytes"),
         v3) != (void *)v3 )
    +[SFUZipException raise:format:](
      &OBJC_CLASS___SFUZipException,
      "raise:format:",
      CFSTR("SFUZipEntryError"),
      CFSTR("Couldn't read data with size: %qu"),
      v3);
  objc_autoreleasePoolPop(v5);
  return v4;
}