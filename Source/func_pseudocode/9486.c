-[TSPDocumentProperties UUIDFromDocumentProperties:key:]
id __cdecl -[TSPDocumentProperties UUIDFromDocumentProperties:key:](TSPDocumentProperties *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  void *v7; // x21
  void *v8; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", v6));
    if ( v7 )
      v8 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSUUID), "initWithUUIDString:", v7);
    else
      v8 = 0LL;
    objc_release(v7);
  }
  else
  {
    v8 = 0LL;
  }
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}