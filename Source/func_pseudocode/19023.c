-[SiriNCAlertViewController siriViewController:recordingWillBeginForSiriSession:]
void __cdecl -[SiriNCAlertViewController siriViewController:recordingWillBeginForSiriSession:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  void *v5; // x20
  unsigned int v6; // w21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retainAutoreleasedReturnValue(
         +[SRFUserDefaultsController sharedUserDefaultsController](
           &OBJC_CLASS___SRFUserDefaultsController,
           "sharedUserDefaultsController",
           a3,
           a4));
  v6 = (unsigned int)objc_msgSend(v5, "isEffectiveMicrophoneInternal");
  objc_release(v5);
  if ( v6 )
    +[SiriUIMediaPauser setFanDuckingEnabled:](&OBJC_CLASS___SiriUIMediaPauser, "setFanDuckingEnabled:", 1LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[SiriNCAlertViewController _endDelayingSessionEndForTTS](self, "_endDelayingSessionEndForTTS");
}