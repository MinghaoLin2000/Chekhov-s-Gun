___copy_helper_block_ea8_32s40s48s56b
void __fastcall __copy_helper_block_ea8_32s40s48s56b(__int64 a1, __int64 a2)
{
  id v4; // x0
  id v5; // x0
  id v6; // x0
  const void *v7; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(*(id *)(a2 + 32));
  v5 = objc_retain(*(id *)(a2 + 40));
  v6 = objc_retain(*(id *)(a2 + 48));
  v7 = *(const void **)(a2 + 56);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  _Block_object_assign((void *)(a1 + 56), v7, 7);
}