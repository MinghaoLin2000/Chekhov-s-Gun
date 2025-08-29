-[NSData tsu_md5Hash]
id __cdecl -[NSData tsu_md5Hash](NSData *self, SEL a2)
{
  void *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutorelease(objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableData), "initWithLength:", 16LL));
  -[NSData tsu_getMD5Hash:](self, "tsu_getMD5Hash:", objc_msgSend(v3, "mutableBytes"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}