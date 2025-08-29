-[LocalSocketProxy _flushWaiters]
void __cdecl -[LocalSocketProxy _flushWaiters](LocalSocketProxy *self, SEL a2)
{
  NSArray *v3; // x19
  NSArray *waiters; // x0
  unsigned __int16 port; // w8
  _QWORD v6[4]; // [xsp+8h] [xbp-38h] BYREF
  unsigned __int16 v7; // [xsp+28h] [xbp-18h]

  v3 = objc_retain(self->_waiters);
  waiters = self->_waiters;
  self->_waiters = 0LL;
  objc_release(waiters);
  if ( v3 )
  {
    port = self->_port;
    v6[0] = _NSConcreteStackBlock;
    v6[1] = 3221225472LL;
    v6[2] = sub_100028B40;
    v6[3] = &unk_10009E068;
    v7 = port;
    -[NSArray enumerateObjectsUsingBlock:](v3, "enumerateObjectsUsingBlock:", v6);
  }
  objc_release(v3);
}