-[INHService storeImage:scaled:qualityOfService:storeType:completion:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[INHService storeImage:scaled:qualityOfService:storeType:completion:](
        INHService *self,
        SEL a2,
        id a3,
        bool a4,
        unsigned int a5,
        unsigned __int64 a6,
        id a7)
{
  __int64 v9; // x22
  _BOOL8 v10; // x23
  id v12; // x19
  void (__fastcall **v13)(id, void *, id); // x20
  os_log_s *v14; // x25
  INImageFilePersistence *filePersistence; // x0
  void *v16; // x21
  id v17; // x22
  id v18; // [xsp+8h] [xbp-68h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-60h] BYREF
  const char *v20; // [xsp+14h] [xbp-5Ch]
  __int16 v21; // [xsp+1Ch] [xbp-54h]
  id v22; // [xsp+1Eh] [xbp-52h]

  v9 = *(_QWORD *)&a5;
  v10 = a4;
  v12 = objc_retain(a3);
  v13 = (void (__fastcall **)(id, void *, id))objc_retain(a7);
  v14 = (os_log_s *)INSiriLogContextIntents;
  if ( os_log_type_enabled(INSiriLogContextIntents, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315394;
    v20 = "-[INHService storeImage:scaled:qualityOfService:storeType:completion:]";
    v21 = 2112;
    v22 = v12;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v14,
      OS_LOG_TYPE_INFO,
      "%s Storing image %@ with INImageFilePersistence",
      buf,
      0x16u);
  }
  filePersistence = self->_filePersistence;
  v18 = 0LL;
  v16 = objc_retainAutoreleasedReturnValue(
          -[INImageFilePersistence storeImage:scaled:qualityOfService:storeType:error:](
            filePersistence,
            "storeImage:scaled:qualityOfService:storeType:error:",
            v12,
            v10,
            v9,
            a6,
            &v18));
  v17 = objc_retain(v18);
  v13[2](v13, v16, v17);
  objc_release(v16);
  objc_release(v17);
  objc_release(v13);
  objc_release(v12);
}