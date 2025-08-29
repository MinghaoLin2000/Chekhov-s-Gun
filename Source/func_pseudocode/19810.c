-[lite_printer_t forceRefreshCurrentDescriptionForSession:completionHandler:]
void __cdecl -[lite_printer_t forceRefreshCurrentDescriptionForSession:completionHandler:](
        lite_printer_t *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x20
  Block_layout *v7; // x19
  Printd_Parameters *v8; // x23
  NSURL *v9; // x22
  void *v10; // x22
  Block_layout *v11; // x0
  Block_layout *v12; // x24
  PKPrinterBrowseInfo *v13; // x25
  id v14; // x23
  PKPrinterBrowseInfo *v15; // x25
  Block_layout *v16; // x24
  _QWORD v17[4]; // [xsp+8h] [xbp-B8h] BYREF
  id v18; // [xsp+28h] [xbp-98h]
  id v19; // [xsp+30h] [xbp-90h]
  lite_printer_t *v20; // [xsp+38h] [xbp-88h]
  id v21; // [xsp+40h] [xbp-80h]
  id v22; // [xsp+48h] [xbp-78h] BYREF
  id location; // [xsp+50h] [xbp-70h] BYREF
  _QWORD v24[3]; // [xsp+58h] [xbp-68h] BYREF
  Printd_Parameters *v25; // [xsp+70h] [xbp-50h]

  v6 = objc_retain(a3);
  v7 = (Block_layout *)objc_retain(a4);
  sub_100013C6C(v24, 11LL, CFSTR("forceRefreshCurrentDescriptionForSession"));
  v24[0] = &off_100091890;
  v8 = v25;
  v9 = objc_retainAutoreleasedReturnValue(-[lite_printer_t device_uri](self, "device_uri"));
  Printd_Parameters::_set_PrinterURI(v8, v9);
  objc_release(v9);
  LODWORD(v8) = (_DWORD)v25;
  v10 = objc_retainAutoreleasedReturnValue(
          +[PKPrinterDescription standardRequestedAttributes](
            &OBJC_CLASS___PKPrinterDescription,
            "standardRequestedAttributes"));
  Printd_Parameters::_set_RequestedAttributes((int)v8, v10);
  objc_release(v10);
  if ( v7 )
    v11 = v7;
  else
    v11 = &stru_100091780;
  v12 = objc_retainBlock(v11);
  objc_initWeak(&location, self);
  v13 = objc_retain(self->_browseInfo);
  v17[0] = _NSConcreteStackBlock;
  v17[1] = 3254779904LL;
  v17[2] = sub_100013164;
  v17[3] = &unk_100091830;
  objc_copyWeak(&v22, &location);
  v21 = v12;
  v18 = v13;
  v14 = objc_retain(v6);
  v19 = v14;
  v20 = self;
  v15 = objc_retain(v13);
  v16 = objc_retain(v12);
  -[lite_printer_t sendSingleIPPRequest:session:completionHandler:](
    self,
    "sendSingleIPPRequest:session:completionHandler:",
    v24,
    v14,
    v17);
  objc_release(v19);
  objc_release(v18);
  objc_release(v21);
  objc_release(v15);
  objc_destroyWeak(&v22);
  objc_release(v16);
  objc_destroyWeak(&location);
  sub_100013E14(v24);
  objc_release(v7);
  objc_release(v14);
}