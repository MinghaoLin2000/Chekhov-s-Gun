-[IsExtensionEnabled requestingAppName]
id __cdecl -[IsExtensionEnabled requestingAppName](IsExtensionEnabled *self, SEL a2)
{
  id v2; // x19
  id v3; // x20
  id v5; // [xsp+8h] [xbp-18h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[IsExtensionEnabled requestingAppURL](self, "requestingAppURL"));
  v5 = 0LL;
  objc_msgSend(v2, "getResourceValue:forKey:error:", &v5, NSURLNameKey, 0LL);
  v3 = objc_retain(v5);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}