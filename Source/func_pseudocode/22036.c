__ZNK3mlc14xpc_dispatch_t15handle_xpc_callEPv.cold.2
void __fastcall mlc::xpc_dispatch_t::handle_xpc_call(__int64 a1, os_log_s *a2)
{
  int v2; // [xsp+0h] [xbp-20h] BYREF
  __int64 v3; // [xsp+4h] [xbp-1Ch]

  v2 = 136315138;
  v3 = a1;
  _os_log_debug_impl((void *)&_mh_execute_header, a2, OS_LOG_TYPE_DEBUG, "Unhandled message: %s", (uint8_t *)&v2, 0xCu);
}