-[PKNANSubscriber subscriber:terminatedWithReason:]
void __cdecl -[PKNANSubscriber subscriber:terminatedWithReason:](
        PKNANSubscriber *self,
        SEL a2,
        id a3,
        signed __int64 a4)
{
  id v6; // x19
  NSString *v7; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
  NSLog(&CFSTR("%@: %@").isa, self, v7);
  objc_release(v7);
  if ( self->_activateHandler )
    __assert_rtn("-[PKNANSubscriber subscriber:terminatedWithReason:]", "PKNan.mm", 293, "_activateHandler == nil");
  objc_msgSend(v6, "setDelegate:", 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}