-[SUContainedSoftwareUpdateController _dequeue]
void __cdecl -[SUContainedSoftwareUpdateController _dequeue](SUContainedSoftwareUpdateController *self, SEL a2)
{
  dispatch_queue_s *contextQueue; // x0
  dispatch_queue_s *queue; // x0
  _QWORD v5[5]; // [xsp+8h] [xbp-98h] BYREF
  _QWORD block[6]; // [xsp+30h] [xbp-70h] BYREF
  __int64 v7; // [xsp+60h] [xbp-40h] BYREF
  __int64 *v8; // [xsp+68h] [xbp-38h]
  __int64 v9; // [xsp+70h] [xbp-30h]
  char v10; // [xsp+78h] [xbp-28h]

  v7 = 0LL;
  v8 = &v7;
  v9 = 0x2020000000LL;
  v10 = 0;
  contextQueue = (dispatch_queue_s *)self->_contextQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100004F30;
  block[3] = &unk_100008300;
  block[4] = self;
  block[5] = &v7;
  dispatch_sync(contextQueue, block);
  if ( !-[SUContainedSoftwareUpdateController _isCancelPending](self, "_isCancelPending") && !*((_BYTE *)v8 + 24) )
  {
    queue = (dispatch_queue_s *)self->_queue;
    v5[0] = _NSConcreteStackBlock;
    v5[1] = 3254779904LL;
    v5[2] = sub_100004FD4;
    v5[3] = &unk_1000082D0;
    v5[4] = self;
    dispatch_async(queue, v5);
  }
  _Block_object_dispose(&v7, 8);
}