-[SUContainedSoftwareUpdateController _isCancelPending]
bool __cdecl -[SUContainedSoftwareUpdateController _isCancelPending](SUContainedSoftwareUpdateController *self, SEL a2)
{
  dispatch_queue_s *contextQueue; // x8
  bool v3; // w19
  _QWORD v5[6]; // [xsp+0h] [xbp-60h] BYREF
  __int64 v6; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v7; // [xsp+38h] [xbp-28h]
  __int64 v8; // [xsp+40h] [xbp-20h]
  __int64 v9; // [xsp+48h] [xbp-18h]

  v6 = 0LL;
  v7 = &v6;
  v8 = 0x2020000000LL;
  v9 = 0LL;
  contextQueue = (dispatch_queue_s *)self->_contextQueue;
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_100005AF4;
  v5[3] = &unk_100008300;
  v5[4] = self;
  v5[5] = &v6;
  dispatch_sync(contextQueue, v5);
  v3 = v7[3] > 0;
  _Block_object_dispose(&v6, 8);
  return v3;
}