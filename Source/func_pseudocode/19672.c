-[IPPSession ippBrowseInfo:]
id __cdecl -[IPPSession ippBrowseInfo:](IPPSession *self, SEL a2, id a3)
{
  id v4; // x19
  IPPBrowseInfo *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = -[IPPBrowseInfo initWithSession:browseInfo:](
         objc_alloc(&OBJC_CLASS___IPPBrowseInfo),
         "initWithSession:browseInfo:",
         self,
         v4);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}