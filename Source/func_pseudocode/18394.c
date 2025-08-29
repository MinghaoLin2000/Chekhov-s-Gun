-[GTPMService initGPU:withReply:]
void __cdecl -[GTPMService initGPU:withReply:](GTPMService *self, SEL a2, id a3, id a4)
{
  void (__fastcall **v5)(id, bool, NSString *); // x19
  NSString *v6; // x21
  IGPMUtil *p_igpm; // x21
  unsigned int *p_nPorts; // x22
  __int64 v9; // x0
  const __CFString *v10; // x2
  NSString *v11; // x21
  __int64 v12; // x28
  __CFString *v13; // x1
  NSString *v14; // x26
  __int64 v15; // [xsp+0h] [xbp-70h]
  unsigned int v16; // [xsp+1Ch] [xbp-54h] BYREF
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v5 = (void (__fastcall **)(id, bool, NSString *))objc_retain(a4);
  v6 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("Init GPU ")));
  NSLog(&CFSTR("%@").isa, v6);
  objc_release(v6);
  if ( !(unsigned int)sub_100001FE0() )
  {
    p_igpm = &self->_igpm;
    sub_100001E5C();
    p_nPorts = &self->_igpm.nPorts;
    v9 = sub_100002130(10, &self->_igpm);
    if ( (_DWORD)v9 )
    {
      v15 = v9;
      v10 = CFSTR("AGPMGetManagedPorts() returned %#x");
LABEL_4:
      v11 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v10, v15));
      NSLog(&CFSTR("%@").isa, v11);
      objc_release(v11);
      goto LABEL_5;
    }
    if ( !*p_nPorts )
    {
      v10 = CFSTR("No managed GPUs in this system");
      goto LABEL_4;
    }
    v12 = 0LL;
    while ( 1 )
    {
      v16 = -1;
      sub_10000241C(p_igpm->agpmPorts[v12], &v16);
      v13 = v16 == 2 ? CFSTR("IG") : CFSTR("EG");
      objc_storeStrong((id *)&self->_igpm.gpuName, v13);
      v14 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("GPU%u:%d %@\n"),
                v12,
                v16,
                self->_igpm.gpuName));
      NSLog(&CFSTR("%@").isa, v14);
      objc_release(v14);
      if ( v16 == 2 )
        break;
      if ( ++v12 >= (unsigned __int64)*p_nPorts )
        goto LABEL_15;
    }
    self->_igpm.igPortIndex = v12;
    if ( !(unsigned int)sub_100002278(p_igpm->agpmPorts[v12], &self->_igpm.maxState)
      && !(unsigned int)sub_100002330(p_igpm->agpmPorts[self->_igpm.igPortIndex], &self->_igpm.controlState) )
    {
LABEL_15:
      self->_igpm.bConnectionValid = (self->_igpm.igPortIndex & 0x80000000) == 0;
    }
  }
LABEL_5:
  v5[2](v5, self->_igpm.bConnectionValid, self->_igpm.gpuName);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}