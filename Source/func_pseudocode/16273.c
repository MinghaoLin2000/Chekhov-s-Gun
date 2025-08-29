_generateBase64HashForDataAtLocation
id __fastcall generateBase64HashForDataAtLocation(void *a1, __int64 a2, __int64 a3)
{
  id v3; // x0
  void *v4; // x19
  void *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(generateHashForDataAtLocationAsData(a1, a2, a3));
  v4 = v3;
  if ( v3 )
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "base64EncodedStringWithOptions:", 0LL));
  else
    v5 = 0LL;
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}