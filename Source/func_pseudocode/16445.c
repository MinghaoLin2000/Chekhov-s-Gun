-[UARPUpdaterServiceLegacyAudio getIsBusyStatusWithReply:]
void __cdecl -[UARPUpdaterServiceLegacyAudio getIsBusyStatusWithReply:](
        UARPUpdaterServiceLegacyAudio *self,
        SEL a2,
        id a3)
{
  LegacyAudioController *controller; // x19
  void (__fastcall **v4)(id, _BOOL8); // x20
  NSArray *v5; // x19
  _BOOL8 v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  controller = self->_controller;
  v4 = (void (__fastcall **)(id, _BOOL8))objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[LegacyAudioController activeAccessories](controller, "activeAccessories"));
  v6 = -[NSArray count](v5, "count") != 0;
  objc_release(v5);
  v4[2](v4, v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}