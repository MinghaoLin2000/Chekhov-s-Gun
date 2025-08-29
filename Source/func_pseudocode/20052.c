-[PKNANDataSession dataSessionRequestStarted:]
void __cdecl -[PKNANDataSession dataSessionRequestStarted:](PKNANDataSession *self, SEL a2, id a3)
{
  NSString *v4; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
  NSLog(&CFSTR("%@: %@").isa, self, v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}