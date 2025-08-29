__ZN6google8protobuf14DescriptorPoolC2EPNS0_18DescriptorDatabaseEPNS1_14ErrorCollectorE
__int64 __fastcall google::protobuf::DescriptorPool::DescriptorPool(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x0
  google::protobuf::DescriptorPool::Tables *v7; // x20

  v6 = operator new(64LL, 0x1000C40FA0F61DDLL);
  *(_QWORD *)v6 = 850045863LL;
  *(_OWORD *)(v6 + 8) = 0u;
  *(_OWORD *)(v6 + 24) = 0u;
  *(_OWORD *)(v6 + 40) = 0u;
  *(_QWORD *)(v6 + 56) = 0LL;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = 0LL;
  v7 = (google::protobuf::DescriptorPool::Tables *)operator new(504LL, 0x10A0C40292B2256LL);
  google::protobuf::DescriptorPool::Tables::Tables(v7);
  *(_QWORD *)(a1 + 32) = v7;
  *(_BYTE *)(a1 + 40) = 1;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 41) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  return a1;
}