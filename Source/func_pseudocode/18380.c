-[GTAMDPMService initGPU:withReply:]
void __cdecl -[GTAMDPMService initGPU:withReply:](GTAMDPMService *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  void (__fastcall **v7)(id, __int64, const __CFString *); // x20
  NSArray *v8; // x21
  void *v9; // x0
  void *v10; // x23
  __int64 v11; // x27
  __int64 v12; // x28
  void *v13; // x24
  void *v14; // x25
  unsigned int v15; // w26
  GTAMDCLKSPIPrivateDevice **p_amdDevice; // x23
  unsigned __int8 v17; // w0
  __int64 v18; // x22
  void *v19; // x23
  unsigned __int64 *begin; // x24
  unsigned __int64 *end; // x25
  __int64 v22; // x8
  __int64 v23; // x26
  unsigned __int64 v24; // x9
  unsigned __int64 *value; // x8
  __int64 v26; // x8
  __int64 v27; // x10
  unsigned __int64 v28; // x27
  _QWORD *v29; // x0
  unsigned __int64 *v30; // x8
  unsigned __int64 v31; // t1
  unsigned __int64 *v32; // x8
  __int64 v33; // x9
  unsigned __int64 v34; // x24
  void *v35; // x26
  void *v36; // x27
  __int128 v37; // [xsp+0h] [xbp-120h] BYREF
  __int128 v38; // [xsp+10h] [xbp-110h]
  __int128 v39; // [xsp+20h] [xbp-100h]
  __int128 v40; // [xsp+30h] [xbp-F0h]
  _BYTE v41[128]; // [xsp+40h] [xbp-E0h] BYREF

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(id, __int64, const __CFString *))objc_retain(a4);
  v37 = 0u;
  v38 = 0u;
  v39 = 0u;
  v40 = 0u;
  v8 = objc_retain(MTLCopyAllDevices());
  v9 = -[NSArray countByEnumeratingWithState:objects:count:](
         v8,
         "countByEnumeratingWithState:objects:count:",
         &v37,
         v41,
         16LL);
  if ( v9 )
  {
    v10 = v9;
    v11 = *(_QWORD *)v38;
LABEL_3:
    v12 = 0LL;
    while ( 1 )
    {
      if ( *(_QWORD *)v38 != v11 )
        objc_enumerationMutation(v8);
      v13 = *(void **)(*((_QWORD *)&v37 + 1) + 8 * v12);
      v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "name", (_QWORD)v37));
      v15 = (unsigned int)objc_msgSend(v14, "isEqualToString:", v6);
      objc_release(v14);
      if ( v15 )
        break;
      if ( v10 == (void *)++v12 )
      {
        v10 = -[NSArray countByEnumeratingWithState:objects:count:](
                v8,
                "countByEnumeratingWithState:objects:count:",
                &v37,
                v41,
                16LL);
        if ( v10 )
          goto LABEL_3;
        goto LABEL_13;
      }
    }
    p_amdDevice = &self->amdDevice;
    objc_storeStrong((id *)&self->amdDevice, v13);
    if ( (objc_opt_respondsToSelector(self->amdDevice, "setAMDMtlClk:") & 1) == 0 )
      goto LABEL_13;
    if ( (unsigned int)-[GTAMDCLKSPIPrivateDevice queryAMDMtlClk](*p_amdDevice, "queryAMDMtlClk") )
      v17 = (unsigned __int8)-[GTAMDCLKSPIPrivateDevice setAMDMtlClk:](*p_amdDevice, "setAMDMtlClk:", 0LL);
    else
      v17 = 1;
    self->_canUpdateState = v17;
    if ( (objc_opt_respondsToSelector(self->amdDevice, "queryAMDMtlClkCaps") & 1) == 0 )
    {
LABEL_39:
      v18 = 1LL;
      goto LABEL_40;
    }
    v19 = objc_retainAutoreleasedReturnValue(-[GTAMDCLKSPIPrivateDevice queryAMDMtlClkCaps](self->amdDevice, "queryAMDMtlClkCaps"));
    begin = self->gfxPowerStates.__begin_;
    end = self->gfxPowerStates.__end_;
    v22 = (char *)end - (char *)begin;
    if ( (unsigned __int64)((char *)end - (char *)begin) > 0x17 )
    {
      if ( v22 == 24 )
      {
LABEL_35:
        if ( objc_msgSend(&off_100004220, "count") )
        {
          v34 = 0LL;
          do
          {
            v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(&off_100004220, "objectAtIndexedSubscript:", v34));
            v36 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "objectForKeyedSubscript:", v35));
            objc_release(v35);
            self->gfxPowerStates.__begin_[v34] = (unsigned __int64)objc_msgSend(v36, "unsignedLongLongValue");
            objc_release(v36);
            ++v34;
          }
          while ( v34 < (unsigned __int64)objc_msgSend(&off_100004220, "count") );
        }
        objc_release(v19);
        goto LABEL_39;
      }
      v32 = begin + 3;
    }
    else
    {
      v23 = v22 >> 3;
      v24 = 3 - (v22 >> 3);
      value = self->gfxPowerStates.__end_cap_.__value_;
      if ( v24 > value - end )
      {
        v26 = (char *)value - (char *)begin;
        v27 = v26 >> 2;
        if ( (unsigned __int64)(v26 >> 2) <= 3 )
          v27 = 3LL;
        if ( (unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL )
          v28 = 0x1FFFFFFFFFFFFFFFLL;
        else
          v28 = v27;
        if ( v28 >> 61 )
          sub_100003088();
        v29 = operator new(8 * v28);
        v30 = &v29[v23];
        do
          v29[v23++] = 0LL;
        while ( v23 != 3 );
        while ( end != begin )
        {
          v31 = *--end;
          *--v30 = v31;
        }
        self->gfxPowerStates.__begin_ = v30;
        self->gfxPowerStates.__end_ = v29 + 3;
        self->gfxPowerStates.__end_cap_.__value_ = &v29[v28];
        if ( begin )
          operator delete(begin);
        goto LABEL_35;
      }
      v32 = &end[v24];
      v33 = 24 - 8 * v23;
      do
      {
        *end++ = 0LL;
        v33 -= 8LL;
      }
      while ( v33 );
    }
    self->gfxPowerStates.__end_ = v32;
    goto LABEL_35;
  }
LABEL_13:
  v18 = 0LL;
LABEL_40:
  objc_release(v8);
  v7[2](v7, v18, CFSTR("EG"));
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
}