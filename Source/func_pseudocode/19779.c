+[lite_printer_t realizePrinterWithResolvedEndpoint:session:completionHandler:]
void __cdecl +[lite_printer_t realizePrinterWithResolvedEndpoint:session:completionHandler:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x19
  id v8; // x20
  id v9; // x21
  dispatch_queue_s *v10; // x22
  id v11; // x20
  id v12; // x21
  id v13; // x19
  _QWORD block[4]; // [xsp+8h] [xbp-58h] BYREF
  id v15; // [xsp+28h] [xbp-38h]
  id v16; // [xsp+30h] [xbp-30h]
  id v17; // [xsp+38h] [xbp-28h]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = objc_retain(a5);
  if ( qword_1000C3EA8 != -1 )
    dispatch_once(&qword_1000C3EA8, &stru_1000914D0);
  v10 = (dispatch_queue_s *)qword_1000C3EB0;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_10001075C;
  block[3] = &unk_100091580;
  v16 = v8;
  v17 = v9;
  v15 = v7;
  v11 = objc_retain(v8);
  v12 = objc_retain(v9);
  v13 = objc_retain(v7);
  dispatch_async(v10, block);
  objc_release(v16);
  objc_release(v17);
  objc_release(v15);
  objc_release(v11);
  objc_release(v12);
  objc_release(v13);
}