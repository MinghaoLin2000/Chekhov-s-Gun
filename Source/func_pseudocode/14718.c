+[UINSSystemPreferencesSetting settingWithIdentifier:title:icon:preferencePaneIdentifier:preferencePaneRevealKey:usageKeys:instructionsFormat:]
UINSSystemPreferencesSetting *__cdecl +[UINSSystemPreferencesSetting settingWithIdentifier:title:icon:preferencePaneIdentifier:preferencePaneRevealKey:usageKeys:instructionsFormat:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7,
        id a8,
        id a9)
{
  id v15; // x19
  id v16; // x20
  NSImage *v17; // x22
  id v18; // x21
  id v19; // x24
  id v20; // x25
  id v21; // x26
  void *v22; // x23
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v15 = objc_retain(a3);
  v16 = objc_retain(a4);
  v17 = (NSImage *)objc_retain(a5);
  v18 = objc_retain(a6);
  v19 = objc_retain(a7);
  v20 = objc_retain(a8);
  v21 = objc_retain(a9);
  if ( !v17 )
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSImage imageWithSystemSymbolName:accessibilityDescription:](
              &OBJC_CLASS___NSImage,
              "imageWithSystemSymbolName:accessibilityDescription:",
              CFSTR("app.fill"),
              v16));
  v22 = objc_msgSend(
          objc_alloc((Class)a1),
          "initWithIdentifier:title:icon:preferencePaneIdentifier:preferencePaneRevealKey:usageKeys:instructionsFormat:",
          v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
  objc_release(v21);
  objc_release(v20);
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (UINSSystemPreferencesSetting *)objc_autoreleaseReturnValue(v22);
}