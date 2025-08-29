-[NDANFHelper _resourceIDFromURL:]
id __cdecl -[NDANFHelper _resourceIDFromURL:](NDANFHelper *self, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x20
  void *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v3, "scheme"));
  if ( (unsigned int)objc_msgSend(v4, "isEqualToString:", CFSTR("asset")) )
    v5 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v3, "host"));
  else
    v5 = 0LL;
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}