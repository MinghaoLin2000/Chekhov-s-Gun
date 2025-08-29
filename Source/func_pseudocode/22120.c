____ZL29MTLCompilerServiceHandleEventPU24objcproto13OS_xpc_object8NSObject_block_invoke
void __cdecl ___ZL29MTLCompilerServiceHandleEventPU24objcproto13OS_xpc_object8NSObject_block_invoke(
        id a1,
        OS_xpc_object *a2)
{
  uint64_t uint64; // x19
  xpc_object_t reply; // x19
  _xpc_connection_s *remote_connection; // x0
  SandboxExtensionContainer *value; // x21
  SandboxExtensionContainer *v7; // x0
  int v8; // w22
  const char *string; // x0
  char *v10; // x21
  _QWORD *v11; // x26
  const char *v12; // x0
  const char *v13; // x23
  xpc_object_t v14; // x0
  void *v15; // x24
  const void *bytes_ptr; // x22
  size_t length; // x3
  __int64 v18; // x22
  xpc_object_t v19; // x24
  _QWORD *v20; // x23
  size_t v21; // x24
  xpc_object_t v22; // x25
  __int64 v23; // x20
  int v24; // w27
  char *v25; // x0
  dispatch_source_s *v26; // x21
  dispatch_time_t v27; // x0
  void **handler; // [xsp+8h] [xbp-D8h] BYREF
  __int64 v29; // [xsp+10h] [xbp-D0h]
  __int64 (__fastcall *v30)(); // [xsp+18h] [xbp-C8h]
  void *v31; // [xsp+20h] [xbp-C0h]
  void **v32; // [xsp+28h] [xbp-B8h]
  char *v33; // [xsp+30h] [xbp-B0h]
  int v34; // [xsp+38h] [xbp-A8h]
  void *__p[2]; // [xsp+40h] [xbp-A0h] BYREF
  char v36; // [xsp+57h] [xbp-89h]
  _QWORD v37[2]; // [xsp+58h] [xbp-88h] BYREF
  __int64 (__fastcall *v38)(); // [xsp+68h] [xbp-78h]
  void *v39; // [xsp+70h] [xbp-70h]
  OS_xpc_object *v40; // [xsp+78h] [xbp-68h]

  if ( xpc_get_type(a2) != (xpc_type_t)&_xpc_type_error )
  {
    if ( g_idle_timer )
      dispatch_suspend((dispatch_object_t)g_idle_timer);
    v37[0] = _NSConcreteStackBlock;
    v37[1] = 3254779904LL;
    v38 = ___ZL23MTLServiceHandleMessagePU24objcproto13OS_xpc_object8NSObject_block_invoke;
    v39 = &__block_descriptor_40_e8_32o_e20_v36__0I8r_v12Q20r_28l;
    v40 = a2;
    uint64 = xpc_dictionary_get_uint64(a2, "requestType");
    if ( (_DWORD)uint64 == 9 )
    {
      reply = xpc_dictionary_create_reply(a2);
      if ( isProbGuardMallocEnabled(void)::onceToken != -1 )
        dispatch_once(&isProbGuardMallocEnabled(void)::onceToken, &__block_literal_global_34);
      if ( isProbGuardMallocEnabled(void)::result == 1 )
        xpc_dictionary_set_bool(reply, "ProbGuardMalloc", 1);
      remote_connection = xpc_dictionary_get_remote_connection(a2);
      xpc_connection_send_message(remote_connection, reply);
      xpc_release(reply);
      goto LABEL_37;
    }
    value = (SandboxExtensionContainer *)xpc_dictionary_get_value(a2, "sandboxTokens");
    v7 = (SandboxExtensionContainer *)SandboxExtensionContainer::CompilerSandboxExtensions(value);
    SandboxExtensionContainer::SetSandbox(v7, value);
    v8 = xpc_dictionary_get_uint64(a2, "llvmVersion");
    string = xpc_dictionary_get_string(a2, "client_name");
    if ( string )
      v10 = (char *)string;
    else
      v10 = "(unknown client)";
    std::string::basic_string[abi:ne180100]<0>((int)__p, v10);
    handler = _NSConcreteStackBlock;
    v29 = 3221225472LL;
    v30 = ___ZL3ctxiRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE_block_invoke;
    v31 = &__block_descriptor_44_e5_v8__0l;
    LODWORD(v33) = v8;
    v32 = __p;
    if ( ctx(int,std::string const&)::onceToken != -1 )
      dispatch_once(&ctx(int,std::string const&)::onceToken, &handler);
    v11 = (_QWORD *)ctx(int,std::string const&)::context;
    if ( v36 < 0 )
      operator delete(__p[0]);
    v12 = xpc_dictionary_get_string(a2, "pluginPath");
    if ( v12 )
    {
      v13 = v12;
      v14 = xpc_dictionary_get_value(a2, "targetData");
      if ( v14 )
      {
        v15 = v14;
        bytes_ptr = xpc_data_get_bytes_ptr(v14);
        length = xpc_data_get_length(v15);
      }
      else
      {
        bytes_ptr = 0LL;
        length = 0LL;
      }
      v18 = (*(__int64 (__fastcall **)(_QWORD, const char *, const void *, size_t))(*v11 + 32LL))(
              v11[1],
              v13,
              bytes_ptr,
              length);
      if ( (_DWORD)v18 == -1 )
      {
        handler = 0LL;
        asprintf_l((char **)&handler, 0LL, "- Could not load compiler plugin at %s", v13);
        ((void (__fastcall *)(_QWORD *, __int64, _QWORD, _QWORD, void **))v38)(v37, 2LL, 0LL, 0LL, handler);
        free(handler);
LABEL_37:
        idle_timer_reset();
        return;
      }
    }
    else
    {
      v18 = 0xFFFFFFFFLL;
    }
    v19 = xpc_dictionary_get_value(a2, "data");
    if ( xpc_get_type(v19) == (xpc_type_t)&_xpc_type_data )
    {
      v20 = xpc_data_get_bytes_ptr(v19);
      v21 = xpc_data_get_length(v19);
    }
    else
    {
      v20 = 0LL;
      v21 = 0LL;
    }
    if ( (_DWORD)uint64 == 16 )
    {
      v22 = xpc_dictionary_get_value(a2, "machOFD");
      if ( xpc_get_type(v22) == (xpc_type_t)&_xpc_type_fd )
      {
        v20[3] = xpc_fd_dup(v22);
        *((_BYTE *)v20 + 129) = 0;
      }
    }
    if ( xpc_dictionary_get_uint64(a2, "setRelaxedMath") )
      setenv("MTL_REPLACE_FAST_MATH_WITH_RELAXED_MATH", "1", 1);
    v23 = xpc_dictionary_get_uint64(a2, "APISpecifiedTimeoutInSeconds");
    v24 = v23 != 0;
    v25 = getenv("MTL_HANG_TIMER_LENGTH_IN_SECONDS");
    if ( v25 )
    {
      v23 = atoi(v25);
      v24 = 2;
    }
    handler = _NSConcreteStackBlock;
    v29 = 3254779904LL;
    v30 = ___ZL23MTLServiceHandleMessagePU24objcproto13OS_xpc_object8NSObject_block_invoke_29;
    v31 = &__block_descriptor_53_e8_32b_e5_v8__0l;
    v32 = (void **)v37;
    v33 = v10;
    v34 = v24;
    dispatch_source_set_event_handler((dispatch_source_t)gTimer, &handler);
    if ( v23 < 1 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, uint64_t, _QWORD *, size_t, _QWORD *))(*v11 + 24LL))(
        v11[1],
        v18,
        uint64,
        v20,
        v21,
        v37);
    }
    else
    {
      v26 = (dispatch_source_s *)gTimer;
      v27 = dispatch_time(0LL, 1000000000 * v23);
      dispatch_source_set_timer(v26, v27, 0xFFFFFFFFFFFFFFFFLL, 0LL);
      dispatch_activate((dispatch_object_t)gTimer);
      (*(void (__fastcall **)(_QWORD, __int64, uint64_t, _QWORD *, size_t, _QWORD *))(*v11 + 24LL))(
        v11[1],
        v18,
        uint64,
        v20,
        v21,
        v37);
      dispatch_source_set_timer((dispatch_source_t)gTimer, 0xFFFFFFFFFFFFFFFFLL, 0xFFFFFFFFFFFFFFFFLL, 0LL);
    }
    goto LABEL_37;
  }
}