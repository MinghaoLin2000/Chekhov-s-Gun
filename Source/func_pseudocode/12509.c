-[NSURL tsu_documentIdentifier]
id __cdecl -[NSURL tsu_documentIdentifier](NSURL *self, SEL a2)
{
  unsigned __int8 v2; // w19
  id v3; // x0
  id v5; // [xsp+8h] [xbp-18h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = 0LL;
  v2 = -[NSURL getResourceValue:forKey:error:](
         self,
         "getResourceValue:forKey:error:",
         &v5,
         NSURLDocumentIdentifierKey,
         0LL);
  v3 = objc_retain(v5);
  if ( (v2 & 1) == 0 )
  {
    objc_release(v3);
    v3 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}