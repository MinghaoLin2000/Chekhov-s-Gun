-[PKPrinterBonjourEndpoint resolveWithinPrinterToolWithTimeout:completionHandler:]
void __cdecl -[PKPrinterBonjourEndpoint resolveWithinPrinterToolWithTimeout:completionHandler:](
        PKPrinterBonjourEndpoint *self,
        SEL a2,
        double a3,
        id a4)
{
  void (__fastcall **v6)(id, PKPrinterBonjourEndpoint *); // x19
  __int64 v7; // x1
  void *v8; // x21
  void *v9; // x22
  void *v10; // x22
  void *v11; // x21
  _QWORD v12[5]; // [xsp+0h] [xbp-60h] BYREF
  id v13; // [xsp+28h] [xbp-38h]

  v6 = (void (__fastcall **)(id, PKPrinterBonjourEndpoint *))objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[PKPrinterBonjourEndpoint resolvedURL](self, "resolvedURL"));
  if ( v8
    && (v9 = objc_retainAutoreleasedReturnValue(-[PKPrinterBonjourEndpoint resolvedTXT](self, "resolvedTXT")),
        objc_release(v9),
        objc_release(v8),
        v9) )
  {
    v6[2](v6, self);
  }
  else
  {
    v10 = (void *)objc_opt_class(self, v7);
    v11 = objc_retainAutoreleasedReturnValue(-[PKPrinterBonjourEndpoint nwEndpoint](self, "nwEndpoint"));
    v12[0] = _NSConcreteStackBlock;
    v12[1] = 3254779904LL;
    v12[2] = sub_10005F754;
    v12[3] = &unk_10009FA08;
    v12[4] = self;
    v13 = objc_retain(v6);
    objc_msgSend(v10, "resolveEndpoint:timeout:completionHandler:", v11, v12, a3);
    objc_release(v11);
    objc_release(v13);
  }
  objc_release(v6);
}