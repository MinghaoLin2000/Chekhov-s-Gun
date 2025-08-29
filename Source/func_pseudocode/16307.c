-[LegacyAudioAccessory initWithCoder:]
LegacyAudioAccessory *__cdecl -[LegacyAudioAccessory initWithCoder:](LegacyAudioAccessory *self, SEL a2, id a3)
{
  id v4; // x19
  LegacyAudioAccessory *v5; // x20
  NSString *v6; // x0
  NSString *serialNumber; // x8
  NSString *v8; // x0
  NSString *activeFirmwareVersion; // x8
  NSString *v10; // x0
  NSString *activeANCVersion; // x8
  NSString *v12; // x0
  NSString *modelName; // x8

  v4 = objc_retain(a3);
  v5 = -[LegacyAudioAccessory initWithDelegate:](self, "initWithDelegate:", 0LL);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(
           objc_msgSend(
             v4,
             "decodeObjectOfClass:forKey:",
             objc_opt_class(&OBJC_CLASS___NSString),
             CFSTR("serialNumber")));
    serialNumber = v5->_serialNumber;
    v5->_serialNumber = v6;
    objc_release(serialNumber);
    v8 = objc_retainAutoreleasedReturnValue(
           objc_msgSend(
             v4,
             "decodeObjectOfClass:forKey:",
             objc_opt_class(&OBJC_CLASS___NSString),
             CFSTR("activeFirmwareVersion")));
    activeFirmwareVersion = v5->_activeFirmwareVersion;
    v5->_activeFirmwareVersion = v8;
    objc_release(activeFirmwareVersion);
    v10 = objc_retainAutoreleasedReturnValue(
            objc_msgSend(
              v4,
              "decodeObjectOfClass:forKey:",
              objc_opt_class(&OBJC_CLASS___NSString),
              CFSTR("activeANCVersion")));
    activeANCVersion = v5->_activeANCVersion;
    v5->_activeANCVersion = v10;
    objc_release(activeANCVersion);
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "decodeObjectOfClass:forKey:", objc_opt_class(&OBJC_CLASS___NSString), CFSTR("modelName")));
    modelName = v5->_modelName;
    v5->_modelName = v12;
    objc_release(modelName);
  }
  objc_release(v4);
  return v5;
}