-[GTPMService setControlMode:withReply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[GTPMService setControlMode:withReply:](GTPMService *self, SEL a2, int a3, id a4)
{
  __int64 v4; // x20
  void (__fastcall **v6)(id, _QWORD); // x19
  NSString *v7; // x22
  __int64 v8; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = *(_QWORD *)&a3;
  v6 = (void (__fastcall **)(id, _QWORD))objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("Control Mode %d"), v4));
  NSLog(&CFSTR("%@").isa, v7);
  objc_release(v7);
  if ( !self->_igpm.bConnectionValid )
    v6[2](v6, 0LL);
  v8 = sub_100003040(&self->_igpm, v4);
  v6[2](v6, v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}