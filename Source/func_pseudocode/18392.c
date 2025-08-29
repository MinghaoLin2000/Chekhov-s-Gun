-[GTPMService setState:withReply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[GTPMService setState:withReply:](GTPMService *self, SEL a2, int a3, id a4)
{
  __int64 v4; // x21
  void (__fastcall **v6)(id, _QWORD); // x19
  NSString *v7; // x22
  __int64 maxState; // x21
  NSString *v9; // x22
  IGPMUtil *p_igpm; // x23
  int v11; // w22
  _BOOL8 v12; // x1
  int v13; // [xsp+Ch] [xbp-34h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = *(_QWORD *)&a3;
  v6 = (void (__fastcall **)(id, _QWORD))objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("Power State %d"), v4));
  NSLog(&CFSTR("%@").isa, v7);
  objc_release(v7);
  if ( !self->_igpm.bConnectionValid )
    v6[2](v6, 0LL);
  if ( (_DWORD)v4 == 1 )
  {
    maxState = (self->_igpm.maxState + 1) >> 1;
  }
  else if ( (_DWORD)v4 )
  {
    maxState = 0LL;
  }
  else
  {
    maxState = self->_igpm.maxState;
  }
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("Setting Power State %u"),
           maxState));
  NSLog(&CFSTR("%@").isa, v9);
  objc_release(v9);
  if ( !self->_igpm.bConnectionValid )
    goto LABEL_16;
  p_igpm = &self->_igpm;
  if ( (unsigned int)sub_100002248(self->_igpm.agpmPorts[self->_igpm.igPortIndex]) )
    goto LABEL_16;
  if ( self->_igpm.controlState
    || (v13 = 0, (v11 = sub_1000023AC(p_igpm->agpmPorts[self->_igpm.igPortIndex], 1LL, &v13)) == 0) )
  {
    self->_igpm.controlState = 1;
    v11 = sub_1000022F4(p_igpm->agpmPorts[self->_igpm.igPortIndex], maxState);
  }
  if ( (unsigned int)sub_100002260(p_igpm->agpmPorts[self->_igpm.igPortIndex]) | v11 || !self->_igpm.bConnectionValid )
LABEL_16:
    v12 = 0LL;
  else
    v12 = (unsigned int)sub_100002498(p_igpm->agpmPorts[self->_igpm.igPortIndex]) == 0;
  v6[2](v6, v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}