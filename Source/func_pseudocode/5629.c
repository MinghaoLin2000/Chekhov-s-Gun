_SODictationHotKeyFromKeyMenuEntries
id __fastcall SODictationHotKeyFromKeyMenuEntries(int a1)
{
  unsigned int v1; // w20
  id v2; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = a1 - 2;
  if ( (unsigned int)(a1 - 2) >= 5 )
  {
    if ( a1 )
    {
      v2 = 0LL;
    }
    else
    {
      v2 = objc_alloc_init((Class)&OBJC_CLASS___SODictationHotKey);
      objc_msgSend(v2, "setIsDoubleTap:", 0LL);
      objc_msgSend(v2, "setKeyChar:", 0xFFFFLL);
      objc_msgSend(v2, "setVirtualKey:", 0xFFFFLL);
    }
  }
  else
  {
    v2 = objc_alloc_init((Class)&OBJC_CLASS___SODictationHotKey);
    objc_msgSend(v2, "setIsDoubleTap:", 1LL);
    if ( v1 <= 4 )
      objc_msgSend(v2, "setModifiers:", qword_100009888[v1]);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}