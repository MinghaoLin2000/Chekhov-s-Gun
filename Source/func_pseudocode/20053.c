-[PKNANDataSession dataSession:failedToStartWithError:]
void __cdecl -[PKNANDataSession dataSession:failedToStartWithError:](
        PKNANDataSession *self,
        SEL a2,
        id a3,
        signed __int64 a4)
{
  NSString *v6; // x19
  id v7; // x19
  id activateHandler; // x0
  NSNumber *v9; // x21
  NSDictionary *v10; // x23
  NSError *v11; // x22
  dispatch_queue_s *v12; // x20
  NSError *v13; // x21
  _QWORD block[4]; // [xsp+18h] [xbp-78h] BYREF
  NSError *v15; // [xsp+38h] [xbp-58h]
  id v16; // [xsp+40h] [xbp-50h]
  const __CFString *v17; // [xsp+48h] [xbp-48h] BYREF
  NSNumber *v18; // [xsp+50h] [xbp-40h] BYREF

  v6 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
  NSLog(&CFSTR("%@: %@").isa, self, v6);
  objc_release(v6);
  v7 = objc_retainBlock(self->_activateHandler);
  activateHandler = self->_activateHandler;
  self->_activateHandler = 0LL;
  objc_release(activateHandler);
  if ( v7 )
  {
    v17 = CFSTR("WiFiP2PError");
    v9 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInteger:](&OBJC_CLASS___NSNumber, "numberWithInteger:", a4));
    v18 = v9;
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v18,
              &v17,
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
    v12 = (dispatch_queue_s *)objc_retainAutoreleasedReturnValue(-[PKNANDataSession queue](self, "queue"));
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100030814;
    block[3] = &unk_100091950;
    v15 = v11;
    v16 = objc_retain(v7);
    v13 = objc_retain(v11);
    dispatch_async(v12, block);
    objc_release(v12);
    objc_release(v15);
    objc_release(v16);
    objc_release(v13);
  }
  objc_release(v7);
}