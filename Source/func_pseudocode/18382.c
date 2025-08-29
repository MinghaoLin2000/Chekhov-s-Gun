-[GTAMDPMService _setToDefault]
bool __cdecl -[GTAMDPMService _setToDefault](GTAMDPMService *self, SEL a2)
{
  GTAMDCLKSPIPrivateDevice *amdDevice; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( !self->_nonDefaultStateSet )
    return 1;
  self->_nonDefaultStateSet = 0;
  if ( !self->_canUpdateState || (objc_opt_respondsToSelector(self->amdDevice, "setAMDMtlClk:") & 1) == 0 )
    return 0;
  amdDevice = self->amdDevice;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8)-[GTAMDCLKSPIPrivateDevice setAMDMtlClk:](amdDevice, "setAMDMtlClk:", 0LL);
}