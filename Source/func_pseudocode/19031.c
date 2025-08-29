-[SiriNCAlertViewController siriViewController:acousticIDRequestDidFinishWithSuccess:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[SiriNCAlertViewController siriViewController:acousticIDRequestDidFinishWithSuccess:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3,
        bool a4)
{
  SiriUIAudioManager *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController audioManager](self, "audioManager", a3, a4));
  -[SiriUIAudioManager setIsAcousticIDRecording:](v4, "setIsAcousticIDRecording:", 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}