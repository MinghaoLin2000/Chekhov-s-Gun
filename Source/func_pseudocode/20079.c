-[PKNANSubscriber subscriber:receivedDiscoveryResult:]
void __cdecl -[PKNANSubscriber subscriber:receivedDiscoveryResult:](PKNANSubscriber *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  NSString *v7; // x20
  void *v8; // x22
  PKNANEndpoint *v9; // x20
  id v10; // x22
  dispatch_queue_s *v11; // x21
  _QWORD block[4]; // [xsp+20h] [xbp-50h] BYREF
  id v13; // [xsp+40h] [xbp-30h]
  id v14; // [xsp+48h] [xbp-28h]

  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "debugDescription"));
  NSLog(&CFSTR("%@: %@ - %@").isa, self, v7, v8);
  objc_release(v8);
  objc_release(v7);
  v9 = -[PKNANEndpoint initWithDiscoveryResult:](
         objc_alloc(&OBJC_CLASS___PKNANEndpoint),
         "initWithDiscoveryResult:",
         v6);
  -[NSMutableSet addObject:](self->_endpoints, "addObject:", v9);
  v10 = objc_retainAutoreleasedReturnValue(-[PKNANSubscriber endpointFoundHandler](self, "endpointFoundHandler"));
  if ( v10 )
  {
    v11 = (dispatch_queue_s *)objc_retainAutoreleasedReturnValue(-[PKNANSubscriber queue](self, "queue"));
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100031D58;
    block[3] = &unk_100091950;
    v14 = objc_retain(v10);
    v13 = objc_retain(v9);
    dispatch_async(v11, block);
    objc_release(v11);
    objc_release(v13);
    objc_release(v14);
  }
  objc_release(v10);
  objc_release(v9);
  objc_release(v6);
}