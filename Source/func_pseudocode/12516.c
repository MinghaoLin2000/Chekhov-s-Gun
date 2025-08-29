-[NSURL tsu_fileTypeIdentifierHandlingFileCoordinationPromises]
id __cdecl -[NSURL tsu_fileTypeIdentifierHandlingFileCoordinationPromises](NSURL *self, SEL a2)
{
  id v2; // x0
  id v4; // [xsp+8h] [xbp-8h] BYREF
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = 0LL;
  -[NSURL getResourceValue:forKey:error:](self, "getResourceValue:forKey:error:", &v4, NSURLTypeIdentifierKey, 0LL);
  v2 = objc_retain(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}