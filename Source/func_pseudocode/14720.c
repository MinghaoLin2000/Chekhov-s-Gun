+[UINSSystemPreferencesSetting iconForBundleIdentifier:]
id __cdecl +[UINSSystemPreferencesSetting iconForBundleIdentifier:](id a1, SEL a2, id a3)
{
  id v3; // x20
  NSWorkspace *v4; // x21
  NSURL *v5; // x19
  id v6; // x20
  id v8; // [xsp+8h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace"));
  v5 = objc_retainAutoreleasedReturnValue(-[NSWorkspace URLForApplicationWithBundleIdentifier:](v4, "URLForApplicationWithBundleIdentifier:", v3));
  objc_release(v3);
  objc_release(v4);
  if ( v5 )
  {
    v8 = 0LL;
    -[NSURL getResourceValue:forKey:error:](v5, "getResourceValue:forKey:error:", &v8, NSURLEffectiveIconKey, 0LL);
    v6 = objc_retain(v8);
  }
  else
  {
    v6 = 0LL;
  }
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}