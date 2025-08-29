-[PrintdRPCService browseInfoForPrinter:timeout:reply:]
void __cdecl -[PrintdRPCService browseInfoForPrinter:timeout:reply:](
        PrintdRPCService *self,
        SEL a2,
        id a3,
        double a4,
        id a5)
{
  id v7; // x19
  void (__fastcall **v8)(id, void *); // x20
  os_log_s *v9; // x21
  id v10; // x0
  void *v11; // x21
  void (__fastcall **v12)(id, void *); // x22
  _QWORD v13[4]; // [xsp+8h] [xbp-78h] BYREF
  void (__fastcall **v14)(id, void *); // [xsp+28h] [xbp-58h]
  uint8_t buf[4]; // [xsp+30h] [xbp-50h] BYREF
  id v16; // [xsp+34h] [xbp-4Ch]

  v7 = objc_retain(a3);
  v8 = (void (__fastcall **)(id, void *))objc_retain(a5);
  v9 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 138543362;
    v16 = v7;
    _os_log_impl((void *)&_mh_execute_header, v9, OS_LOG_TYPE_DEFAULT, "browseInfoForPrinter: %{public}@", buf, 0xCu);
  }
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(
          +[lite_printer_t existingPrinterWithEndpoint:](
            &OBJC_CLASS___lite_printer_t,
            "existingPrinterWithEndpoint:",
            v7));
  v11 = v10;
  if ( v10 )
  {
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "browseInfo"));
    v8[2](v8, v12);
  }
  else
  {
    v13[0] = _NSConcreteStackBlock;
    v13[1] = 3254779904LL;
    v13[2] = sub_10004D5E4;
    v13[3] = &unk_10009F148;
    v14 = objc_retain(v8);
    objc_msgSend(v7, "resolveWithinPrinterToolWithTimeout:completionHandler:", v13, a4);
    v12 = v14;
  }
  objc_release(v12);
  objc_release(v11);
  objc_release(v8);
  objc_release(v7);
}