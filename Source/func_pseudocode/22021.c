__ZNKSt3__110__function6__funcIZN3mlc14xpc_dispatch_t3addIRFvNS2_16xpc_auto_reply_tENS_6vectorIPKcNS_9allocatorIS8_EEEEEEEvNS2_15function_kind_tEOT_EUlOS5_PvE_NS9_ISJ_EEFbSH_SI_EE7__cloneEPNS0_6__baseISL_EE
__int64 __fastcall std::__function::__func<void mlc::xpc_dispatch_t::add<void (&)(mlc::xpc_auto_reply_t,std::vector<char const*>)>(mlc::function_kind_t,void (&)(mlc::xpc_auto_reply_t,std::vector<char const*>) &&)::{lambda(mlc::xpc_auto_reply_t&&,void *)#1},std::allocator<mlc::xpc_auto_reply_t&&>,bool ()(void (&)(mlc::xpc_auto_reply_t,std::vector<char const*>) &&,mlc::xpc_auto_reply_t&)>::__clone(
        __int64 result,
        _QWORD *a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(result + 8);
  *a2 = off_100004258;
  a2[1] = v2;
  return result;
}