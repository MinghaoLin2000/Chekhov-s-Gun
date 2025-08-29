-[SUContainedSoftwareUpdateController _notifyContextOfQueryStatus:status:state:]
void __cdecl -[SUContainedSoftwareUpdateController _notifyContextOfQueryStatus:status:state:](
        SUContainedSoftwareUpdateController *self,
        SEL a2,
        id a3,
        double a4,
        signed __int64 a5)
{
  id v8; // x0
  dispatch_queue_s *contextQueue; // x20
  id v10; // x19
  _QWORD block[4]; // [xsp+8h] [xbp-58h] BYREF
  id v12; // [xsp+28h] [xbp-38h]
  double v13; // [xsp+30h] [xbp-30h]
  signed __int64 v14; // [xsp+38h] [xbp-28h]

  v8 = objc_retain(a3);
  contextQueue = (dispatch_queue_s *)self->_contextQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100005254;
  block[3] = &unk_100008330;
  v12 = v8;
  v13 = a4;
  v14 = a5;
  v10 = objc_retain(v8);
  dispatch_async(contextQueue, block);
  objc_release(v12);
  objc_release(v10);
}