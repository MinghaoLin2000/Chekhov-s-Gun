__ZN3mlc17xpc_auto_handle_tD1Ev
void __fastcall mlc::xpc_auto_handle_t::~xpc_auto_handle_t(void **this)
{
  void *v1; // x0

  v1 = *this;
  if ( v1 )
    xpc_release(v1);
}