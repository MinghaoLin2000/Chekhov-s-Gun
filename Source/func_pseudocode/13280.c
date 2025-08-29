-[TSUContainedZipArchive readChannelForEntry:validateCRC:]
id __cdecl -[TSUContainedZipArchive readChannelForEntry:validateCRC:](
        TSUContainedZipArchive *self,
        SEL a2,
        id a3,
        bool a4)
{
  id v4; // x0
  objc_super v6; // [xsp+0h] [xbp-10h] BYREF
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___TSUContainedZipArchive;
  v4 = objc_retainAutoreleasedReturnValue(-[TSUZipArchive readChannelForEntry:validateCRC:](&v6, "readChannelForEntry:validateCRC:", a3, 0LL));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}