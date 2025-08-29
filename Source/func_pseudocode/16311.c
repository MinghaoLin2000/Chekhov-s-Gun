-[LegacyAudioAccessory deviceClassesForEAIdentifier:]
id __cdecl -[LegacyAudioAccessory deviceClassesForEAIdentifier:](LegacyAudioAccessory *self, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x20
  NSArray *v6; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[LegacyAudioAccessory getMatchingEntryForEAIdentifier:](self, "getMatchingEntryForEAIdentifier:", v4));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", CFSTR("DeviceClasses")));
  if ( !v6 )
    v6 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:](&OBJC_CLASS___NSArray, "arrayWithObjects:", v4, 0LL));
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}