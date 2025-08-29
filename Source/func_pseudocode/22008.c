__ZL11xpc_compileN3mlc16xpc_auto_reply_tENSt3__16vectorIPKcNS1_9allocatorIS4_EEEE
__int64 __fastcall xpc_compile(xpc_object_t *a1, __int64 a2)
{
  os_log_s *v3; // x20
  void *v4; // x8
  const char *v5; // x0
  _opaque_pthread_t *v6; // x20
  _BYTE *v7; // x8
  bool v8; // w1
  __int64 v9; // x1
  __int64 result; // x0
  __int64 v11; // [xsp+0h] [xbp-A0h] BYREF
  _BYTE *v12; // [xsp+8h] [xbp-98h]
  void (__cdecl **v13)(void *); // [xsp+10h] [xbp-90h]
  __int64 v14; // [xsp+18h] [xbp-88h]
  pthread_t v15[2]; // [xsp+20h] [xbp-80h] BYREF
  _BYTE buf[12]; // [xsp+30h] [xbp-70h] BYREF
  __int16 v17; // [xsp+3Ch] [xbp-64h]
  __int64 v18; // [xsp+3Eh] [xbp-62h]
  char v19; // [xsp+47h] [xbp-59h]
  pthread_attr_t v20; // [xsp+48h] [xbp-58h] BYREF

  v14 = 0LL;
  v15[0] = 0LL;
  v11 = a2;
  v12 = 0LL;
  v13 = &_free;
  pthread_attr_init(&v20);
  pthread_attr_setstacksize(&v20, 0x404000uLL);
  pthread_create(v15, &v20, (void *(__cdecl *)(void *))compile_thread_handler, &v11);
  pthread_join(v15[0], 0LL);
  v3 = os_log_create("com.apple.mlcompiler.service.compiler", "Compilation");
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_DEFAULT) )
  {
    v4 = v12;
    if ( v12 && !*v12 )
      v4 = &unk_100003E2E;
    *(_DWORD *)buf = 136315394;
    *(_QWORD *)&buf[4] = v4;
    v17 = 2048;
    v18 = v14;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v3,
      OS_LOG_TYPE_DEFAULT,
      "Compilation completed: \"%s\" (%lfms)",
      buf,
      0x16u);
  }
  v19 = 1;
  strcpy(buf, "m");
  v5 = v12;
  if ( v12 && !*v12 )
    v5 = (const char *)&unk_100003E2E;
  v6 = (_opaque_pthread_t *)xpc_string_create(v5);
  v15[1] = v6;
  xpc_dictionary_set_value(*a1, buf, v6);
  if ( v6 )
    xpc_release(v6);
  if ( v19 < 0 )
  {
    operator delete(*(void **)buf);
    v7 = v12;
    if ( v12 )
      goto LABEL_13;
  }
  else
  {
    v7 = v12;
    if ( v12 )
    {
LABEL_13:
      v8 = *v7 == 0;
      goto LABEL_16;
    }
  }
  v8 = 0;
LABEL_16:
  mlc::xpc_auto_message_t::set_ret((mlc::xpc_auto_message_t *)a1, v8);
  xpc_dictionary_send_reply(*a1);
  if ( *a1 )
    xpc_release(*a1);
  *a1 = 0LL;
  result = (__int64)v12;
  v12 = 0LL;
  if ( result )
    return ((__int64 (__fastcall *)(__int64, __int64))v13)(result, v9);
  return result;
}