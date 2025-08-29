-[KeyboardSettingsMediator dictationShortcut]
id __cdecl -[KeyboardSettingsMediator dictationShortcut](KeyboardSettingsMediator *self, SEL a2)
{
  void *v2; // x20
  void *v3; // x19
  __int64 v4; // x22
  NSNumber *v5; // x20
  NSNumber *v6; // x21
  NSNumber *v7; // x23
  NSNumber *v8; // x24
  NSNumber *v9; // x25
  NSDictionary *v10; // x22
  NSArray *v11; // x20
  uint8_t v13[16]; // [xsp+0h] [xbp-B0h] BYREF
  NSDictionary *v14; // [xsp+10h] [xbp-A0h] BYREF
  _QWORD v15[5]; // [xsp+18h] [xbp-98h] BYREF
  _QWORD v16[5]; // [xsp+40h] [xbp-70h] BYREF
  __int64 vars8; // [xsp+B8h] [xbp+8h]

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v13 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "IN SERVICE - Dictation shortcut",
      v13,
      2u);
  }
  v2 = objc_retainAutoreleasedReturnValue(
         +[SODictationPreferences sharedDictationPreferences](
           &OBJC_CLASS___SODictationPreferences,
           "sharedDictationPreferences"));
  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "dictationHotKey"));
  objc_release(v2);
  v4 = SOKeyMenuEntriesFromDictationHotKey(v3);
  v15[0] = CFSTR("KB_Dictation_IsDoubleTap");
  v5 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", objc_msgSend(v3, "isDoubleTap")));
  v16[0] = v5;
  v15[1] = CFSTR("KB_Dictation_KeyChar");
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSNumber numberWithUnsignedInteger:](
           &OBJC_CLASS___NSNumber,
           "numberWithUnsignedInteger:",
           objc_msgSend(v3, "keyChar")));
  v16[1] = v6;
  v15[2] = CFSTR("KB_Dictation_VirtualKey");
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSNumber numberWithUnsignedInteger:](
           &OBJC_CLASS___NSNumber,
           "numberWithUnsignedInteger:",
           objc_msgSend(v3, "virtualKey")));
  v16[2] = v7;
  v15[3] = CFSTR("KB_Dictation_Modifiers");
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSNumber numberWithUnsignedInteger:](
           &OBJC_CLASS___NSNumber,
           "numberWithUnsignedInteger:",
           objc_msgSend(v3, "modifiers")));
  v16[3] = v8;
  v15[4] = CFSTR("KB_Dictation_ShortcutType");
  v9 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", v4));
  v16[4] = v9;
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            v16,
            v15,
            5LL));
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
    sub_100008610(v10);
  v14 = v10;
  v11 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v14, 1LL));
  objc_release(v10);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}