-[XPCSignpostReader subsystemCategoryAllowlist:]
id __cdecl -[XPCSignpostReader subsystemCategoryAllowlist:](XPCSignpostReader *self, SEL a2, id a3)
{
  id v3; // x20
  id v4; // x19
  _QWORD v6[4]; // [xsp+8h] [xbp-38h] BYREF
  id v7; // [xsp+28h] [xbp-18h]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retain(a3);
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_100008C44;
  v6[3] = &unk_100014468;
  v4 = objc_retain(objc_alloc_init((Class)&OBJC_CLASS___SignpostSupportSubsystemCategoryAllowlist));
  v7 = v4;
  objc_msgSend(v3, "enumerateKeysAndObjectsUsingBlock:", v6);
  objc_release(v3);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}