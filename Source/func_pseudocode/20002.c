-[LocalSocketProxy _cancel]
void __cdecl -[LocalSocketProxy _cancel](LocalSocketProxy *self, SEL a2)
{
  OS_nw_listener *listener; // x0
  OS_nw_listener *v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  listener = self->_listener;
  if ( listener )
  {
    nw_listener_cancel(listener);
    v4 = self->_listener;
    self->_listener = 0LL;
    objc_release(v4);
  }
  self->_port = 0;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[LocalSocketProxy _flushWaiters](self, "_flushWaiters");
}