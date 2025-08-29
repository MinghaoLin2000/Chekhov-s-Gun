-[SUContainedSoftwareUpdateController queryCacheWithTags:metadata:completionHandler:]
void __cdecl -[SUContainedSoftwareUpdateController queryCacheWithTags:metadata:completionHandler:](
        SUContainedSoftwareUpdateController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  void *v11; // x23
  dispatch_queue_s *queue; // x21
  id v13; // x20
  id v14; // x19
  id v15; // x22
  _QWORD v16[4]; // [xsp+0h] [xbp-70h] BYREF
  id v17; // [xsp+20h] [xbp-50h]
  SUContainedSoftwareUpdateController *v18; // [xsp+28h] [xbp-48h]
  id v19; // [xsp+30h] [xbp-40h]
  id v20; // [xsp+38h] [xbp-38h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a5);
  v10 = objc_retain(a4);
  v11 = objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___SUSoftwareUpdateController),
          "initWithDelegate:localizedProductName:",
          0LL,
          0LL);
  objc_msgSend(v11, "setEvaluationMetaInfo:", v10);
  objc_release(v10);
  queue = (dispatch_queue_s *)self->_queue;
  v16[0] = _NSConcreteStackBlock;
  v16[1] = 3254779904LL;
  v16[2] = sub_100004034;
  v16[3] = &unk_100008240;
  v17 = v11;
  v18 = self;
  v19 = v8;
  v20 = v9;
  v13 = objc_retain(v9);
  v14 = objc_retain(v8);
  v15 = objc_retain(v11);
  dispatch_async(queue, v16);
  objc_release(v20);
  objc_release(v19);
  objc_release(v17);
  objc_release(v13);
  objc_release(v14);
  objc_release(v15);
}