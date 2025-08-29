-[SUContainedSoftwareUpdateController _utilizeExistingContextForUpdateWithTags:metadata:completionHandler:]
bool __cdecl -[SUContainedSoftwareUpdateController _utilizeExistingContextForUpdateWithTags:metadata:completionHandler:](
        SUContainedSoftwareUpdateController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x22
  id v9; // x20
  id v10; // x0
  dispatch_queue_s *contextQueue; // x19
  id v12; // x21
  id v13; // x20
  id v14; // x22
  _QWORD block[5]; // [xsp+8h] [xbp-88h] BYREF
  id v17; // [xsp+30h] [xbp-60h]
  id v18; // [xsp+38h] [xbp-58h]
  id v19; // [xsp+40h] [xbp-50h]
  __int64 *v20; // [xsp+48h] [xbp-48h]
  __int64 v21; // [xsp+50h] [xbp-40h] BYREF
  __int64 *v22; // [xsp+58h] [xbp-38h]
  __int64 v23; // [xsp+60h] [xbp-30h]
  char v24; // [xsp+68h] [xbp-28h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v21 = 0LL;
  v22 = &v21;
  v23 = 0x2020000000LL;
  v24 = 0;
  contextQueue = (dispatch_queue_s *)self->_contextQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_1000035E0;
  block[3] = &unk_1000081B0;
  block[4] = self;
  v17 = v8;
  v18 = v9;
  v19 = v10;
  v20 = &v21;
  v12 = objc_retain(v10);
  v13 = objc_retain(v9);
  v14 = objc_retain(v8);
  dispatch_sync(contextQueue, block);
  LOBYTE(contextQueue) = *((_BYTE *)v22 + 24);
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  objc_release(v12);
  objc_release(v13);
  objc_release(v14);
  _Block_object_dispose(&v21, 8);
  return (char)contextQueue;
}