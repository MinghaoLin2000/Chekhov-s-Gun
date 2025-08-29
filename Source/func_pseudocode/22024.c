__ZNSt3__110__function6__funcIZN3mlc14xpc_dispatch_t3addIRFvNS2_16xpc_auto_reply_tENS_6vectorIPKcNS_9allocatorIS8_EEEEEEEvNS2_15function_kind_tEOT_EUlOS5_PvE_NS9_ISJ_EEFbSH_SI_EEclESH_OSI_
bool __fastcall std::__function::__func<void mlc::xpc_dispatch_t::add<void (&)(mlc::xpc_auto_reply_t,std::vector<char const*>)>(mlc::function_kind_t,void (&)(mlc::xpc_auto_reply_t,std::vector<char const*>) &&)::{lambda(mlc::xpc_auto_reply_t&&,void *)#1},std::allocator<mlc::xpc_auto_reply_t&&>,bool ()(void (&)(mlc::xpc_auto_reply_t,std::vector<char const*>) &&,mlc::xpc_auto_reply_t&)>::operator()(
        __int64 a1,
        int a2,
        xpc_object_t *a3)
{
  xpc_object_t v4; // x20
  __int64 v5; // x22
  size_t count; // x21

  v4 = *a3;
  v5 = *(_QWORD *)(a1 + 8);
  count = xpc_array_get_count(*a3);
  if ( count == 1 )
    mlc::detail::dispatch_impl_t<void (&)(mlc::xpc_auto_reply_t,std::vector<char const*>),void,mlc::xpc_auto_reply_t,std::vector<char const*>>::invoke_with_seq<mlc::xpc_auto_reply_t&&,0ul>(
      v5,
      a2,
      v4);
  return count == 1;
}