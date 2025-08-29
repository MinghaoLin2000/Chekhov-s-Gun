-[SUContainedSoftwareUpdateController _notifyContextOfQueryCompletion:error:]
void __cdecl -[SUContainedSoftwareUpdateController _notifyContextOfQueryCompletion:error:](
        SUContainedSoftwareUpdateController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x0
  void *v8; // x20
  dispatch_queue_s *contextQueue; // x22
  _QWORD block[4]; // [xsp+8h] [xbp-58h] BYREF
  id v11; // [xsp+28h] [xbp-38h]
  SUContainedSoftwareUpdateController *v12; // [xsp+30h] [xbp-30h]
  id v13; // [xsp+38h] [xbp-28h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = v7;
  if ( v6 )
  {
    contextQueue = (dispatch_queue_s *)self->_contextQueue;
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100005408;
    block[3] = &unk_100008390;
    v11 = objc_retain(v7);
    v12 = self;
    v13 = objc_retain(v6);
    dispatch_async(contextQueue, block);
    objc_release(v13);
    objc_release(v11);
  }
  objc_release(v8);
  objc_release(v6);
}