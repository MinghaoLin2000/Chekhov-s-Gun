___copy_helper_block_e8_32s40s48b
void __fastcall __copy_helper_block_e8_32s40s48b(__int64 a1, __int64 a2)
{
  id v4; // x0
  id v5; // x0
  const void *v6; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(*(id *)(a2 + 32));
  v5 = objc_retain(*(id *)(a2 + 40));
  v6 = *(const void **)(a2 + 48);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  _Block_object_assign((void *)(a1 + 48), v6, 7);
}