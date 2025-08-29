-[GTPMService tearDown]
void __cdecl -[GTPMService tearDown](GTPMService *self, SEL a2)
{
  NSString *v2; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( self->_igpm.bConnectionValid && (unsigned int)sub_100003040(&self->_igpm, 0LL) )
  {
    v2 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("Tear Down Completed")));
    NSLog(&CFSTR("%@").isa, v2);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v2);
  }
}