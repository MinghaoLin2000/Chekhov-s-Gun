+[DocumentCompressor documentCompresorForName:]
id __cdecl +[DocumentCompressor documentCompresorForName:](id a1, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_msgSend(objc_alloc((Class)a1), "initWithName:", v4);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}