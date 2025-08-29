-[PKNANDataSession dataSession:confirmedForPeerDataAddress:serviceSpecificInfo:]
void __cdecl -[PKNANDataSession dataSession:confirmedForPeerDataAddress:serviceSpecificInfo:](
        PKNANDataSession *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v9; // x19
  id v10; // x20
  NSString *v11; // x24
  id v12; // x22
  id activateHandler; // x0
  dispatch_queue_s *v14; // x21
  _QWORD block[4]; // [xsp+18h] [xbp-58h] BYREF
  id v16; // [xsp+38h] [xbp-38h]

  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v11 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
  NSLog(&CFSTR("%@: %@").isa, self, v11);
  objc_release(v11);
  objc_storeStrong((id *)&self->_peerDataAddress, a4);
  objc_storeStrong((id *)&self->_serviceSpecificInfo, a5);
  v12 = objc_retainBlock(self->_activateHandler);
  activateHandler = self->_activateHandler;
  self->_activateHandler = 0LL;
  objc_release(activateHandler);
  if ( v12 )
  {
    v14 = (dispatch_queue_s *)objc_retainAutoreleasedReturnValue(-[PKNANDataSession queue](self, "queue"));
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_1000309B4;
    block[3] = &unk_1000915B0;
    v16 = objc_retain(v12);
    dispatch_async(v14, block);
    objc_release(v14);
    objc_release(v16);
  }
  objc_release(v12);
  objc_release(v10);
  objc_release(v9);
}