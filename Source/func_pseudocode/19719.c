-[platform_http_t sendSingleIPPRequest:completionHandler:]
void __cdecl -[platform_http_t sendSingleIPPRequest:completionHandler:](
        platform_http_t *self,
        SEL a2,
        const Real_IPP_Message *a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  id v8; // x23
  void **v9; // [xsp+0h] [xbp-60h] BYREF
  __int64 v10; // [xsp+8h] [xbp-58h]
  __int64 (__fastcall *v11)(); // [xsp+10h] [xbp-50h]
  void *v12; // [xsp+18h] [xbp-48h]
  platform_http_t *v13; // [xsp+20h] [xbp-40h]
  id v14; // [xsp+28h] [xbp-38h]

  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(-[platform_http_t makeTask:forRequest:](self, "makeTask:forRequest:", CFSTR("single"), a3));
  v9 = _NSConcreteStackBlock;
  v10 = 3254779904LL;
  v11 = sub_10000B298;
  v12 = &unk_100091258;
  v13 = self;
  v8 = objc_retain(v6);
  v14 = v8;
  objc_msgSend(v7, "setTransactionCompletedCallback:", &v9);
  -[platform_http_t debugLogIPP:ipp:](self, "debugLogIPP:ipp:", "SEND_IPP", a3->var1, v9, v10, v11, v12, v13);
  objc_msgSend(v7, "start");
  objc_release(v14);
  objc_release(v7);
  objc_release(v8);
}