-[IPPSession httpWithURL:]
id __cdecl -[IPPSession httpWithURL:](IPPSession *self, SEL a2, id a3)
{
  id v4; // x19
  platform_http_t *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = -[platform_http_t initWithURL:session:](
         objc_alloc(&OBJC_CLASS___platform_http_t),
         "initWithURL:session:",
         v4,
         self);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}