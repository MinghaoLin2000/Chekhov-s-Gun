__ZNKSt3__110__function6__funcIZN3mlc14xpc_dispatch_t3addIRFvNS2_16xpc_auto_reply_tENS_6vectorIPKcNS_9allocatorIS8_EEEEEEEvNS2_15function_kind_tEOT_EUlOS5_PvE_NS9_ISJ_EEFbSH_SI_EE7__cloneEv
_QWORD *__fastcall std::__function::__func<void mlc::xpc_dispatch_t::add<void (&)(mlc::xpc_auto_reply_t,std::vector<char const*>)>(mlc::function_kind_t,void (&)(mlc::xpc_auto_reply_t,std::vector<char const*>) &&)::{lambda(mlc::xpc_auto_reply_t&&,void *)#1},std::allocator<mlc::xpc_auto_reply_t&&>,bool ()(void (&)(mlc::xpc_auto_reply_t,std::vector<char const*>) &&,mlc::xpc_auto_reply_t&)>::__clone(
        __int64 a1)
{
  _QWORD *result; // x0
  __int64 v3; // x8

  result = operator new(0x10uLL);
  v3 = *(_QWORD *)(a1 + 8);
  *result = off_100004258;
  result[1] = v3;
  return result;
}