-[SiriNCService shouldDismissForNoValidMicrophone]
bool __cdecl -[SiriNCService shouldDismissForNoValidMicrophone](SiriNCService *self, SEL a2)
{
  void *v2; // x19
  unsigned __int8 v3; // w20
  void *v4; // x19
  unsigned int v5; // w20
  os_log_s *v6; // x19
  _BOOL4 v7; // w8
  bool result; // w0
  const char *v9; // x3
  _BOOL4 v10; // w8
  int v11; // [xsp+0h] [xbp-40h] BYREF
  const char *v12; // [xsp+4h] [xbp-3Ch]

  v2 = objc_retainAutoreleasedReturnValue(
         +[SRFUserDefaultsController sharedUserDefaultsController](
           &OBJC_CLASS___SRFUserDefaultsController,
           "sharedUserDefaultsController"));
  v3 = (unsigned __int8)objc_msgSend(v2, "isTypeToSiriEnabled");
  objc_release(v2);
  if ( (v3 & 1) != 0 )
    return 0;
  v4 = objc_retainAutoreleasedReturnValue(
         +[SRFUserDefaultsController sharedUserDefaultsController](
           &OBJC_CLASS___SRFUserDefaultsController,
           "sharedUserDefaultsController"));
  v5 = (unsigned int)objc_msgSend(v4, "ignoreMicRequirement");
  objc_release(v4);
  if ( v5 )
  {
    v6 = (os_log_s *)AFSiriLogContextConnection;
    v7 = os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT);
    result = 0;
    if ( !v7 )
      return result;
    v11 = 136315138;
    v12 = "-[SiriNCService shouldDismissForNoValidMicrophone]";
    v9 = "%s [Invocation] Ignoring Mic requirement";
    goto LABEL_8;
  }
  if ( !(unsigned int)AFDeviceSupportsSystemAssistantExperience() )
    return 1;
  v6 = (os_log_s *)AFSiriLogContextConnection;
  v10 = os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT);
  result = 0;
  if ( v10 )
  {
    v11 = 136315138;
    v12 = "-[SiriNCService shouldDismissForNoValidMicrophone]";
    v9 = "%s [Invocation] SAE enabled, ignoring Mic requirement";
LABEL_8:
    _os_log_impl((void *)&_mh_execute_header, v6, OS_LOG_TYPE_DEFAULT, v9, (uint8_t *)&v11, 0xCu);
    return 0;
  }
  return result;
}