-[GTAMDPMService setControlMode:withReply:]
void __cdecl -[GTAMDPMService setControlMode:withReply:](GTAMDPMService *self, SEL a2, int a3, id a4)
{
  void (__fastcall **v5)(id, _BOOL8); // x19
  _BOOL8 v6; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = (void (__fastcall **)(id, _BOOL8))objc_retain(a4);
  v6 = self->_canUpdateState && -[GTAMDPMService _setToDefault](self, "_setToDefault");
  v5[2](v5, v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}