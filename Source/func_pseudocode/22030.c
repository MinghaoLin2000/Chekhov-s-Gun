__ZNK3mlc14xpc_dispatch_t15handle_xpc_callEPv
void __usercall mlc::xpc_dispatch_t::handle_xpc_call(os_log_s **this@<X0>, xpc_object_t object@<X1>, __int64 a3@<X8>)
{
  char *v6; // x19
  xpc_type_t type; // x23
  os_log_s *v8; // x22
  _BOOL4 v9; // w0
  uint64_t uint64; // x22
  xpc_object_t array; // x0
  xpc_object_t v12; // x21

  v6 = xpc_copy_description(object);
  type = xpc_get_type(object);
  v8 = *this;
  v9 = os_log_type_enabled(v8, OS_LOG_TYPE_DEBUG);
  if ( type != (xpc_type_t)&_xpc_type_dictionary )
  {
    if ( v9 )
      mlc::xpc_dispatch_t::handle_xpc_call(v6, v8);
    goto LABEL_4;
  }
  if ( v9 )
    mlc::xpc_dispatch_t::handle_xpc_call(v6, v8);
  uint64 = xpc_dictionary_get_uint64(object, "fc");
  array = xpc_dictionary_get_array(object, "args");
  if ( !uint64 || (v12 = array, xpc_get_type(array) != (xpc_type_t)&_xpc_type_array) )
  {
LABEL_4:
    *(_BYTE *)a3 = 0;
    *(_BYTE *)(a3 + 16) = 0;
    if ( !v6 )
      return;
    goto LABEL_5;
  }
  *(_QWORD *)a3 = uint64;
  *(_QWORD *)(a3 + 8) = v12;
  *(_BYTE *)(a3 + 16) = 1;
  if ( !v6 )
    return;
LABEL_5:
  free(v6);
}