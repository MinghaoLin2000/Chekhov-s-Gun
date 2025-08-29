__ZN6google8protobuf8internal15DynamicMapField4SwapEPNS1_12MapFieldBaseE
__int64 __fastcall google::protobuf::internal::DynamicMapField::Swap(
        google::protobuf::internal::DynamicMapField *this,
        google::protobuf::internal::MapFieldBase *a2)
{
  __int64 v4; // x8
  __int64 result; // x0
  int v6; // w8

  v4 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  *((_QWORD *)a2 + 2) = v4;
  result = sub_1000CF2F4((char *)this + 96, (char *)a2 + 96);
  v6 = *((_DWORD *)a2 + 22);
  *((_DWORD *)a2 + 22) = *((_DWORD *)this + 22);
  *((_DWORD *)this + 22) = v6;
  return result;
}