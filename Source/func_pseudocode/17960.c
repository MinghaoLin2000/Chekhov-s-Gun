___copy_helper_block_e8_32s
void __fastcall __copy_helper_block_e8_32s(__int64 a1, __int64 a2)
{
  void *v2; // x1
  id *v3; // x0

  v2 = *(void **)(a2 + 32);
  v3 = (id *)(a1 + 32);
  *v3 = 0LL;
  objc_storeStrong(v3, v2);
}