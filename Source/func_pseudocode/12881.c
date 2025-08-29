+[NSUUID tsu_UUIDWithNamespaceUUID:integerValue:]
id __cdecl +[NSUUID tsu_UUIDWithNamespaceUUID:integerValue:](id a1, SEL a2, id a3, signed __int64 a4)
{
  void *v4; // x0
  signed __int64 v6; // [xsp+8h] [xbp-8h] BYREF
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v6 = a4;
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsu_UUIDWithNamespaceUUID:bytes:size:", a3, &v6, 8LL));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}