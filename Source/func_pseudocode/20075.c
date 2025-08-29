-[PKNANSubscriber subscriberStarted:]
void __cdecl -[PKNANSubscriber subscriberStarted:](PKNANSubscriber *self, SEL a2, id a3)
{
  id v5; // x19
  NSString *v6; // x20
  id v7; // x20
  id activateHandler; // x0
  dispatch_queue_s *v9; // x21
  _QWORD block[4]; // [xsp+18h] [xbp-48h] BYREF
  id v11; // [xsp+38h] [xbp-28h]

  v5 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
  NSLog(&CFSTR("%@: %@ %@").isa, self, v6, v5);
  objc_release(v6);
  v7 = objc_retainBlock(self->_activateHandler);
  activateHandler = self->_activateHandler;
  self->_activateHandler = 0LL;
  objc_release(activateHandler);
  if ( v7 )
  {
    v9 = (dispatch_queue_s *)objc_retainAutoreleasedReturnValue(-[PKNANSubscriber queue](self, "queue"));
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100031468;
    block[3] = &unk_1000915B0;
    v11 = objc_retain(v7);
    dispatch_async(v9, block);
    objc_release(v9);
    objc_release(v11);
  }
  objc_release(v7);
  objc_release(v5);
}