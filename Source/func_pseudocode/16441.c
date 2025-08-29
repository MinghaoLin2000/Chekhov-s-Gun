-[UARPUpdaterServiceLegacyAudio getBSDNotificationsListWithReply:]
void __cdecl -[UARPUpdaterServiceLegacyAudio getBSDNotificationsListWithReply:](
        UARPUpdaterServiceLegacyAudio *self,
        SEL a2,
        id a3)
{
  LegacyAudioController *controller; // x19
  void (__fastcall **v4)(id, void *); // x20
  NSArray *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  controller = self->_controller;
  v4 = (void (__fastcall **)(id, void *))objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[LegacyAudioController matchingBSDNotificationsList](controller, "matchingBSDNotificationsList"));
  v4[2](v4, v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}