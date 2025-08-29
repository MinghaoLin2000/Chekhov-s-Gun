-[iAUPServer setHSModel:fallbackModel:error:]
void __cdecl -[iAUPServer setHSModel:fallbackModel:error:](iAUPServer *self, SEL a2, id a3, id a4, id a5)
{
  dispatch_queue_s *dispatchQ; // x8
  _QWORD v6[8]; // [xsp+0h] [xbp-40h] BYREF

  dispatchQ = (dispatch_queue_s *)self->_dispatchQ;
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_100013A60;
  v6[3] = &unk_100031898;
  v6[4] = a3;
  v6[5] = a4;
  v6[6] = a5;
  v6[7] = self;
  dispatch_async(dispatchQ, v6);
}