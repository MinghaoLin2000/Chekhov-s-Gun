-[SUContainedSoftwareUpdateController _setContext:forCTRL:]
void __cdecl -[SUContainedSoftwareUpdateController _setContext:forCTRL:](
        SUContainedSoftwareUpdateController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  dispatch_queue_s *contextQueue; // x22
  _QWORD block[4]; // [xsp+8h] [xbp-58h] BYREF
  id v10; // [xsp+28h] [xbp-38h]
  SUContainedSoftwareUpdateController *v11; // [xsp+30h] [xbp-30h]
  id v12; // [xsp+38h] [xbp-28h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  if ( v7 )
  {
    contextQueue = (dispatch_queue_s *)self->_contextQueue;
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_10000584C;
    block[3] = &unk_100008390;
    v10 = objc_retain(v6);
    v11 = self;
    v12 = objc_retain(v7);
    dispatch_async(contextQueue, block);
    objc_release(v12);
    objc_release(v10);
  }
  objc_release(v7);
  objc_release(v6);
}