-[LegacyAudioController loadMatchingDASActivityList]
id __cdecl -[LegacyAudioController loadMatchingDASActivityList](LegacyAudioController *self, SEL a2)
{
  xpc_object_t v2; // x19
  void *v3; // x21
  void *v4; // x22
  NSArray *v5; // x20
  void *v7; // [xsp+0h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v2 = xpc_dictionary_create(0LL, 0LL, 0LL);
  xpc_dictionary_set_bool(v2, XPC_ACTIVITY_REPEATING, 1);
  xpc_dictionary_set_int64(v2, XPC_ACTIVITY_INTERVAL, XPC_ACTIVITY_INTERVAL_1_DAY);
  v3 = (void *)_CFXPCCreateCFObjectFromXPCObject(v2);
  v4 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___UARPServiceUpdaterDASMatchingRule),
         "initWithIdentifier:matchingDictionary:",
         CFSTR("PeriodicLaunchActivity"),
         v3);
  v7 = v4;
  v5 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v7, 1LL));
  objc_release(v4);
  objc_release(v3);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}