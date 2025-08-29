-[PKNANDataSession dataSession:terminatedWithReason:]
void __cdecl -[PKNANDataSession dataSession:terminatedWithReason:](
        PKNANDataSession *self,
        SEL a2,
        id a3,
        signed __int64 a4)
{
  id v7; // x19
  NSString *v8; // x22
  NSNumber *v9; // x22
  NSDictionary *v10; // x24
  NSError *v11; // x20
  id v12; // x22
  id activateHandler; // x0
  dispatch_queue_s *v14; // x21
  id *v15; // x23
  id *v16; // x24
  _QWORD *v17; // x1
  _QWORD block[4]; // [xsp+18h] [xbp-A8h] BYREF
  NSError *v19; // [xsp+38h] [xbp-88h] BYREF
  id v20; // [xsp+40h] [xbp-80h] BYREF
  _QWORD v21[4]; // [xsp+48h] [xbp-78h] BYREF
  NSError *v22; // [xsp+68h] [xbp-58h] BYREF
  id v23; // [xsp+70h] [xbp-50h] BYREF
  const __CFString *v24; // [xsp+78h] [xbp-48h] BYREF
  NSNumber *v25; // [xsp+80h] [xbp-40h] BYREF

  v7 = objc_retain(a3);
  v8 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
  NSLog(&CFSTR("%@: %@ - %d").isa, self, v8, a4);
  objc_release(v8);
  objc_msgSend(v7, "setDelegate:", 0LL);
  v24 = CFSTR("WiFiAwareTerminationReason");
  v9 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInteger:](&OBJC_CLASS___NSNumber, "numberWithInteger:", a4));
  v25 = v9;
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            &v25,
            &v24,
            1LL));
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSError errorWithDomain:code:userInfo:](
            &OBJC_CLASS___NSError,
            "errorWithDomain:code:userInfo:",
            NSPOSIXErrorDomain,
            14LL,
            v10));
  objc_release(v10);
  objc_release(v9);
  if ( self->_activateHandler )
  {
    NSLog(&CFSTR("terminated without activation, so not sending to termination handler").isa);
    v12 = objc_retainBlock(self->_activateHandler);
    activateHandler = self->_activateHandler;
    self->_activateHandler = 0LL;
    objc_release(activateHandler);
    if ( v12 )
    {
      v14 = (dispatch_queue_s *)objc_retainAutoreleasedReturnValue(-[PKNANDataSession queue](self, "queue"));
      v21[0] = _NSConcreteStackBlock;
      v21[1] = 3254779904LL;
      v21[2] = sub_100030D18;
      v21[3] = &unk_100091950;
      v15 = &v23;
      v12 = objc_retain(v12);
      v23 = v12;
      v16 = (id *)&v22;
      v22 = objc_retain(v11);
      v17 = v21;
LABEL_6:
      dispatch_async(v14, v17);
      objc_release(v14);
      objc_release(*v16);
      objc_release(*v15);
    }
  }
  else
  {
    v12 = objc_retainAutoreleasedReturnValue(-[PKNANDataSession terminationHandler](self, "terminationHandler"));
    if ( v12 )
    {
      v14 = (dispatch_queue_s *)objc_retainAutoreleasedReturnValue(-[PKNANDataSession queue](self, "queue"));
      block[0] = _NSConcreteStackBlock;
      block[1] = 3254779904LL;
      block[2] = sub_100030D2C;
      block[3] = &unk_100091950;
      v15 = &v20;
      v12 = objc_retain(v12);
      v20 = v12;
      v16 = (id *)&v19;
      v19 = objc_retain(v11);
      v17 = block;
      goto LABEL_6;
    }
  }
  objc_release(v12);
  objc_release(v11);
  objc_release(v7);
}