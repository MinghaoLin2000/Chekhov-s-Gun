__ZNSt3__110unique_ptrINS_11__hash_nodeINS_17__hash_value_typeIN3mlc15function_kind_tENS_8functionIFbONS3_16xpc_auto_reply_tEPvEEEEES8_EENS_22__hash_node_destructorINS_9allocatorISC_EEEEED1B8ne180100Ev
__int64 __fastcall std::unique_ptr<std::__hash_node<std::__hash_value_type<mlc::function_kind_t,std::function<bool ()(mlc::xpc_auto_reply_t &&,void *)>>,mlc::xpc_auto_reply_t &&>,std::__hash_node_destructor<std::allocator<std::__hash_value_type<mlc::function_kind_t,std::function<bool ()(mlc::xpc_auto_reply_t &&,void *)>>>>>::~unique_ptr[abi:ne180100](
        __int64 a1)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x0

  v2 = *(_QWORD **)a1;
  *(_QWORD *)a1 = 0LL;
  if ( v2 )
  {
    if ( *(_BYTE *)(a1 + 16) )
    {
      v3 = (_QWORD *)v2[6];
      if ( v3 == v2 + 3 )
      {
        (*(void (__fastcall **)(_QWORD *))(v2[3] + 32LL))(v2 + 3);
      }
      else if ( v3 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v3 + 40LL))(v3);
      }
    }
    operator delete(v2);
  }
  return a1;
}