_UARPPayloadHashAlgorithmStringToValue
NSNumber *__fastcall UARPPayloadHashAlgorithmStringToValue(void *a1)
{
  id v1; // x19
  __int64 v2; // x2
  NSNumber *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = objc_retain(a1);
  if ( objc_msgSend(v1, "caseInsensitiveCompare:", CFSTR("SHA-256")) )
  {
    if ( objc_msgSend(v1, "caseInsensitiveCompare:", CFSTR("SHA-384")) )
    {
      if ( objc_msgSend(v1, "caseInsensitiveCompare:", CFSTR("SHA-512")) )
        v2 = 0LL;
      else
        v2 = 3LL;
    }
    else
    {
      v2 = 2LL;
    }
  }
  else
  {
    v2 = 1LL;
  }
  v3 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedShort:](&OBJC_CLASS___NSNumber, "numberWithUnsignedShort:", v2));
  objc_release(v1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}