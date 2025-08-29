_piston_smb1_set_uid
__int64 __fastcall piston_smb1_set_uid(__int64 a1, __int16 a2)
{
  pthread_mutex_t *v4; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = (pthread_mutex_t *)(a1 + 2496);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 2496));
  *(_WORD *)(a1 + 138) = a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return pthread_mutex_unlock(v4);
}