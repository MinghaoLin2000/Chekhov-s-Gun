-[SiriNCAlertViewController siriViewController:willStartListeningForSiriSession:]
void __cdecl -[SiriNCAlertViewController siriViewController:willStartListeningForSiriSession:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  NSDistributedNotificationCenter *v5; // x20
  SiriUIAudioManager *v6; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = objc_retainAutoreleasedReturnValue(
         +[NSDistributedNotificationCenter defaultCenter](
           &OBJC_CLASS___NSDistributedNotificationCenter,
           "defaultCenter",
           a3,
           a4));
  -[NSDistributedNotificationCenter postNotificationName:object:userInfo:options:](
    v5,
    "postNotificationName:object:userInfo:options:",
    SiriUIDidActivateNotification,
    0LL,
    0LL,
    3LL);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController audioManager](self, "audioManager"));
  -[SiriUIAudioManager prepareBluetoothForSiriSessionAudioRecording](v6, "prepareBluetoothForSiriSessionAudioRecording");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}