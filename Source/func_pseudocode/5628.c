_SOKeyMenuEntriesFromDictationHotKey
__int64 __fastcall SOKeyMenuEntriesFromDictationHotKey(void *a1)
{
  id v1; // x19
  __int64 v2; // x20

  v1 = objc_retain(a1);
  if ( (unsigned int)objc_msgSend(v1, "isDoubleTap") )
  {
    if ( ((unsigned int)objc_msgSend(v1, "modifiers") & 0x40000) != 0 )
    {
      v2 = 2LL;
    }
    else if ( ((unsigned int)objc_msgSend(v1, "modifiers") & 0x10) != 0 )
    {
      v2 = 4LL;
    }
    else if ( ((unsigned int)objc_msgSend(v1, "modifiers") & 8) != 0 )
    {
      v2 = 5LL;
    }
    else if ( ((unsigned int)objc_msgSend(v1, "modifiers") & 0x100000) != 0 )
    {
      v2 = 6LL;
    }
    else if ( ((unsigned __int64)objc_msgSend(v1, "modifiers") & 0x800000) != 0 )
    {
      v2 = 3LL;
    }
    else
    {
      v2 = 10LL;
    }
  }
  else
  {
    v2 = 9LL;
    if ( objc_msgSend(v1, "keyChar") == (void *)0xFFFF )
    {
      if ( objc_msgSend(v1, "virtualKey") == (void *)0xFFFF )
        v2 = 0LL;
      else
        v2 = 9LL;
    }
  }
  objc_release(v1);
  return v2;
}