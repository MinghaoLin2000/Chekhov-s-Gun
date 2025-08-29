-[SiriNCAlertViewController siriViewControllerWillStartAcousticIDRequest:]
void __cdecl -[SiriNCAlertViewController siriViewControllerWillStartAcousticIDRequest:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3)
{
  SiriUIAudioManager *v3; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController audioManager](self, "audioManager", a3));
  -[SiriUIAudioManager setIsAcousticIDRecording:](v3, "setIsAcousticIDRecording:", 1LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}