+[lite_printer_t withLitePrinterForSessionEndpoint:completionHandler:]
void __cdecl +[lite_printer_t withLitePrinterForSessionEndpoint:completionHandler:](id a1, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  void *v8; // x21
  id v9; // x23
  id v10; // x22
  _QWORD v11[4]; // [xsp+8h] [xbp-68h] BYREF
  id v12; // [xsp+28h] [xbp-48h]
  id v13; // [xsp+30h] [xbp-40h]
  id v14; // [xsp+38h] [xbp-38h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "endpoint"));
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_100011F34;
  v11[3] = &unk_1000916D0;
  v9 = objc_retain(v7);
  v13 = v9;
  v14 = a1;
  v10 = objc_retain(v6);
  v12 = v10;
  objc_msgSend(v8, "resolveWithinPrinterToolWithTimeout:completionHandler:", v11, 30.0);
  objc_release(v8);
  objc_release(v12);
  objc_release(v13);
  objc_release(v9);
  objc_release(v10);
}