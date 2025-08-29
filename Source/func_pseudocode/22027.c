__ZN3mlc16xpc_auto_reply_tD1Ev
void __fastcall mlc::xpc_auto_reply_t::~xpc_auto_reply_t(void **this)
{
  void *v1; // x0

  v1 = *this;
  if ( v1 )
    xpc_release(v1);
}