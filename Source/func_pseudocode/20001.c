-[LocalSocketProxy _withPort:]
void __cdecl -[LocalSocketProxy _withPort:](LocalSocketProxy *self, SEL a2, id a3)
{
  void (__fastcall **v4)(_QWORD); // x0
  void *v5; // x19
  NSArray *waiters; // x22
  void (__fastcall **v7)(_QWORD); // x0
  void *v8; // x20
  NSArray *v9; // x0
  NSArray *v10; // x8
  NSArray *v11; // x0
  NSArray *v12; // x8
  void (__fastcall **v13)(_QWORD); // [xsp+0h] [xbp-30h] BYREF

  v4 = (void (__fastcall **)(_QWORD))objc_retain(a3);
  v5 = v4;
  if ( !self->_listener || self->_port )
  {
    v4[2](v4);
  }
  else
  {
    waiters = self->_waiters;
    v7 = objc_retainBlock(v4);
    v8 = v7;
    if ( waiters )
    {
      v9 = objc_retainAutoreleasedReturnValue(-[NSArray arrayByAddingObject:](waiters, "arrayByAddingObject:", v7));
      v10 = self->_waiters;
      self->_waiters = v9;
      objc_release(v10);
      objc_release(v8);
    }
    else
    {
      v13 = v7;
      v11 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v13, 1LL));
      v12 = self->_waiters;
      self->_waiters = v11;
      objc_release(v12);
      objc_release(v8);
    }
  }
  objc_release(v5);
}