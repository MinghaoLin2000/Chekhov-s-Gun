+[NSUUID tsu_UUIDWithNamespaceUUID:UUID:]
id __cdecl +[NSUUID tsu_UUIDWithNamespaceUUID:UUID:](id a1, SEL a2, id a3, id a4)
{
  id v6; // x21
  void *v7; // x19
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v9[0] = 0LL;
  v9[1] = 0LL;
  v6 = objc_retain(a3);
  objc_msgSend(a4, "getUUIDBytes:", v9);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsu_UUIDWithNamespaceUUID:bytes:size:", v6, v9, 16LL));
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}