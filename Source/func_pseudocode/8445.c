-[SUContainedSoftwareUpdateController startUpdateWithTags:metadata:completionHandler:]
void __cdecl -[SUContainedSoftwareUpdateController startUpdateWithTags:metadata:completionHandler:](
        SUContainedSoftwareUpdateController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  dispatch_queue_s *queue; // x23
  _QWORD v12[5]; // [xsp+0h] [xbp-80h] BYREF
  id v13; // [xsp+28h] [xbp-58h]
  id v14; // [xsp+30h] [xbp-50h]
  id v15; // [xsp+38h] [xbp-48h]
  id v16; // [xsp+40h] [xbp-40h] BYREF
  id location; // [xsp+48h] [xbp-38h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  if ( !-[SUContainedSoftwareUpdateController _utilizeExistingContextForUpdateWithTags:metadata:completionHandler:](
          self,
          "_utilizeExistingContextForUpdateWithTags:metadata:completionHandler:",
          v8,
          v9,
          v10) )
  {
    objc_initWeak(&location, self);
    queue = (dispatch_queue_s *)self->_queue;
    v12[0] = _NSConcreteStackBlock;
    v12[1] = 3254779904LL;
    v12[2] = sub_100003B5C;
    v12[3] = &unk_100008210;
    v12[4] = self;
    v13 = objc_retain(v9);
    v15 = objc_retain(v10);
    v14 = objc_retain(v8);
    objc_copyWeak(&v16, &location);
    dispatch_async(queue, v12);
    objc_destroyWeak(&v16);
    objc_release(v14);
    objc_release(v15);
    objc_release(v13);
    objc_destroyWeak(&location);
  }
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
}