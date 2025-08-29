-[PassKitServicesXPCService imageDataForTransaction:size:completion:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[PassKitServicesXPCService imageDataForTransaction:size:completion:](
        PassKitServicesXPCService *self,
        SEL a2,
        id a3,
        CGSize a4,
        id a5)
{
  (*((void (__fastcall **)(id, _QWORD, CGSize, __n128))a5 + 2))(a5, 0LL, a4, *(__n128 *)&a4.height);
}