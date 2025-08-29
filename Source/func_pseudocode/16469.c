-[LegacyAudioController loadMatchingBSDNotificationsList]
id __cdecl -[LegacyAudioController loadMatchingBSDNotificationsList](LegacyAudioController *self, SEL a2)
{
  NSArray *v2; // x0
  const __CFString *v4; // [xsp+0h] [xbp-10h] BYREF
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = CFSTR("com.apple.corespeech.voicetriggerassetchange");
  v2 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v4, 1LL));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}