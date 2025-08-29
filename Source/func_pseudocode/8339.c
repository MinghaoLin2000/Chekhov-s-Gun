-[StoreUIService presentDialogRequest:withResultHandler:]
void __cdecl -[StoreUIService presentDialogRequest:withResultHandler:](StoreUIService *self, SEL a2, id a3, id a4)
{
  id v6; // x21
  id v7; // x0
  dispatch_queue_s *dispatchQueue; // x19
  id v9; // x20
  id v10; // x21
  _QWORD v11[4]; // [xsp+0h] [xbp-50h] BYREF
  id v12; // [xsp+20h] [xbp-30h]
  id v13; // [xsp+28h] [xbp-28h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  dispatchQueue = (dispatch_queue_s *)self->_dispatchQueue;
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_10000AEAC;
  v11[3] = &unk_100010958;
  v12 = v6;
  v13 = v7;
  v9 = objc_retain(v7);
  v10 = objc_retain(v6);
  dispatch_async(dispatchQueue, v11);
  objc_release(v13);
  objc_release(v12);
  objc_release(v9);
  objc_release(v10);
}