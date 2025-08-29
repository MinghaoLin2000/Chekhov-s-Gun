-[PAMediaConversionServiceResourceURLCollection setResourceURL:forRole:deleteOnDeallocation:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[PAMediaConversionServiceResourceURLCollection setResourceURL:forRole:deleteOnDeallocation:](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2,
        id a3,
        id a4,
        bool a5)
{
  _BOOL8 v5; // x19
  id v8; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = a5;
  v8 = objc_retain(a4);
  -[PAMediaConversionServiceResourceURLCollection setResourceURL:forRole:](self, "setResourceURL:forRole:", a3, v8);
  -[PAMediaConversionServiceResourceURLCollection setShouldDeleteURLOnDeallocation:forRole:](
    self,
    "setShouldDeleteURLOnDeallocation:forRole:",
    v5,
    v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}