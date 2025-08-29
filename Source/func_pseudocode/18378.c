-[GTAMDPMService setState:withReply:]
void __cdecl -[GTAMDPMService setState:withReply:](GTAMDPMService *self, SEL a2, int a3, id a4)
{
  void (__fastcall **v6)(_QWORD); // x19
  char v7; // w0
  unsigned __int8 v8; // w1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = (void (__fastcall **)(_QWORD))objc_retain(a4);
  if ( self->_canUpdateState )
  {
    v7 = objc_opt_respondsToSelector(self->amdDevice, "setAMDMtlClk:");
    v8 = 0;
    if ( (v7 & 1) != 0 && (unsigned int)a3 <= 2 )
      v8 = (unsigned __int8)-[GTAMDCLKSPIPrivateDevice setAMDMtlClk:](
                              self->amdDevice,
                              "setAMDMtlClk:",
                              (unsigned int)(3 - a3));
  }
  else
  {
    v8 = 0;
  }
  self->_nonDefaultStateSet = v8;
  v6[2](v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}