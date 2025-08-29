-[UARPUpdaterServiceLegacyAudio init]
UARPUpdaterServiceLegacyAudio *__cdecl -[UARPUpdaterServiceLegacyAudio init](
        UARPUpdaterServiceLegacyAudio *self,
        SEL a2)
{
  UARPUpdaterServiceLegacyAudio *v2; // x19
  LegacyAudioController *v3; // x0
  LegacyAudioController *controller; // x8
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___UARPUpdaterServiceLegacyAudio;
  v2 = -[UARPUpdaterServiceLegacyAudio init](&v6, "init");
  if ( v2 )
  {
    v3 = objc_retainAutoreleasedReturnValue(+[LegacyAudioController sharedInstance](&OBJC_CLASS___LegacyAudioController, "sharedInstance"));
    controller = v2->_controller;
    v2->_controller = v3;
    objc_release(controller);
  }
  return v2;
}