__ZN3mlc18xpc_auto_message_t7set_retEb
xpc_object_t *__fastcall mlc::xpc_auto_message_t::set_ret(xpc_object_t *this, bool value)
{
  xpc_object_t v3; // x20
  void *__p; // [xsp+0h] [xbp-30h] BYREF
  char v6; // [xsp+17h] [xbp-19h]
  xpc_object_t v7; // [xsp+18h] [xbp-18h]

  v6 = 1;
  LOWORD(__p) = 114;
  v3 = xpc_bool_create(value);
  v7 = v3;
  xpc_dictionary_set_value(*this, (const char *)&__p, v3);
  if ( v3 )
    xpc_release(v3);
  if ( v6 < 0 )
    operator delete(__p);
  return this;
}