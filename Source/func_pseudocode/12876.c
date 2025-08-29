+[NSUUID tsu_UUIDWithNamespaceUUID:name:]
id __cdecl +[NSUUID tsu_UUIDWithNamespaceUUID:name:](id a1, SEL a2, id a3, id a4)
{
  id v6; // x21
  id v7; // x19
  const char *v8; // x21
  void *v9; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retainAutorelease(a4);
  v7 = objc_retain(a3);
  v8 = (const char *)objc_msgSend(v6, "UTF8String");
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsu_UUIDWithNamespaceUUID:bytes:size:", v7, v8, strlen(v8)));
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}