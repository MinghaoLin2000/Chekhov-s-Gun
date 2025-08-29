__ZN3mlc6detail15dispatch_impl_tIRFvNS_16xpc_auto_reply_tENSt3__16vectorIPKcNS3_9allocatorIS6_EEEEEvJS2_S9_EE15invoke_with_seqIJOS2_EJLm0EEEEvSB_DpT_PvNS3_16integer_sequenceImJXspT0_EEEE
void __fastcall mlc::detail::dispatch_impl_t<void (&)(mlc::xpc_auto_reply_t,std::vector<char const*>),void,mlc::xpc_auto_reply_t,std::vector<char const*>>::invoke_with_seq<mlc::xpc_auto_reply_t&&,0ul>(
        void (__fastcall *a1)(xpc_object_t *, void **),
        __int128 *a2,
        xpc_object_t xarray)
{
  __int128 v4; // q0
  xpc_object_t value; // x0
  void *__p[3]; // [xsp+8h] [xbp-38h] BYREF
  xpc_object_t object[2]; // [xsp+20h] [xbp-20h] BYREF

  v4 = *a2;
  *(_QWORD *)a2 = 0LL;
  *(_OWORD *)object = v4;
  value = xpc_array_get_value(xarray, 0LL);
  mlc::xpc<std::vector<char const*>>::get_value(__p, value);
  a1(object, __p);
  if ( __p[0] )
  {
    __p[1] = __p[0];
    operator delete(__p[0]);
  }
  if ( object[0] )
    xpc_release(object[0]);
}