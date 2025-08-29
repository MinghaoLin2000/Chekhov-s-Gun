-[GTAMDPMService .cxx_destruct]
void __cdecl -[GTAMDPMService .cxx_destruct](GTAMDPMService *self, SEL a2)
{
  unsigned __int64 *begin; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  begin = self->gfxPowerStates.__begin_;
  if ( begin )
  {
    self->gfxPowerStates.__end_ = begin;
    operator delete(begin);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->amdDevice, 0LL);
}