-[KeyboardSettingsMediator setDictationShortcut:]
void __cdecl -[KeyboardSettingsMediator setDictationShortcut:](KeyboardSettingsMediator *self, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x20
  void *v5; // x21
  int v6; // w22
  id v7; // x21
  void *v8; // x22
  void *v9; // x22
  void *v10; // x22
  void *v11; // x22
  void *v12; // x22
  uint8_t v13[16]; // [xsp+0h] [xbp-30h] BYREF

  v3 = objc_retain(a3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v13 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "XPCSERVICE - Dictation shortcut",
      v13,
      2u);
  }
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "firstObject"));
  if ( v4 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
      sub_100007870(v4);
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("KB_Dictation_ShortcutType")));
    v6 = (unsigned int)objc_msgSend(v5, "integerValue");
    objc_release(v5);
    v7 = objc_retainAutoreleasedReturnValue(SODictationHotKeyFromKeyMenuEntries(v6));
    if ( !v7 )
    {
      v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("KB_Dictation_IsDoubleTap")));
      objc_msgSend(0LL, "setIsDoubleTap:", objc_msgSend(v8, "boolValue"));
      objc_release(v8);
      v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("KB_Dictation_KeyChar")));
      objc_msgSend(0LL, "setKeyChar:", (unsigned int)objc_msgSend(v9, "unsignedIntValue"));
      objc_release(v9);
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("KB_Dictation_VirtualKey")));
      objc_msgSend(0LL, "setVirtualKey:", (unsigned int)objc_msgSend(v10, "unsignedIntValue"));
      objc_release(v10);
      v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("KB_Dictation_Modifiers")));
      objc_msgSend(0LL, "setModifiers:", (unsigned int)objc_msgSend(v11, "unsignedIntValue"));
      objc_release(v11);
    }
    v12 = objc_retainAutoreleasedReturnValue(
            +[SODictationPreferences sharedDictationPreferences](
              &OBJC_CLASS___SODictationPreferences,
              "sharedDictationPreferences"));
    objc_msgSend(v12, "setDictationHotKey:", v7);
    objc_release(v12);
    objc_release(v7);
  }
  objc_release(v4);
  objc_release(v3);
}