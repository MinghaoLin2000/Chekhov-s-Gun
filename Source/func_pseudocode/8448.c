-[SUContainedSoftwareUpdateController requestStatusForSession:statusHandler:]
void __cdecl -[SUContainedSoftwareUpdateController requestStatusForSession:statusHandler:](
        SUContainedSoftwareUpdateController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x21
  dispatch_queue_s *queue; // x20
  id v9; // x21
  _QWORD v10[4]; // [xsp+0h] [xbp-50h] BYREF
  id v11; // [xsp+20h] [xbp-30h]
  id v12; // [xsp+28h] [xbp-28h]

  v6 = objc_retain(a4);
  if ( a3 )
  {
    v7 = objc_retainAutoreleasedReturnValue(
           -[SUContainedSoftwareUpdateController _contextForSessionIdentifier:](
             self,
             "_contextForSessionIdentifier:",
             a3));
    queue = (dispatch_queue_s *)self->_queue;
    v10[0] = _NSConcreteStackBlock;
    v10[1] = 3254779904LL;
    v10[2] = sub_1000043E8;
    v10[3] = &unk_1000081E0;
    v11 = v7;
    v12 = objc_retain(v6);
    v9 = objc_retain(v7);
    dispatch_async(queue, v10);
    objc_release(v11);
    objc_release(v12);
    objc_release(v9);
  }
  objc_release(v6);
}