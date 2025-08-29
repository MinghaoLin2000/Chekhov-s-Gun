-[IPPSession ippEndpoint:]
id __cdecl -[IPPSession ippEndpoint:](IPPSession *self, SEL a2, id a3)
{
  id v4; // x19
  IPPEndpoint *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = -[IPPEndpoint initWithSession:endpoint:](
         objc_alloc(&OBJC_CLASS___IPPEndpoint),
         "initWithSession:endpoint:",
         self,
         v4);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}