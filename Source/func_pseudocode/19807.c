-[lite_printer_t checkAccessWithSession:completionHandler:]
void __cdecl -[lite_printer_t checkAccessWithSession:completionHandler:](lite_printer_t *self, SEL a2, id a3, id a4)
{
  id v6; // x21
  id v7; // x22
  NSOperationQueue *printerOperationQueue; // x23
  id v9; // x21
  id v10; // x20
  _QWORD v11[5]; // [xsp+8h] [xbp-78h] BYREF
  id v12; // [xsp+30h] [xbp-50h]
  id v13; // [xsp+38h] [xbp-48h]
  id v14; // [xsp+40h] [xbp-40h] BYREF
  id location; // [xsp+48h] [xbp-38h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  objc_initWeak(&location, self);
  printerOperationQueue = self->_printerOperationQueue;
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_1000125A8;
  v11[3] = &unk_100091730;
  objc_copyWeak(&v14, &location);
  v12 = v6;
  v13 = v7;
  v11[4] = self;
  v9 = objc_retain(v6);
  v10 = objc_retain(v7);
  -[NSOperationQueue addOperationWithBlock:](printerOperationQueue, "addOperationWithBlock:", v11);
  objc_release(v12);
  objc_release(v13);
  objc_release(v9);
  objc_release(v10);
  objc_destroyWeak(&v14);
  objc_destroyWeak(&location);
}