-[PKNANSubscriber subscriber:receivedMessage:fromPublishID:address:]
void __cdecl -[PKNANSubscriber subscriber:receivedMessage:fromPublishID:address:](
        PKNANSubscriber *self,
        SEL a2,
        id a3,
        id a4,
        unsigned __int8 a5,
        id a6)
{
  NSString *v7; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v7 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
  NSLog(&CFSTR("%@: %@").isa, self, v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}