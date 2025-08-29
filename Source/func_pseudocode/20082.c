-[PKNANSubscriber invalidate]
void __cdecl -[PKNANSubscriber invalidate](PKNANSubscriber *self, SEL a2)
{
  WiFiAwareSubscriber *subscriber; // x0
  WiFiAwareSubscriber *v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  subscriber = self->_subscriber;
  if ( subscriber )
  {
    -[WiFiAwareSubscriber stop](subscriber, "stop");
    -[WiFiAwareSubscriber setDelegate:](self->_subscriber, "setDelegate:", 0LL);
    v4 = self->_subscriber;
    self->_subscriber = 0LL;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v4);
  }
}