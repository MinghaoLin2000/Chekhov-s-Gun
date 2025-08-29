-[UARPUpdaterServiceLegacyAudio eaRuleMatched:]
void __cdecl -[UARPUpdaterServiceLegacyAudio eaRuleMatched:](UARPUpdaterServiceLegacyAudio *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  void *v6; // x22
  void *v7; // x22
  void *v8; // x22
  void *v9; // x22
  LegacyAudioAccessory *v10; // x22
  LegacyAudioController **p_controller; // x21
  void *v12; // x21

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "accessorySerialNumber"));
  objc_release(v6);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "accessorySerialNumber"));
    objc_msgSend(v5, "setObject:forKeyedSubscript:", v7, CFSTR("SerialNumber"));
    objc_release(v7);
  }
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "eaIdentifier"));
  objc_release(v8);
  if ( v8 )
  {
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "eaIdentifier"));
    objc_msgSend(v5, "setObject:forKeyedSubscript:", v9, CFSTR("DeviceClass"));
    objc_release(v9);
  }
  v10 = -[LegacyAudioAccessory initWithDelegate:](
          objc_alloc(&OBJC_CLASS___LegacyAudioAccessory),
          "initWithDelegate:",
          self);
  p_controller = &self->_controller;
  -[LegacyAudioController addActiveAccessory:](*p_controller, "addActiveAccessory:", v10);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
    sub_10001B04C(v10, p_controller);
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "eaIdentifier"));
  -[LegacyAudioAccessory handleConnect:options:](v10, "handleConnect:options:", v12, v5);
  objc_release(v12);
  objc_release(v10);
  objc_release(v5);
  objc_release(v4);
}