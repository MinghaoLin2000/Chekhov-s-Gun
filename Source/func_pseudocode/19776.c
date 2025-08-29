-[lite_printer_t sendSingleIPPRequest:session:]
id __cdecl -[lite_printer_t sendSingleIPPRequest:session:](
        lite_printer_t *self,
        SEL a2,
        const Real_IPP_Message *a3,
        id a4)
{
  id v6; // x19
  int v7; // w0
  NSString *v8; // x20
  device_http_t *v10; // x24
  NSURL *v11; // x23
  void *v12; // x25
  device_http_t *v13; // x24
  id v14; // x21
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = (unsigned int)objc_msgSend(a3->var1, "op_or_status");
  v8 = 0LL;
  if ( v7 > 78 )
  {
    if ( v7 == 79 || v7 == 16386 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( v7 != 11 && v7 != 60 )
LABEL_9:
    v8 = objc_retainAutoreleasedReturnValue(-[lite_printer_t displayName](self, "displayName"));
LABEL_10:
  v10 = objc_alloc(&OBJC_CLASS___device_http_t);
  v11 = objc_retainAutoreleasedReturnValue(-[lite_printer_t device_uri](self, "device_uri"));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "ippURL:", v11));
  v13 = -[device_http_t initWithSessionURL:displayNameForCertTrust:](
          v10,
          "initWithSessionURL:displayNameForCertTrust:",
          v12,
          v8);
  objc_release(v12);
  objc_release(v11);
  objc_release(objc_retainAutoreleasedReturnValue(-[lite_printer_t bonjourName](self, "bonjourName")));
  v14 = objc_retainAutoreleasedReturnValue(-[device_http_t sendSingleIPPRequest:](v13, "sendSingleIPPRequest:", a3));
  objc_release(v13);
  objc_release(v8);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v14);
}