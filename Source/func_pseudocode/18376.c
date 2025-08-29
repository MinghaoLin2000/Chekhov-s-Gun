-[GTAMDPMService getOccupancyWithReply:]
void __cdecl -[GTAMDPMService getOccupancyWithReply:](GTAMDPMService *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, bool, double); // x19
  double v5; // d8
  void *v6; // x21
  void *v7; // x22
  void *v8; // x0
  unsigned __int64 *begin; // x8
  unsigned __int64 *end; // x9
  __int64 v11; // x10
  unsigned __int64 v12; // x9
  unsigned __int64 v13; // x10
  unsigned int v14; // w8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = (void (__fastcall **)(id, bool, double))objc_retain(a3);
  v5 = -1.0;
  if ( self->_canUpdateState )
  {
    if ( self->gfxPowerStates.__begin_ == self->gfxPowerStates.__end_
      || (objc_opt_respondsToSelector(self->amdDevice, "queryAMDMtlClkCaps") & 1) == 0 )
    {
      if ( (objc_opt_respondsToSelector(self->amdDevice, "queryAMDMtlClk") & 1) != 0 )
      {
        v14 = (unsigned int)-[GTAMDCLKSPIPrivateDevice queryAMDMtlClk](self->amdDevice, "queryAMDMtlClk") - 1;
        if ( v14 <= 2 )
          v5 = dbl_100003880[v14];
      }
    }
    else
    {
      v6 = objc_retainAutoreleasedReturnValue(-[GTAMDCLKSPIPrivateDevice queryAMDMtlClkCaps](self->amdDevice, "queryAMDMtlClkCaps"));
      v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", CFSTR("GFXCUR")));
      v8 = objc_msgSend(v7, "unsignedLongLongValue");
      if ( v8 )
      {
        begin = self->gfxPowerStates.__begin_;
        end = self->gfxPowerStates.__end_;
        v11 = (char *)end - (char *)begin;
        if ( end != begin )
        {
          v12 = 0LL;
          v13 = v11 >> 3;
          if ( v13 <= 1 )
            v13 = 1LL;
          while ( (void *)begin[v12] != v8 )
          {
            if ( v13 == ++v12 )
              goto LABEL_15;
          }
          v5 = (double)v12;
        }
      }
LABEL_15:
      objc_release(v7);
      objc_release(v6);
    }
  }
  v4[2](v4, v5 > -2.22044605e-16, v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}