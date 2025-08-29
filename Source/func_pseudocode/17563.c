___destroy_helper_block_ea8_32s40s48s56s
void __fastcall __destroy_helper_block_ea8_32s40s48s56s(__int64 a1)
{
  void *v2; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_release(*(id *)(a1 + 56));
  objc_release(*(id *)(a1 + 48));
  objc_release(*(id *)(a1 + 40));
  v2 = *(void **)(a1 + 32);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}