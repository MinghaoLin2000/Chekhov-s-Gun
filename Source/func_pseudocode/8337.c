-[StoreUIService presentAuthenticateRequest:withResultHandler:]
void __cdecl -[StoreUIService presentAuthenticateRequest:withResultHandler:](
        StoreUIService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x21
  id v7; // x0
  dispatch_queue_s *dispatchQueue; // x19
  id v9; // x20
  id v10; // x21
  _QWORD block[4]; // [xsp+8h] [xbp-58h] BYREF
  id v12; // [xsp+28h] [xbp-38h]
  StoreUIService *v13; // [xsp+30h] [xbp-30h]
  id v14; // [xsp+38h] [xbp-28h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  dispatchQueue = (dispatch_queue_s *)self->_dispatchQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_10000A65C;
  block[3] = &unk_1000109B8;
  v12 = v6;
  v13 = self;
  v14 = v7;
  v9 = objc_retain(v7);
  v10 = objc_retain(v6);
  dispatch_async(dispatchQueue, block);
  objc_release(v14);
  objc_release(v12);
  objc_release(v9);
  objc_release(v10);
}