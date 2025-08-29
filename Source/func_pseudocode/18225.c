-[OSLogService _queue_setupWithPredicate:reply:]
void __cdecl -[OSLogService _queue_setupWithPredicate:reply:](OSLogService *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  NSPredicate *v8; // x0
  NSPredicate *v9; // x21
  NSArray *v10; // x22
  NSPredicate *v11; // x0
  NSPredicate *predicate; // x8
  void *v13; // x0
  void *v14; // x22
  id v15; // x0
  OSLogEventStream *v16; // x0
  OSLogEventStream *stream; // x8
  NSMutableArray *v18; // x0
  NSMutableArray *events; // x8
  OSLogEventStream *v20; // x25
  OSLogEventStream *v21; // x26
  NSDictionary *v22; // x23
  NSError *v23; // x0
  void *v24; // x8
  _QWORD v25[4]; // [xsp+10h] [xbp-1C0h] BYREF
  id v26; // [xsp+30h] [xbp-1A0h]
  _QWORD *v27; // [xsp+38h] [xbp-198h]
  id v28; // [xsp+40h] [xbp-190h] BYREF
  _QWORD v29[5]; // [xsp+48h] [xbp-188h] BYREF
  id v30; // [xsp+70h] [xbp-160h]
  _QWORD v31[4]; // [xsp+78h] [xbp-158h] BYREF
  id v32; // [xsp+98h] [xbp-138h] BYREF
  id location; // [xsp+A0h] [xbp-130h] BYREF
  _QWORD v34[6]; // [xsp+A8h] [xbp-128h] BYREF
  __int64 v35; // [xsp+D8h] [xbp-F8h] BYREF
  __int64 *v36; // [xsp+E0h] [xbp-F0h]
  __int64 v37; // [xsp+E8h] [xbp-E8h]
  __int64 (__fastcall *v38)(); // [xsp+F0h] [xbp-E0h]
  __int64 (__fastcall *v39)(); // [xsp+F8h] [xbp-D8h]
  id v40; // [xsp+100h] [xbp-D0h]
  __int64 v41; // [xsp+108h] [xbp-C8h] BYREF
  __int64 *v42; // [xsp+110h] [xbp-C0h]
  __int64 v43; // [xsp+118h] [xbp-B8h]
  __int64 (__fastcall *v44)(); // [xsp+120h] [xbp-B0h]
  __int64 (__fastcall *v45)(); // [xsp+128h] [xbp-A8h]
  id v46; // [xsp+130h] [xbp-A0h]
  NSErrorUserInfoKey v47; // [xsp+148h] [xbp-88h] BYREF
  const __CFString *v48; // [xsp+150h] [xbp-80h] BYREF
  _QWORD v49[2]; // [xsp+158h] [xbp-78h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  dispatch_assert_queue_V2((dispatch_queue_t)self->_serial_queue);
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSPredicate predicateWithFormat:](
           &OBJC_CLASS___NSPredicate,
           "predicateWithFormat:",
           CFSTR("processIdentifier == %d and processIdentifierVersion == %u"),
           (unsigned int)self->_callingProcessIdentifier,
           self->_callingProcessIdentifierVersion));
  v9 = v8;
  if ( v6 )
  {
    v49[0] = v8;
    v49[1] = v6;
    v10 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v49, 2LL));
    v11 = (NSPredicate *)objc_msgSend(
                           objc_alloc((Class)&OBJC_CLASS___NSCompoundPredicate),
                           "initWithType:subpredicates:",
                           1LL,
                           v10);
    predicate = self->_predicate;
    self->_predicate = v11;
    objc_release(predicate);
    objc_release(v10);
  }
  else
  {
    objc_storeStrong((id *)&self->_predicate, v8);
  }
  v41 = 0LL;
  v42 = &v41;
  v43 = 0x3032000000LL;
  v44 = sub_100001954;
  v45 = sub_100001964;
  v46 = 0LL;
  v13 = objc_retainAutoreleasedReturnValue(+[OSLogEventStore localStore](&OBJC_CLASS___OSLogEventStore, "localStore"));
  v14 = v13;
  if ( v13 )
  {
    v35 = 0LL;
    v36 = &v35;
    v37 = 0x3032000000LL;
    v38 = sub_100001954;
    v39 = sub_100001964;
    v40 = 0LL;
    v34[0] = _NSConcreteStackBlock;
    v34[1] = 3254779904LL;
    v34[2] = sub_1000021B4;
    v34[3] = &unk_100004200;
    v34[4] = &v41;
    v34[5] = &v35;
    objc_msgSend(v13, "prepareWithCompletionHandler:", v34);
    if ( v36[5] )
    {
      v15 = objc_alloc((Class)&OBJC_CLASS___OSLogEventStream);
      v16 = (OSLogEventStream *)objc_msgSend(v15, "initWithSource:", v36[5]);
      stream = self->_stream;
      self->_stream = v16;
      objc_release(stream);
      -[OSLogEventStream setFilterPredicate:](self->_stream, "setFilterPredicate:", self->_predicate);
      -[OSLogEventStream setFlags:](self->_stream, "setFlags:", 39LL);
      v18 = (NSMutableArray *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
      events = self->_events;
      self->_events = v18;
      objc_release(events);
      objc_initWeak(&location, self);
      v20 = self->_stream;
      v31[0] = _NSConcreteStackBlock;
      v31[1] = 3254779904LL;
      v31[2] = sub_100002244;
      v31[3] = &unk_100004260;
      objc_copyWeak(&v32, &location);
      -[OSLogEventStream setEventHandler:](v20, "setEventHandler:", v31);
      v29[0] = 0LL;
      v29[1] = v29;
      v29[2] = 0x3032000000LL;
      v29[3] = sub_100001954;
      v29[4] = sub_100001964;
      v30 = (id)os_transaction_create("com.apple.OSLogService.OSLogEventStream");
      v21 = self->_stream;
      v25[0] = _NSConcreteStackBlock;
      v25[1] = 3254779904LL;
      v25[2] = sub_100002330;
      v25[3] = &unk_1000042C0;
      objc_copyWeak(&v28, &location);
      v26 = objc_retain(v7);
      v27 = v29;
      -[OSLogEventStream setInvalidationHandler:](v21, "setInvalidationHandler:", v25);
      -[OSLogEventStream _activateStreamFromTimeIntervalSinceLastBoot:](
        self->_stream,
        "_activateStreamFromTimeIntervalSinceLastBoot:",
        0.0);
      objc_release(v26);
      objc_destroyWeak(&v28);
      _Block_object_dispose(v29, 8);
      objc_release(v30);
      objc_destroyWeak(&v32);
      objc_destroyWeak(&location);
    }
    else
    {
      (*((void (__fastcall **)(id, __int64))v7 + 2))(v7, v42[5]);
    }
    _Block_object_dispose(&v35, 8);
    objc_release(v40);
  }
  else
  {
    v47 = NSLocalizedDescriptionKey;
    v48 = CFSTR("No access to logs");
    v22 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v48,
              &v47,
              1LL));
    v23 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              OSLogErrorDomain,
              -1LL,
              v22));
    v24 = (void *)v42[5];
    v42[5] = (__int64)v23;
    objc_release(v24);
    (*((void (__fastcall **)(id, __int64))v7 + 2))(v7, v42[5]);
    objc_release(v22);
  }
  objc_release(v14);
  _Block_object_dispose(&v41, 8);
  objc_release(v46);
  objc_release(v9);
  objc_release(v7);
  objc_release(v6);
}