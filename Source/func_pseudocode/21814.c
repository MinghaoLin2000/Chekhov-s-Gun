__ZN9serialize10Serializer4saveEPNS_4PrimE
__int64 __fastcall serialize::Serializer::save(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 8) = xpc_dictionary_create(0LL, 0LL, 0LL);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL))(a2, a1);
  return *(_QWORD *)(a1 + 8);
}