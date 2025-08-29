-[SUContainedSoftwareUpdateController _clearCancelPending]
void __cdecl -[SUContainedSoftwareUpdateController _clearCancelPending](
        SUContainedSoftwareUpdateController *self,
        SEL a2)
{
  dispatch_queue_s *contextQueue; // x8
  _QWORD block[5]; // [xsp+8h] [xbp-28h] BYREF

  contextQueue = (dispatch_queue_s *)self->_contextQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100005C04;
  block[3] = &unk_1000082D0;
  block[4] = self;
  dispatch_async(contextQueue, block);
}