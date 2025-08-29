-[GTPMService clearOccupancyWithReply:]
void __cdecl -[GTPMService clearOccupancyWithReply:](GTPMService *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, _QWORD); // x19
  NSString *v5; // x21
  _BOOL8 v6; // x1
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = (void (__fastcall **)(id, _QWORD))objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("Clear Occupancy")));
  NSLog(&CFSTR("%@").isa, v5);
  objc_release(v5);
  v6 = (self->_igpm.bConnectionValid || (v4[2](v4, 0LL), self->_igpm.bConnectionValid))
    && (unsigned int)sub_100002498(self->_igpm.agpmPorts[self->_igpm.igPortIndex]) == 0;
  v4[2](v4, v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}