_CompareGuid
bool __fastcall CompareGuid(int32x4_t *a1, int32x4_t *a2)
{
  int8x16_t v2; // q0

  v2 = (int8x16_t)vsubq_s32(*a1, *a2);
  return vorr_s8(*(int8x8_t *)v2.i8, (int8x8_t)*(_OWORD *)&vextq_s8(v2, v2, 8uLL)) == 0LL;
}