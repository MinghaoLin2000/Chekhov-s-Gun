-[platform_http_t httpResponseForError:]
id __cdecl -[platform_http_t httpResponseForError:](platform_http_t *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x21
  unsigned int v6; // w22
  void *v7; // x0
  __int64 v8; // x21
  http_ipp_response_t *v9; // x20
  os_log_s *v10; // x21
  int v12; // [xsp+0h] [xbp-40h] BYREF
  id v13; // [xsp+4h] [xbp-3Ch]
  __int16 v14; // [xsp+Ch] [xbp-34h]
  http_ipp_response_t *v15; // [xsp+Eh] [xbp-32h]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "domain"));
  v6 = (unsigned int)objc_msgSend(v5, "isEqualToString:", NSURLErrorDomain);
  objc_release(v5);
  if ( v6 )
  {
    v7 = objc_msgSend(v4, "code");
    v8 = 1LL;
    switch ( (unsigned __int64)v7 )
    {
      case 0xFFFFFFFFFFFFFC0BLL:
        v8 = 3LL;
        break;
      case 0xFFFFFFFFFFFFFC0CLL:
        v8 = 6LL;
        break;
      case 0xFFFFFFFFFFFFFC0DLL:
      case 0xFFFFFFFFFFFFFC0ELL:
      case 0xFFFFFFFFFFFFFC0FLL:
      case 0xFFFFFFFFFFFFFC10LL:
      case 0xFFFFFFFFFFFFFC11LL:
      case 0xFFFFFFFFFFFFFC16LL:
      case 0xFFFFFFFFFFFFFC18LL:
        break;
      case 0xFFFFFFFFFFFFFC12LL:
      case 0xFFFFFFFFFFFFFC13LL:
      case 0xFFFFFFFFFFFFFC14LL:
      case 0xFFFFFFFFFFFFFC15LL:
      case 0xFFFFFFFFFFFFFC17LL:
        v8 = 5LL;
        break;
      case 0xFFFFFFFFFFFFFC19LL:
        if ( self->_userCanceledAuth )
          v8 = 6LL;
        else
          v8 = 3LL;
        break;
      default:
        if ( (unsigned __int64)v7 + 1206 >= 7 )
          v8 = 1LL;
        else
          v8 = 4LL;
        break;
    }
  }
  else
  {
    v8 = 1LL;
  }
  v9 = -[http_ipp_response_t initWithTransportStatus:](
         objc_alloc(&OBJC_CLASS___http_ipp_response_t),
         "initWithTransportStatus:",
         v8);
  v10 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v10, OS_LOG_TYPE_DEFAULT) )
  {
    v12 = 138543618;
    v13 = v4;
    v14 = 2114;
    v15 = v9;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v10,
      OS_LOG_TYPE_DEFAULT,
      "transport error: %{public}@ => %{public}@",
      (uint8_t *)&v12,
      0x16u);
  }
  objc_release(v10);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}