-[lite_printer_t sendSingleIPPRequest:session:completionHandler:]
void __cdecl -[lite_printer_t sendSingleIPPRequest:session:completionHandler:](
        lite_printer_t *self,
        SEL a2,
        const Real_IPP_Message *a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  int v10; // w0
  NSString *v11; // x21
  device_http_t *v13; // x25
  NSURL *v14; // x24
  void *v15; // x26
  device_http_t *v16; // x25
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v8 = objc_retain(a4);
  v9 = objc_retain(a5);
  v10 = (unsigned int)objc_msgSend(a3->var1, "op_or_status");
  v11 = 0LL;
  if ( v10 > 78 )
  {
    if ( v10 == 79 || v10 == 16386 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( v10 != 11 && v10 != 60 )
LABEL_9:
    v11 = objc_retainAutoreleasedReturnValue(-[lite_printer_t displayName](self, "displayName"));
LABEL_10:
  v13 = objc_alloc(&OBJC_CLASS___device_http_t);
  v14 = objc_retainAutoreleasedReturnValue(-[lite_printer_t device_uri](self, "device_uri"));
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "ippURL:", v14));
  v16 = -[device_http_t initWithSessionURL:displayNameForCertTrust:](
          v13,
          "initWithSessionURL:displayNameForCertTrust:",
          v15,
          v11);
  objc_release(v15);
  objc_release(v14);
  objc_release(objc_retainAutoreleasedReturnValue(-[lite_printer_t bonjourName](self, "bonjourName")));
  -[device_http_t sendSingleIPPRequest:completionHandler:](v16, "sendSingleIPPRequest:completionHandler:", a3, v9);
  objc_release(v16);
  objc_release(v11);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}